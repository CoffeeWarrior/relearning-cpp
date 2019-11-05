#include <iostream>
using namespace std;

int main() {
    /*
    ****************************** Character Type ****************************************
    */

    char middle_initial{'j'}; //must be signle quotes around character
    cout << "my middle initial is " << middle_initial << endl;

    /*
    ***************************** Integer Type *******************************************
    */

    unsigned short int exam_score{55}; //same as unsinged short exam_score{55};
    cout << "this is an exam score " << exam_score << endl;
    int countries_represented{65};
    cout << "There were " << countries_represented << " coutries represented in my meeting" << endl;

    long people_in_florida{20610000};
    cout << "there are about " << people_in_florida << "people in Florida" << endl;

    //long people_on_eart = 7600000000 <-this statment will not throw an error, despite the number being stored too large. 
    //This is a benefit of using the list initialization. An error was thrown below before updating it to a long long
    
    long long people_on_earth{7'600'000'000}; //cpp 14 standard allows you to use tic marks to make it easier to read
    cout << "there are about " << people_on_earth << " people on earth" << endl;

    long long distance_to_alpha_centauri{9'461'000'000'000};
    cout << "the distance to alpha centauri is " << distance_to_alpha_centauri << "kilometers" << endl;

    /*
    ******************************* Floating Point Types *********************************
    */

    float car_payment{401.23};
    cout << "My car payment is " << car_payment << endl;

    double pi{3.14159};
    cout << "Pi is roughly " << pi << endl;

    long double large_amount{2.7e120};
    cout << large_amount << " is a very big number" << endl;

    /*
    ******************************* Boolean Type *******************************************
    */

    bool game_over{false};

    cout << "the value of game_over is " << game_over << endl; // this will print out 0. 0 is false, 1 is true

    /*
    ****************************** OverFlow example *****************************************
    */

    short value1{30000};
    short value2{1000};
    short product{value1*value2};
    cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;
    return 0;
}