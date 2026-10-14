#include <stdio.h>
#include <string.h>



typedef struct {
    int studentID;
    char name[100];
    float midtermMark;
    float finalMark;
    float totalMark;
} Student;



void promptStudentDetails(Student *studentPtr) {
    printf("\nEnter Student ID: ");
    scanf("%d", &studentPtr->studentID);
    getchar();
    printf("Enter Student Name: ");
    fgets(studentPtr->name, 100, stdin);
    
    studentPtr->name[strcspn(studentPtr->name, "\n")] = 0;

    printf("Enter Midterm Mark (out of 100): ");
    scanf("%f", &studentPtr->midtermMark);

    printf("Enter Final Mark (out of 100): ");
    scanf("%f", &studentPtr->finalMark);

    
    studentPtr->totalMark = studentPtr->midtermMark + studentPtr->finalMark;
}



void displayStudent(const Student *studentPtr) {
    printf("ID          : %d\n", studentPtr->studentID);
    printf("Name        : %s\n", studentPtr->name);
    printf("Midterm Mark: %.2f\n", studentPtr->midtermMark);
    printf("Final Mark  : %.2f\n", studentPtr->finalMark);
    printf("Total Mark  : %.2f\n", studentPtr->totalMark);
}



int findStudentIndexByID(const Student roster[], int size, int searchID) {
    for (int i = 0; i < size; i++) {
        if (roster[i].studentID == searchID) {
            printf("\nStudent found at index %d:\n", i);
            displayStudent(&roster[i]);
            return i;
        }
    }
    printf("\nError: Student with ID %d was not found in the roster.\n", searchID);
    return -1;
}



int findTopStudentIndex(const Student roster[], int size) {
    if (size == 0) {
        printf("\nError: Roster is empty. No top student available.\n");
        return -1;
    }

    int topIndex = 0;
    for (int i = 1; i < size; i++) {
        if (roster[i].totalMark > roster[topIndex].totalMark) {
            topIndex = i;
        }
    }
    printf("\nTop scoring student found at index %d (Total Mark: %.2f)\n", topIndex, roster[topIndex].totalMark);
    return topIndex;
}



int main() {
    Student courseRoster[150]; 
    int rosterSize = 0;                     
    int choice;

    while (1) {
        printf("\n========== Student Management System ==========\n");
        printf("1. Add Student\n");
        printf("2. Display Full Roster\n");
        printf("3. Find Student by ID\n");
        printf("4. Show Top Student\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        if (choice == 1) {
        
            if (rosterSize >= 150) {
                printf("Error: Roster is full! Cannot add more students (Max: 150).\n");
                continue;
            }

            Student tempStudent;
            promptStudentDetails(&tempStudent);

            
            int isDuplicate = 0;
            for (int i = 0; i < rosterSize; i++) {
                if (courseRoster[i].studentID == tempStudent.studentID) {
                    isDuplicate = 1;
                    break;
                }
            }

            if (isDuplicate) {
                printf("\nError: Student with ID %d already exists! Record not added.\n", tempStudent.studentID);
            } else {
                courseRoster[rosterSize] = tempStudent;
                rosterSize++;
                printf("\nStudent added successfully!\n");
            }

        } else if (choice == 2) {
            
            if (rosterSize == 0) {
                printf("\nThe roster is currently empty.\n");
            } else {
                printf("\n--- Full Student Roster (Total: %d) ---\n", rosterSize);
                for (int i = 0; i < rosterSize; i++) {
                    printf("\n[ Student #%d ]\n", i + 1);
                    displayStudent(&courseRoster[i]);
                }
            }

        } else if (choice == 3) {
            
            if (rosterSize == 0) {
                printf("\nThe roster is currently empty.\n");
                continue;
            }
            int searchID;
            printf("Enter Student ID to search: ");
            scanf("%d", &searchID);
            findStudentIndexByID(courseRoster, rosterSize, searchID);

        } else if (choice == 4) {
            // Find and show top student[cite: 1]
            int topIndex = findTopStudentIndex(courseRoster, rosterSize);
            if (topIndex != -1) {
                printf("\n--- Top Student Information ---\n");
                displayStudent(&courseRoster[topIndex]);
            }

        } else if (choice == 5) {
            printf("Exiting program. Goodbye!\n");
            break;
        } else {
            printf("Invalid option! Please enter a number between 1 and 5.\n");
        }
    }

    return 0;
}








