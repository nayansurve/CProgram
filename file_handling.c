#include<stdio.h>
int main() {
    // File pointer
    FILE *file;

    // Open a file for writing
    file = fopen("example.txt", "w");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit with an error code
    }

    // Write data to the file
    fprintf(file, "HelloWorld");

    // Close the file
    fclose(file);

    // Open the file for reading
    file = fopen("example.txt", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit with an error code
    }

    // Read data from the file
    char buffer[100];
    fscanf(file, "%s", buffer);

    // Display the read data
    printf("Data read from the file: %s\n", buffer);

    // Close the file
    fclose(file);

    return 0; // Exit with success
}
