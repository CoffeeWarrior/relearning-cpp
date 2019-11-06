#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    // cout << first_name; //will likely display garbage

    // cout << "Please enter your first name: ";
    // cin >> first_name;
    // cout << endl;
    // cout << "Please enter your last name: ";
    // cin >> last_name;

    // cout << "\n" << endl;
    // cout << "=============================" << endl;
    
    // cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters." << endl; //strlen returns type size_t "its unsigned number based off system type.
    // cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters." << endl;

    // strcpy(full_name, first_name);  //copy first_name to full_name
    // strcat(full_name, " ");     //concatenate full_name and a space
    // strcat(full_name, last_name);   //concatenate full_name with last_name
    // cout << "Your full name is " << full_name << endl;

    cout << "=============================" << endl;
    
    // cout << "enter your full name: ";
    // cin >> full_name; // this will stop reading in your name after the space.

    // cout << "your full name is " << full_name << endl; // this will only read what is written before a whitespace

    /*
        above was not the desired result by us. A way to not use the default cin that ends after whitespace is to use cin.getline()    
    */

    cout << "enter your full name: ";
    cin.getline(full_name, 50); //cin.getline(where to write to, limit you will take from cin)
    cout << "Your full name is " << full_name << endl;

    cout << "\n" << endl;

    cout << "========================" << endl;

    strcpy(temp, full_name); //temp <- full_name
    
    if(strcmp(temp, full_name) == 0){ //compare strings temp and full_name
        cout << temp << " and " << full_name << " are the same" << endl;
    } else {
        cout << temp << " and " << full_name << " are different" << endl;
    }
    cout << "============================" << endl;

    for(size_t i{0}; i< strlen(full_name); i++){ //looping thru full_name array of chars -- using size_t instead of int for i
        if(isalpha(full_name[i])){  //checking if the character is an alphabet character
            full_name[i] = toupper(full_name[i]);   //if it is alphabet character set it to being upper case
        }
    }

    cout << "Your full name has been set to: " << full_name << endl;

    if(strcmp(temp, full_name) == 0){ //compare strings temp and full_name
        cout << temp << " and " << full_name << " are the same" << endl;
    } else {
        cout << temp << " and " << full_name << " are different" << endl;
    }

    //strcmp will return 0 if the two strings are equal. It will return -1 if the first string lexically comes before the second and return one if the first string comes lexically after the second.
    return 0;
}