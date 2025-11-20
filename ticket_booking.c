#include <stdio.h>
#include <string.h>

struct Booking {
    char name[50];
    char ticketType[20];
    int quantity;
    float totalAmount;
};

void bookTicket() {
    struct Booking b;
    FILE *fp;

    int choice;
    float price;

    printf("\nEnter customer name: ");
    scanf("%s", b.name);

    printf("\nSelect Ticket Type:\n");
    printf("1. Movie (Rs.150)\n");
    printf("2. Bus   (Rs.100)\n");
    printf("3. Train (Rs.300)\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            strcpy(b.ticketType, "Movie");
            price = 150;
            break;
        case 2:
            strcpy(b.ticketType, "Bus");
            price = 100;
            break;
        case 3:
            strcpy(b.ticketType, "Train");
            price = 300;
            break;
        default:
            printf("Invalid option!\n");
            return;
    }

    printf("Enter number of tickets: ");
    scanf("%d", &b.quantity);

    b.totalAmount = price * b.quantity;

    fp = fopen("bookings.txt", "a");
    fwrite(&b, sizeof(b), 1, fp);
    fclose(fp);

    printf("\nTicket Booked Successfully!\n");
    printf("Total Amount: Rs %.2f\n", b.totalAmount);
}

void viewBookings() {
    struct Booking b;
    FILE *fp = fopen("bookings.txt", "r");

    if(fp == NULL) {
        printf("\nNo bookings found.\n");
        return;
    }

    printf("\n===== All Bookings =====\n");
    while(fread(&b, sizeof(b), 1, fp)) {
        printf("\nName: %s", b.name);
        printf("\nTicket Type: %s", b.ticketType);
        printf("\nQuantity: %d", b.quantity);
        printf("\nTotal Amount: Rs %.2f\n", b.totalAmount);
        printf("-------------------------------\n");
    }

    fclose(fp);
}

void searchBooking() {
    char searchName[50];
    struct Booking b;
    FILE *fp = fopen("bookings.txt", "r");
    int found = 0;

    if(fp == NULL) {
        printf("\nNo bookings found.\n");
        return;
    }

    printf("Enter customer name to search: ");
    scanf("%s", searchName);

    while(fread(&b, sizeof(b), 1, fp)) {
        if(strcmp(b.name, searchName) == 0) {
            printf("\nBooking Found:\n");
            printf("Name: %s\n", b.name);
            printf("Ticket Type: %s\n", b.ticketType);
            printf("Quantity: %d\n", b.quantity);
            printf("Total Amount: Rs %.2f\n", b.totalAmount);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("No booking found for this name.\n");
    }

    fclose(fp);
}

void updateBooking() {
    struct Booking b;
    FILE *fp, *temp;

    char searchName[50];
    int found = 0;
    int option, newChoice;
    float price;

    fp = fopen("bookings.txt", "r");
    temp = fopen("temp.txt", "w");

    if(fp == NULL) {
        printf("\nNo bookings found.\n");
        return;
    }

    printf("Enter customer name to update: ");
    scanf("%s", searchName);

    while(fread(&b, sizeof(b), 1, fp)) {
        if(strcmp(b.name, searchName) == 0) {
            found = 1;

            printf("\nBooking Found!\n");
            printf("Name: %s\nTicket Type: %s\nQuantity: %d\nAmount: %.2f\n",
                   b.name, b.ticketType, b.quantity, b.totalAmount);

            printf("\nWhat do you want to update?\n");
            printf("1. Ticket Type\n");
            printf("2. Number of Tickets\n");
            printf("Enter choice: ");
            scanf("%d", &option);

            if(option == 1) {
                printf("\nSelect new Ticket Type:\n");
                printf("1. Movie (Rs.150)\n");
                printf("2. Bus   (Rs.100)\n");
                printf("3. Train (Rs.300)\n");
                printf("Enter choice: ");
                scanf("%d", &newChoice);

                switch(newChoice) {
                    case 1:
                        strcpy(b.ticketType, "Movie");
                        price = 150;
                        break;
                    case 2:
                        strcpy(b.ticketType, "Bus");
                        price = 100;
                        break;
                    case 3:
                        strcpy(b.ticketType, "Train");
                        price = 300;
                        break;
                    default:
                        printf("Invalid choice!\n");
                        fclose(fp);
                        fclose(temp);
                        return;
                }

                b.totalAmount = price * b.quantity;
            }
            else if(option == 2) {
                printf("Enter new number of tickets: ");
                scanf("%d", &b.quantity);

                if(strcmp(b.ticketType, "Movie") == 0) price = 150;
                else if(strcmp(b.ticketType, "Bus") == 0) price = 100;
                else price = 300;

                b.totalAmount = price * b.quantity;
            }
            else {
                printf("Invalid option!\n");
            }
        }

        fwrite(&b, sizeof(b), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("bookings.txt");
    rename("temp.txt", "bookings.txt");

    if(found)
        printf("\nBooking updated successfully!\n");
    else
        printf("\nBooking not found.\n");
}

void deleteBooking() {
    struct Booking b;
    FILE *fp, *temp;

    char deleteName[50];
    int found = 0;

    fp = fopen("bookings.txt", "r");
    temp = fopen("temp.txt", "w");

    if(fp == NULL) {
        printf("\nNo bookings found.\n");
        return;
    }

    printf("Enter customer name to delete: ");
    scanf("%s", deleteName);

    while(fread(&b, sizeof(b), 1, fp)) {
        if(strcmp(b.name, deleteName) == 0) {
            found = 1;
            printf("\nBooking deleted successfully.\n");
        }
        else {
            fwrite(&b, sizeof(b), 1, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("bookings.txt");
    rename("temp.txt", "bookings.txt");

    if(!found)
        printf("\nBooking not found.\n");
}

int main() {
    int choice;

    while(1) {
        printf("\n===== TICKET BOOKING MANAGEMENT SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. View All Bookings\n");
        printf("3. Search Booking\n");
        printf("4. Update Booking\n");
        printf("5. Delete Booking\n");   // NEW OPTION
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: bookTicket(); break;
            case 2: viewBookings(); break;
            case 3: searchBooking(); break;
            case 4: updateBooking(); break;
            case 5: deleteBooking(); break;  // NEW CALL
            case 6:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
