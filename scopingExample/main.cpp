#include <iostream>

using namespace std;

void static_local_example(){
    static int num{5000};
    cout << "\nLocal static num is: " << num << " In static local example start" << endl;
    num += 1000;
    cout << "Local static num is: " << num << " in static local example end";
    //suppose static_local_example is called 2x, outputs would be 5000 6000 6000 7000
    //acts like a global variable that is specific to this function
}

int main(){
    int num{100}; //local to main
    int num1{500}; //local to main

    cout << "Local num is: " << num << " in main" << endl;

    {   //creating a new level of scope
        int num{200}; //local to this inner block
        cout << "local num is: " << num << " in inner block in main" << endl;
        cout << "inner block in main can see out - num1 is: " << num1 << endl;

    }

    cout << "Local num is: " << num << " in main" << endl;

    

    return 0;
}