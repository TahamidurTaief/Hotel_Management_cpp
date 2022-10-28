#include <iostream>
using namespace std;

void rooms(int Qrooms, int Srooms, int Total_rooms)
{
    int quant;

    cout << "How many rooms you want : ";
    cin >> quant;

    if (Qrooms - Srooms >= quant)
    {
        Srooms = Srooms + quant;
        Total_rooms = Total_rooms + quant * 1200;
        cout << "\n\t" << quant << "\room / rooms is booked for you.";
    }

    else
        cout << "\n\n\tOnly " << Qrooms - Srooms << "are available in out Hotel.";
}

int main()
{
    int choice, quant;

    // Quantitu of products
    int Qrooms = 0, Qbread = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qjuice = 0, Qdrinks = 0;

    // sell quantity of products
    int Srooms = 0, Sbread = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Sjuice = 0, Sdrinks = 0;

    // total products
    int Total_rooms = 0, Total_bread = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_joice = 0, Total_drinks = 0;

    cout << "\n\t\tQuantity of the products we have.";
    cout << "\n\t=================================================\n";

    // product quantity insert
    cout << "\nRooms : ";
    cin >> Qrooms;
    cout << "\tBread : ";
    cin >> Qbread;
    cout << "\t\tPasta : ";
    cin >> Qpasta;
    cout << "\t\t\tBurger : ";
    cin >> Qburger;
    cout << "\t\t\t\tNoodles : ";
    cin >> Qnoodles;
    cout << "\t\t\t\t\tShake : ";
    cin >> Qshake;
    cout << "\t\t\t\t\t\tjuice : ";
    cin >> Qjuice;
    cout << "\t\t\t\t\t\t\tDrinks : ";
    cin >> Qjuice;

    // option printing
    cout << "\n\nSelect a option from the form : \n";
    cout << "\t1. Rooms\n";
    cout << "\t2. Bread\n";
    cout << "\t3. Pasta\n";
    cout << "\t4. Burger\n";
    cout << "\t5. Noodles\n";
    cout << "\t6. Shake\n";
    cout << "\t7. Juice\n";
    cout << "\t8. Drinks\n\n";

    // work with user options
    cout << "Enter option number : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        rooms(Qrooms, Srooms, Total_rooms);
        break;

    default:
        break;
    }
}
