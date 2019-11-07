#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5 {s1};     //apple 
    string s6{s1, 0,3};     //app
    string s7(10,'X');      //XXXXXXXXXX

    //changing s1 does not effect s5 after declaration

    // cout << s0 << endl;     //No garbage, will display nothing
    // cout << s0.length() << endl;    //empty string

    //initialization
    cout << "s1 is initialized to: " << s1 << endl;    
    cout << "s2 is initialized to: " << s2 << endl;
    cout << "s3 is initialized to: " << s3 << endl;
    cout << "s4 is initialized to: " << s4 << endl;
    cout << "s5 is initialized to: " << s5 << endl;
    cout << "s6 is initialized to: " << s6 << endl;
    cout << "s7 is initialized to: " << s7 << endl;    

    //Compoarison
        cout << "\nComparison" << "\n============================================" << endl;
        cout << boolalpha; //make it return true and false rather than 1 and 0

        cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;            
        cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;                
        cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;        
        cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;        
        cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;        
        cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;        
        cout << s1 << " == " << "Apple" << ": " << ( s1 == "Apple") << endl;

    //Assignment
        cout << "\nAssignment" << "\n============================================" << endl;
        
        s1 = "Watermelon";

        cout << "s1 is now: " << s1 << endl; //Watermelon

        s2 = s1;

        cout << "s2 is now: " << s2 << endl; //Watermelon

        s3 = "Lucas";
        cout << "s3 is now: " << s3 << endl; //Lucas

        s3[0] = 'D'; //Ducas
        cout << "s3 change first letter to 'D': " << s3 << endl;
        s3.at(0) = 'F' //Fucas
        cout << "s3 change first letter to 'F'" << s3 << endl;
    //Concatentation
        cout << "\nComparison" << "\n============================================" << endl;

        

    return 0;
}