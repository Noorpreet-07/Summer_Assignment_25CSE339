#include <stdio.h>

int seats[10] = {0};  


void showSeats() 
{
    printf("\n--- Seat Status ---\n");
    for(int i = 0; i < 10; i++) 
    {
        if(seats[i] == 0)
        {
            printf("Seat %d: Available\n", i + 1);
        }
        else
        {
            printf("Seat %d: Booked\n", i + 1);
   
        }   
    }
}


void bookTicket() 
{
    int seatNo;
    printf("\nEnter seat number to book (1-10): ");
    scanf("%d", &seatNo);

    if(seatNo < 1 || seatNo > 10) 
    {
        printf("Invalid seat number!\n");
        return;
    }

    if(seats[seatNo - 1] == 1) 
    {
        printf("Seat already booked!\n");
    } 
    else 
    {
        seats[seatNo - 1] = 1;
        printf("Ticket booked successfully!\n");
    }
}


void cancelTicket() 
{
    int seatNo;
    printf("\nEnter seat number to cancel (1-10): ");
    scanf("%d", &seatNo);

    if(seatNo < 1 || seatNo > 10) 
    {
        printf("Invalid seat number!\n");
        return;
    }

    if(seats[seatNo - 1] == 0) 
    {
        printf("Seat already empty!\n");
    } 
    else 
    {
        seats[seatNo - 1] = 0;
        printf("Ticket cancelled successfully!\n");
    }
}


int main() 
{
    int choice;

    while(1) 
    {
        printf("\n--- Ticket Booking Menu ---\n");
        printf("1. Show Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1: showSeats(); break;
            case 2: bookTicket(); break;
            case 3: cancelTicket(); break;
            case 4: return 0;
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}