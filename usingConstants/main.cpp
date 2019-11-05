// Constants
/*
    Frank's Carpet Cleaning Service
    Charges $30 per room
    sales tax is 6%
    estimates are valid for 30 days

    prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as :


    Estimate for carpet cleaning service:
    Number of rooms: 2
    Price per room: $30
    cost: $60
    tax:3.6
    ====================================
    Total estimate: $63.6
    This estimate is valid for 30 days



    pseudocode: 
        Prompt the user to enter the number of rooms
        Display the number of rooms
        Display price per room

        Display cost: (number of rooms * price per room)
        Display tax: number of rooms * price per room * tax rate
        Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Hello welcome to Frank's carpet cleaning service" << endl;
    cout << endl;
    cout << "How many small rooms would you like cleaned?" << endl;
    
    int number_of_small_rooms{0};
    cin >> number_of_small_rooms;

    cout << "How many large rooms would you like cleaned?" << endl;
    int number_of_large_rooms{0};
    cin >> number_of_large_rooms;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    const double PRICE_PER_SMALL_ROOM{25.0};
    const double PRICE_PER_LARGE_ROOM{35.0};
    const double SALES_TAX{0.06};

    cout << "Price per small room: $" << PRICE_PER_SMALL_ROOM << endl;
    cout << "Price per large room: $" << PRICE_PER_LARGE_ROOM << endl;

    cout << "Cost $" << PRICE_PER_SMALL_ROOM*number_of_small_rooms + PRICE_PER_LARGE_ROOM*number_of_large_rooms  << endl;

    cout << "tax $" << (PRICE_PER_SMALL_ROOM*number_of_small_rooms + PRICE_PER_LARGE_ROOM*number_of_large_rooms)*SALES_TAX << endl;
    cout << "======================" << endl;

    cout << "total estimate: $" << (PRICE_PER_SMALL_ROOM*number_of_small_rooms + PRICE_PER_LARGE_ROOM*number_of_large_rooms) + ((PRICE_PER_SMALL_ROOM*number_of_small_rooms + PRICE_PER_LARGE_ROOM*number_of_large_rooms)*SALES_TAX) << endl;

    return 0;
}