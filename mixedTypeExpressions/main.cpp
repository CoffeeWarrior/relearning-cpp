/*
ask the user to enter 3 integers 
calculate the sum of the integers then
calculate the average of the 3 integers.

Display the 3 integers entered
the sum of the 3 integers and
the average of the 3 integers
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int NUMBER_OF_INTS{3};
    vector <int> user_input(NUMBER_OF_INTS, 0);
    
    cout << "enter 3 integers" << endl;
    cin >> user_input.at(0);
    cin >> user_input.at(1);
    cin >> user_input.at(2);
    
    int sum = user_input.at(0) + user_input.at(1) + user_input.at(2);
    double average = static_cast<double>(sum) / NUMBER_OF_INTS;
    cout << "sum of 3 integers is: " << sum << endl;
    cout << "average of 3 integers is: " << average << endl;


    return 0;
}