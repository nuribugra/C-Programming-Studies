#include <stdio.h>
#include <stdlib.h>

typedef struct item {
  int id;
  int grade;
  struct item *next;
} node;

// Append
void appendToList(node** head, int id, int grade) {
  node* newNode = (node*) malloc(sizeof(node));

  newNode->id = id;
  newNode->grade = grade;
  newNode->next = NULL;

  if (*head == NULL) {
    *head = newNode;
  } else {

    node* currentNode = *head;

    while (currentNode->next != NULL) {
      currentNode = currentNode->next;
    }

    currentNode->next = newNode;

  }
}

void printList(node* head) {
  node* currentNode = head;

  while (currentNode != NULL) {
    printf("[%2d: %2d] ", currentNode->id, currentNode->grade);
    currentNode = currentNode->next;
  }
  printf("\n");
}

// Deleting
void removeIdFromList(node** head, int id) {
  node* currentNode;
  node* prevNode;

  if (*head == NULL) {
    return;
  }

  prevNode = *head;
  currentNode = prevNode->next;

  if (prevNode->id == id) {
    *head = currentNode;
    free(prevNode);
  }

  while (currentNode != NULL) {
    if (currentNode->id == id) {
      prevNode->next = currentNode->next;
      free(currentNode);
      break;
    }
    prevNode = currentNode;
    currentNode = currentNode->next;
  }

}

// Searching
node* findIdInList(node** head, int id) {
  node* currentNode = *head;

  while (currentNode != NULL && currentNode->id != id) {
    currentNode = currentNode->next;
  }

  return currentNode;
}

// Updating
void updateList(node** head, int id, int grade) {
  node* currentNode = *head;

  while (currentNode != NULL) {
    if (currentNode->id == id) {
      currentNode->grade = grade;
    }
    currentNode = currentNode->next;
  }
}

// Inserting
void insertToList(node** head, int targetId, int id, int grade) {
  node* newNode = (node*)malloc(sizeof(node));
  newNode->id = id;
  newNode->grade = grade;
  newNode->next = NULL;

  if (*head == NULL) {
    *head = newNode;
    return;
  }

  node* currentNode = *head;
  while (currentNode != NULL && currentNode->id != targetId) {
    currentNode = currentNode->next;
  }


  if (currentNode == NULL) {
    printf("Target ID %d not found in the list. No insertion.\n", targetId);
    free(newNode);
    return;
  }

  newNode->next = currentNode->next;

  currentNode->next = newNode;
}

int main() {
  node* head = NULL;

  appendToList(&head, 404, 100);
  appendToList(&head, 320, 85);

  printList(head);

  node* searchingNode = findIdInList(&head, 320);

  if (searchingNode != NULL) {
    printf("[%d: %d]\n", searchingNode->id, searchingNode->grade);
  } else {
    printf("Not in list..\n");
  }

  node* emptyHead = NULL; // This head node is empty. There isn't any nodes in it.

  searchingNode = findIdInList(&emptyHead, 320);

  if (searchingNode != NULL) {
    printf("[%d: %d]\n", searchingNode->id, searchingNode->grade);
  } else {
    printf("Not in list..\n");
  }

  // removeIdFromList(&head, 404);
  // printList(head);

  updateList(&head, 320, 75);
  printList(head);

  insertToList(&head, 404, 500, 95);
  printList(head);

  insertToList(&head, 999, 600, 88);
  printList(head);

  return 0;
}
