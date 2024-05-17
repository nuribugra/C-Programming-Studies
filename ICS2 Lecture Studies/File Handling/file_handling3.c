#include <stdio.h>

int main() {
    char str[80]; // Declare a character array to store a string
    float f; // Declare a float variable
    FILE *pFile; // Declare a file pointer

    pFile = fopen("myfile.txt", "w+"); // Open a file named "myfile.txt" in write mode

    fprintf(pFile, "%f %s", 3.1416, "PI"); // Write the float value 3.1416 and the string "PI" to the file
    rewind(pFile); // Move the file pointer to the beginning of the file

    fscanf(pFile, "%f", &f); // Read a float value from the file and store it in the variable f
    fscanf(pFile, "%s", str); // Read a string from the file and store it in the character array str

    fclose(pFile); // Close the file

    printf("I have read: %f and %s\n", f, str); // Print the values read from the file

    return 0;
}
