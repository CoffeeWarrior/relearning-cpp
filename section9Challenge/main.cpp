/*
this challenge is about using a collection (list) of integers and allowing the user to select options from a menu to perform operations on the list

Your program should display menu options to the user as follows

P - print numbers
A - Add a number
M -Display the mean of the numbers
S - display the smalles number
Q = quit

enter your choice:

the program should only accept valid choices from the user, both upercase and lowercase selections should be allowed. If an illegal choice is made, you should display, "Uknown selection please try again and the menu options should be displayed again"
*/

#include <iostream>
#include <vector>

using namespace std;



int main() {
    char user_menu_selection{};
    vector <int> stored_ints;
    do{ //do while so that the code executes and ends on a specific event, user inputs q

        cout << "P - print numbers\nA - Add a number\nM -Display the mean of the numbers\nS - display the smallest number\nQ = quit\n" << endl;
        
        cin >> user_menu_selection;

        
        if(user_menu_selection == 'P' || user_menu_selection == 'p'){
            if(stored_ints.size() == 0){  // if array is empty, cant display
                cout << "vector is empty []" << endl;
            } else { // else read out array contents
                cout << "[";
                for(unsigned int i=0; i< stored_ints.size(); i++){
                    int stored_int = stored_ints.at(i);
                    if(i == stored_ints.size() - 1){ // if it is the last element in the list, dont include a comma in the cout
                        cout << stored_int;
                    } else {
                        cout << stored_int << ", ";
                    }
                    
                }
                cout << "]" << endl;
            }
        }   else if(user_menu_selection == 'A' || user_menu_selection == 'a'){
                cout << "please enter a number" << endl;
                int user_int_input;
                cin >> user_int_input;
                stored_ints.push_back(user_int_input);
        }   else if(user_menu_selection == 'M' || user_menu_selection == 'm'){
                if(stored_ints.size() == 0){ //if array is empty cant display
                    cout << "vector is empty []" << endl;
                } else { //find average
                    int sum{0};
                    
                    for(int stored_int: stored_ints){
                        sum += stored_int;
                    }
                    double mean = (double)sum/stored_ints.size();

                    cout << "the mean of each integer in the vector is: " << mean << endl;
                }
        } else if(user_menu_selection == 'S' || user_menu_selection == 's'){
            if(stored_ints.size() == 0){ //if array is empty cant display
                cout << "vector is empty []" << endl;
            } else {
                int smallest{stored_ints.at(0)}; //used first position of the array to initalize. cant initialize as zero because if there is no number smaller than zero in the array and no zero in array, will be incorrect
                for(auto stored_int:stored_ints){
                    if(stored_int < smallest){ //find the new smallest
                        smallest = stored_int;
                    }
                }
                cout << "the smallest in the vector is: " << smallest << endl;

            }
        } else if (user_menu_selection != 'Q' && user_menu_selection != 'q'){ //last case besides exit, invalid input
            cout << "please enter a valid input!" << endl;
        }
    } while (user_menu_selection != 'Q' && user_menu_selection != 'q'); // this cannot be an OR because one will be true always
    return 0;
}