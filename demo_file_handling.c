#include<stdio.h>
int main() {
    // File pointer
    FILE *file;

    // Open a file for writing
    file = fopen("demo.txt", "w");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit with an error code
    }

    // Write data to the file
    fprintf(file, "DemoLecture");

    // Close the file
    fclose(file);

    // Open the file for reading
    file = fopen("demo.txt", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit with an error code
    }
}
