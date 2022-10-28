#include <iostream>
using namespace std;

/*
void rooms(int Qrooms, int Srooms, int Total_rooms)
{
    int quant;

    cout << "How many rooms you want : ";
    cin >> quant;

    if (Qrooms - Srooms >= quant)
    {
        Srooms = Srooms + quant;
        Total_rooms = Total_rooms + quant * 1200;
        cout << "\n\t" << quant << " room / rooms is booked for you.\n\n";
    }

    else
        cout << "\n\n\tOnly " << Qrooms - Srooms << "are available in out Hotel.\n\n";
}

void bread(int Qbread, int Sbread, int Total_bread)
{
    int quant;
    cout << "\nHow many breads you want : ";
    cin >> quant;

    if (Qbread - Sbread >= quant)
    {
        Sbread = Sbread + quant;
        Total_bread = Total_bread + quant * 80;
        cout << "\n\t" << quant << "Bread / breads is in cartlist.\n";
        cout << "\tYour bread price is : " << Total_bread << "\n\n";
    }

    else
        cout << "\n\n\tOnly " << Qbread - Sbread << " are available in your stock.\n\n";
}

void pasta(int Qpasta, int Spasta, int Total_pasta)
{
    int quant;
    cout << "\nHow many pasta you want : ";
    cin >> quant;

    if (Qpasta - Spasta >= quant)
    {
        Spasta = Spasta + quant;
        Total_pasta = Total_pasta + quant * 250;
        cout << "\n\t" << quant << " Pasta in cartlist.\n";
        cout << "\tYour Pasta price is : " << Total_pasta << "\n\n";
    }

    else
        cout << "\n\n\tOnly " << Qpasta - Spasta << " are available in your stock.";
}

void burger(int Qburger, int Sburger, int Total_burger)
{
    int quant;
    cout << "\nHow many pasta you want : ";
    cin >> quant;

    if (Qburger - Sburger >= quant)
    {
        Sburger = Sburger + quant;
        Total_burger = Total_burger + quant * 300;
        cout << "\n\t" << quant << "burger in cartlist.\n";
        cout << "\tYour burger price is : " << Total_burger << "\n";
    }

    else
        cout << "\n\n\tOnly " << Qburger - Sburger << " are available in your stock.\n\n";
}


void noodles(int Qnoodles, int Snoodles, int Total_noodles)
{
    int quant;
    cout << "\nHow many pasta you want : ";
    cin >> quant;

    if (Qnoodles - Snoodles >= quant)
    {
        Snoodles = Snoodles + quant;
        Total_noodles = Total_noodles + quant * 150;
        cout << "\n\t" << quant << "noodles in cartlist.\n";
        cout << "\tYour noodles price is : " << Total_noodles << "\n";
    }

    else
        cout << "\n\n\tOnly " << Qnoodles - Snoodles << " are available in your stock.\n\n";
}


void shake(int Qshake, int Sshake, int Total_shake)
{
    int quant;
    cout << "\nHow many pasta you want : ";
    cin >> quant;

    if (Qshake - Sshake >= quant)
    {
        Sshake = Sshake + quant;
        Total_shake = Total_shake + quant * 90;
        cout << "\n\t" << quant << "shake in cartlist.\n";
        cout << "\tYour shake price is : " << Total_shake << "\n";
    }

    else
        cout << "\n\n\tOnly " << Qshake - Sshake << " are available in your stock.\n\n";
}


void juice(int Qjuice, int Sjuice, int Total_juice)
{
    int quant;
    cout << "\nHow many pasta you want : ";
    cin >> quant;

    if (Qjuice - Sjuice >= quant)
    {
        Sjuice = Sjuice + quant;
        Total_juice = Total_juice + quant * 100;
        cout << "\n\t" << quant << "juice in cartlist.\n";
        cout << "\tYour juice price is : " << Total_juice << "\n";
    }

    else
        cout << "\n\n\tOnly " << Qjuice - Sjuice << " are available in your stock.\n\n";
}


void drinks(int Qdrinks, int Sdrinks, int Total_drinks)
{
    int quant;
    cout << "\nHow many pasta you want : ";
    cin >> quant;

    if (Qdrinks - Sdrinks >= quant)
    {
        Sdrinks = Sdrinks + quant;
        Total_drinks = Total_drinks + quant * 100;
        cout << "\n\t" << quant << "drinks in cartlist.\n";
        cout << "\tYour drinks price is : " << Total_drinks << "\n";
    }

    else
        cout << "\n\n\tOnly " << Qdrinks - Sdrinks << " are available in your stock.\n\n";
}
*/

int main()
{
    int choice, quant;

    // Quantitu of products
    int Qrooms = 0, Qbread = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qjuice = 0, Qdrinks = 0;

    // sell quantity of products
    int Srooms = 0, Sbread = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Sjuice = 0, Sdrinks = 0;

    // total products
    int Total_rooms = 0, Total_bread = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_juice = 0, Total_drinks = 0;

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

start:
    // option printing
    cout << "___________________________________________";
    cout << "\n\nSelect a option from the form :             |\n";
    cout << "\t1. Rooms                            |\n";
    cout << "\t2. Bread                            |\n";
    cout << "\t3. Pasta                            |\n";
    cout << "\t4. Burger                           |\n";
    cout << "\t5. Noodles                          |\n";
    cout << "\t6. Shake                            |\n";
    cout << "\t7. Juice                            |\n";
    cout << "\t8. Drinks                           |\n";
    cout << "\t9. Total Informaion                 |\n";
    cout << "\t10. exit                            |\n";
    cout << "                                            |\n";
    cout << "____________________________________________\n\n";

    // work with user options
    cout << "Enter option number : ";
    cin >> choice;

    switch (choice)
    {
    case 1:

        cout << "How many rooms you want : ";
        cin >> quant;

        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
            Total_rooms = Total_rooms + quant * 1200;
            cout << "\n\t" << quant << " room / rooms is booked for you.\n\n";
        }

        else
            cout << "\n\n\tOnly " << Qrooms - Srooms << "are available in out Hotel.\n\n";
        break;

    case 2:
        // bread(Qbread, Sbread, Total_bread);

        cout << "\nHow many Breads you want : ";
        cin >> quant;

        if (Qbread - Sbread >= quant)
        {
            Sbread = Sbread + quant;
            Total_bread = Total_bread + quant * 80;
            cout << "\n\t" << quant << "Bread / breads is in cartlist.\n";
            cout << "\tYour bread price is : " << Total_bread << "\n\n";
        }

        else
            cout << "\n\n\tOnly " << Qbread - Sbread << " are available in your stock.\n\n";
        break;

    case 3:
        // pasta(Qpasta, Spasta, Total_pasta);

        cout << "\nHow many pasta you want : ";
        cin >> quant;

        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            Total_pasta = Total_pasta + quant * 250;
            cout << "\n\t" << quant << " Pasta in cartlist.\n";
            cout << "\tYour Pasta price is : " << Total_pasta << "\n\n";
        }

        else
            cout << "\n\n\tOnly " << Qpasta - Spasta << " are available in your stock.";
        break;

    case 4:
        // burger(Qburger, Sburger, Total_burger);

        cout << "\nHow many Burger you want : ";
        cin >> quant;

        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;
            Total_burger = Total_burger + quant * 300;
            cout << "\n\t" << quant << "burger in cartlist.\n";
            cout << "\tYour burger price is : " << Total_burger << "\n";
        }

        else
            cout << "\n\n\tOnly " << Qburger - Sburger << " are available in your stock.\n\n";

        break;

    case 5:
        // noodles(Qnoodles, Snoodles, Total_noodles);

        cout << "\nHow many Noodles you want : ";
        cin >> quant;

        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles = Snoodles + quant;
            Total_noodles = Total_noodles + quant * 150;
            cout << "\n\t" << quant << "noodles in cartlist.\n";
            cout << "\tYour noodles price is : " << Total_noodles << "\n";
        }

        else
            cout << "\n\n\tOnly " << Qnoodles - Snoodles << " are available in your stock.\n\n";

        break;

    case 6:
        // shake(Qshake, Sshake, Total_shake);

        cout << "\nHow many Shake you want : ";
        cin >> quant;

        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;
            Total_shake = Total_shake + quant * 90;
            cout << "\n\t" << quant << "shake in cartlist.\n";
            cout << "\tYour shake price is : " << Total_shake << "\n";
        }

        else
            cout << "\n\n\tOnly " << Qshake - Sshake << " are available in your stock.\n\n";

        break;

    case 7:
        // juice(Qjuice, Sjuice, Total_juice);

        cout << "\nHow many juice you want : ";
        cin >> quant;

        if (Qjuice - Sjuice >= quant)
        {
            Sjuice = Sjuice + quant;
            Total_juice = Total_juice + quant * 100;
            cout << "\n\t" << quant << "juice in cartlist.\n";
            cout << "\tYour juice price is : " << Total_juice << "\n";
        }

        else
            cout << "\n\n\tOnly " << Qjuice - Sjuice << " are available in your stock.\n\n";
        break;

    case 8:
        // drinks(Qdrinks, Sdrinks, Total_drinks);

        cout << "\nHow many Drinks you want : ";
        cin >> quant;

        if (Qdrinks - Sdrinks >= quant)
        {
            Sdrinks = Sdrinks + quant;
            Total_drinks = Total_drinks + quant * 100;
            cout << "\n\t" << quant << "drinks in cartlist.\n";
            cout << "\tYour drinks price is : " << Total_drinks << "\n";
        }

        else
            cout << "\n\n\tOnly " << Qdrinks - Sdrinks << " are available in your stock.\n\n";

        break;

    case 9:
        // int net_bill = Total_rooms + Total_bread + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_juice + Total_drinks;

        cout << "Total product\t\t Quantity\t\t Stock \t\t Price \t\tNet Bill\n";
        cout << "==========================================================================================\n";
        cout << "\t" << Qrooms << "\t\t   " << Srooms << "\t\t\t  " << Qrooms - Srooms << " \t\t  " << Total_rooms << "\n";
        cout << "\t" << Qbread << "\t\t   " << Sbread << "\t\t\t  " << Qbread - Sbread << " \t\t  " << Total_bread << "\n";
        cout << "\t" << Qpasta << "\t\t   " << Spasta << "\t\t\t  " << Qpasta - Spasta << " \t\t  " << Total_pasta << "\n";
        cout << "\t" << Qburger << "\t\t   " << Sburger << "\t\t\t  " << Qburger - Sburger << " \t\t  " << Total_burger << "\n";
        cout << "\t" << Qnoodles << "\t\t   " << Snoodles << "\t\t\t  " << Qnoodles - Snoodles << " \t\t  " << Total_noodles << "\n";
        cout << "\t" << Qshake << "\t\t   " << Sshake << "\t\t\t  " << Qshake - Sshake << " \t\t  " << Total_shake << "\n";
        cout << "\t" << Qjuice << "\t\t   " << Sjuice << "\t\t\t  " << Qjuice - Sjuice << " \t\t  " << Total_juice << "\n";
        cout << "\t" << Qdrinks << "\t\t   " << Sdrinks << "\t\t\t  " << Qdrinks - Sdrinks << " \t\t  " << Total_drinks << "\t\t  " << Total_rooms + Total_bread + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_juice + Total_drinks << "\n\n\n";
        break;
    case 10:
        cout << "\n( ͡❛ ͜ʖ ͡❛)\n";
        cout << "Bye Dude!\n\n";
        exit(0);

    default:
        cout << "Invalid Options! Try again.";
        break;
    }

    goto start;
}
