#include <stdio.h> /* Standard I/O functions */
#include <stdlib.h> /* Standard library functions */
#include <string.h> /* String handling functions */
#include <time.h> /* Time functions */

void createFile();
void writeFile();
void readFile();
void deleteFile();
void renameFile();
void copyFile();
void showDateTime();
void calculator();
void clearInputBuffer();
void about();

int main() {
    int choice;
    while (1) {
        printf("\n========== MINI OPERATING SYSTEM ==========\n");
        printf("1. Create File\n");
        printf("2. Write to File\n");
        printf("3. Read File\n");
        printf("4. Delete File\n");
        printf("5. Rename File\n");
        printf("6. Copy File\n");
        printf("7. Show Date & Time\n");
        printf("8. Calculator\n");
        printf("9. About MINI OS\n");
        printf("10. Exit\n");
        printf("===========================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: createFile(); break;
            case 2: writeFile(); break;
            case 3: readFile(); break;
            case 4: deleteFile(); break;
            case 5: renameFile(); break;
            case 6: copyFile(); break;
            case 7: showDateTime(); break;
            case 8: calculator(); break;
            case 9: about(); break;
            case 10:
            printf("Exiting MINI OS. Goodbye!\n");
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

/* Create File */
void createFile() {
    FILE *fp; /* File pointer */
    char filename[50]; 
    printf("Enter file name: ");
    scanf("%s", filename);
    fp = fopen(filename, "w");/* Open file in write mode */
    if (fp == NULL) {
        printf("File creation failed!\n");
    } else {
        printf("File created successfully!\n");
        fclose(fp); /* Close the file pointer */
    }
}


/* Write to File */
void writeFile() {
    FILE *fp; /* File pointer */
    char filename[50], data[200];
    printf("Enter file name: ");
    scanf("%s", filename);
    fp = fopen(filename, "a");/* Open file in append mode */
    if (fp == NULL) {
        printf("Unable to open file!\n");
        return;
    }
    printf("Enter data (end with #):\n");
    getchar(); // Clear newline character from buffer
    while (1) {
        fgets(data, 200, stdin); /* Read input line */
        if (strchr(data, '#')) {/* Check for end marker */
            break;
        }
        fputs(data, fp); /* Write data to file */
    }
    fclose(fp); /* Close the file pointer */
    printf("Data written successfully!\n");
}


/* Read File */
void readFile() {
    FILE *fp;
    char filename[50], ch;
    printf("Enter file name: ");
    scanf("%s", filename);
    fp = fopen(filename, "r"); /* Open file in read mode */
    if (fp == NULL) {
        printf("File not found!\n");
    return;
    }
    printf("\n--- File Content ---\n");
    while ((ch = fgetc(fp)) != EOF) { /* Read character by character */
        putchar(ch); /* Display character */
    }
    fclose(fp); /* Close the file pointer */
    printf("\n--- End of File ---\n");
}

/* Delete File */
void deleteFile() {
    char filename[50];
    printf("Enter file name to delete: ");
    scanf("%s", filename);
    if (remove(filename) == 0){ /* Remove the file */
        printf("File deleted successfully!\n");
    } else {
        printf("Unable to delete file!\n");
    }
}


/* Rename File */
void renameFile() {
    char oldname[50], newname[50];
    printf("Enter old file name: ");
    scanf("%s", oldname);
    printf("Enter new file name: ");
    scanf("%s", newname);
    if (rename(oldname, newname) == 0){ /* Rename the file */
        printf("File renamed successfully!\n");
    } else {
        printf("Rename failed!\n");
    }
}

/* Copy File */
void copyFile() {
    FILE *src, *dest; /* File pointers */
    char source[50], target[50], ch;
    printf("Enter source file: ");
    scanf("%s", source);
    printf("Enter target file: ");
    scanf("%s", target);
    src = fopen(source, "r"); /* Open source file in read mode */
    dest = fopen(target, "w"); /* Open target file in write mode */
    if (src == NULL || dest == NULL) {
        printf("File error!\n");
        return;
    }
    while ((ch = fgetc(src)) != EOF) { /* Copy content */
        fputc(ch, dest); /* Write to target file */
    }
    fclose(src); /* Close the source file pointer */
    fclose(dest); /* Close the destination file pointer */
    printf("File copied successfully!\n");
}

/* Date & Time */
void showDateTime() {
    time_t t; /* time variable */
    time(&t); /* Get current time */
    printf("Current Date & Time: %s", ctime(&t)); /* Display date and time */
}

/* Calculator */
void calculator() {
    int a, b, ch;
    printf("\nCalculator\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice: ");
    scanf("%d", &ch);
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    switch (ch) {
        case 1: printf("Result = %d\n", a + b); break;
        case 2: printf("Result = %d\n", a - b); break;
        case 3: printf("Result = %d\n", a * b); break;
        case 4:
        if (b != 0){
            printf("Result = %.2f\n", (float)a / b);
        } 
        else{
            printf("Division by zero not allowed!\n");
        }
        break;
    default:
        printf("Invalid choice!\n");
    }
}


void about() {
    printf("\nMINI OPERATING SYSTEM\n");
    printf("Version: 1.0\n");
    printf("Developed by: Samar\n");
    printf("This is a simple mini operating system simulation in C.\n");
}