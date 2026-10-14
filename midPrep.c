// bujhi nai


#include <stdio.h>
#include <string.h>

int add_booking(int id[], char guest_name[][101], int booked_room[], char date[][11], int num_guest, int room_no[], char room_type[][7], int rent[], int booked[]) {

    char req_type[7];
    printf("Enter your room type: (single/double/suite)\n");
    scanf("%s", req_type);
    int idx = -1;
    for (int i = 0; i < 10; i++) {
        if (strcmp(req_type, room_type[i]) == 0 && booked[i] == 0) {
            idx = i;
            break;
        }
    }
    if (idx == -1) {
        printf("Sorry, no vacant room of type '%s' is available.\n", req_type);
        return 0;
    }
    int curr = num_guest;
    id[curr] = 1000 + num_guest;
    printf("Room %d is available (rent: %d). Enter your name: \n", room_no[idx], rent[idx]);
    scanf("%s", guest_name[curr]);
    printf("Enter check-in date (dd/mm/yyyy): \n");
    scanf("%s", date[curr]);
    booked_room[curr] = room_no[idx];
    booked[idx] = 1;
    printf("Reservation confirmed! Your guest ID is %d. Room %d, Rent %d/night.\n", id[curr], room_no[idx], rent[idx]);
    return 1;
}

void search_id(int id[], char guest_name[][101], int booked_room[], char date[][11], int num_guest, char room_type[][7], int rent[], int room_no[]) {
    int key;
    printf("Enter the ID to search: \n");
    scanf("%d", &key);
    for (int i = 0; i < num_guest; i++) {
        if (id[i] == key) {
            for (int j = 0; j < 10; j++) {
                if (room_no[j] == booked_room[i]) {
                    printf("Name: %s | ID: %d | Room: %d (%s) | Rent: %d | Date: %s\n", guest_name[i], id[i], booked_room[i], room_type[j], rent[j], date[i]);
                    return;
                }
            }
        }
    }
    printf("No reservation found with ID %d.\n", key);
}

void print_vacant(int room_no[], char room_type[][7], int rent[], int booked[]) {
    printf("Vacant rooms:\n");
    int has_empty = 0;
    for (int i = 0; i < 10; i++) {
        if (booked[i] == 0) {
            printf("Room %d - type %s - rent %d\n", room_no[i], room_type[i], rent[i]);
            has_empty = 1;
        }
    }
    if (!has_empty) printf("No vacant rooms right now.\n");
}

int main() {
    int room_no[10]  = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    int rent[10]     = {30, 50, 50, 30, 30, 70, 50, 70, 30, 70};
    int booked[10] = {0};
    char room_type[10][7] = {"single", "double", "double", "single", "single", "suite", "double", "suite", "single", "suite"};
    int id[100] = {0};
    int booked_room[100] = {0};
    char guest_name[100][101];
    char date[100][11];
    int num_guest = 0;
    char user_choice[10];
    while (1) {
        printf("\n1. For new reservation type 'r'\n"
               "2. For searching reservation type 's'\n"
               "3. For vacant rooms type 'v'\n"
               "4. To exit the program type 'exit'\n");
        scanf("%s", user_choice);
        if (strcmp(user_choice, "r") == 0) num_guest += add_booking(id, guest_name, booked_room, date, num_guest, room_no, room_type, rent, booked);
        else if (strcmp(user_choice, "s") == 0) search_id(id, guest_name, booked_room, date, num_guest, room_type, rent, room_no);
        else if (strcmp(user_choice, "v") == 0) print_vacant(room_no, room_type, rent, booked);
        else if (strcmp(user_choice, "exit") == 0) break;
        else printf("Invalid choice, try again.\n");
    }
    return 0;
}