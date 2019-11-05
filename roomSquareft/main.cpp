//g++ -Wall -std=c++14 main.cpp -o main.exe   this will make an executable file called main.exe
// ./main       this will run the executable file main.exe
#include <iostream>

using std::cout; 
using std::cin;
using std::endl;

int main(){
    int room_length{0}, room_width{0}, room_square_ft{0}; //initializiation of variables with SOME value -- using c++11 list initialization syntax
    cout << "enter a length in feet:" << endl;

    
    cin >> room_length;

    cout << "enter a width in feet:" << endl;

    cin >> room_width;
    room_square_ft = room_length*room_width;

    cout << "the room is " << room_square_ft << "ft^2" << endl; 
    // can also not use variable room_square_ft and instead do the calculation within the chevrons of the cout statment ex. cout << room_length*room_width <<endl;

    return 0;
}