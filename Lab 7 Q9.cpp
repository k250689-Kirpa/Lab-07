//Question 9: A travel company maintains an online bus booking system for a bus with 10 seats. The seats are
//represented by an array where 0 means empty and 1 means booked.
//When a passenger enters a seat number (0–9):
//● If the seat is empty, mark it booked and display a confirmation.
//● If it’s already booked, display “Seat already booked.”
//After 5 successful bookings, stop the program and display the final seat status
//Write a C program to simulate the bus seat booking process as described above.


#include <stdio.h>

int main() {
    int arr[10] = {0, 0, 0, 1, 0, 0, 1, 1, 0, 1};
    int n;
    int bookings = 0;
    
    while (bookings < 5) {
        printf("Enter seat number (0-9): ");
        scanf("%d", &n);

        
        if (arr[n] == 1) {
            printf("Seat already booked\n\n");
        }
        else {
            arr[n] = 1;
            bookings++;
            printf("Seat has been confirmed and booked on your name\n\n");
        }
    }
    
    
    printf("Final seat status (0 = empty, 1 = booked):\n");
    for (int i = 0; i < 10; i++) {
        printf("Seat %d : %d\n", i, arr[i]);
    }
    
    return 0;
}


