#include <iostream>
#include <string>
#include <vector>

using namespace std;
//be careful with default values for overloaded functions, if you define two functions w/ default values and call print() the compiler wont know which to choose
void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);


int main(){
    print(100); //expecting int
    print("A"); //characters are always promoted to integers so this prints as an int
    
    print(123.5); //double output
    print(123.3F); //float is promoted to a double

    print("C style string"); //c style string is promoted to c++ string

    string s{"C++ string"};

    print(s); //c++ string



    return 0;
}



void print(int input){
    cout << "Printing int: " << input << endl;
}


void print(double input){
    cout << "Printing double: " << input << endl;
}


void print(string input){
    cout << "Printing string: " << input << endl;
}


void print(string a, string b){
    cout << "Printing string1: " << a << "printing string2: " << b << endl;
}


void print(vector <string> input){
    cout << "Printing vector<string>: "; 
    for(auto l:input){
        cout << l;
    } 
    cout << endl;
}










