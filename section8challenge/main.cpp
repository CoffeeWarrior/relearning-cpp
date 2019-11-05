#include <iostream>
using namespace std;

main() {

    /*
    create a program to output a number of each coin to a user given the amount of cents entered.
    ex output
    93 cents is equal to 
    3 quarters
    1 dime
    1 nickel
    3 pennies
    */
    int number_of_cents{0};
    cout << "enter a number of cents: ";
    cin >> number_of_cents;
    cout << endl;

    int number_of_quarters = 0, number_of_dimes = 0 , number_of_nickles = 0 , number_of_pennies = 0;

    number_of_quarters = number_of_cents/25;
    number_of_dimes = (number_of_cents%25)/10;
    number_of_nickles = ((number_of_cents%25)%10)/5;
    number_of_pennies = ((number_of_cents%25)%10)%5;

    cout << number_of_quarters << " quarters" << endl;
    cout << number_of_dimes << " dimes" << endl;
    cout << number_of_nickles << " nickles" << endl;
    cout << number_of_pennies << " pennies" << endl;
    

    return 0;
}
