#include <iostream>
using namespace std;

int main() {
    int scores[]{100, 95, 89, 68, -1};
    int *score_ptr{scores};

    while(*score_ptr != -1){ //dereference score_ptr to see actual value
        cout << *score_ptr << endl; //output the value at score_ptr
        score_ptr++; //increment score_ptr location if not equal
    }

    cout << "\n-------------------------- " << endl;
    score_ptr = scores;
    while(*score_ptr != -1){
        cout << *score_ptr++ << endl; /*the reason this has the same output as the previous
                                        while loop is not because of precedence and associativity,
                                        but because of the way the postfix increment operator works.
                                        postfix increments after the statement has been "used" by the 
                                        dereference operator, so results in it first being dereferenced then incremented*/

    }

    
    cout << "\n-------------------------- " << endl;
    string s1{"Lucas"};
    string s2{"Lucas"};
    string s3{"Aaron"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    cout << boolalpha;
    cout << p1 << "==" << p2 << ":" << (p1 == p2) << endl; //false
    cout << p1 << "==" << p3 << ":" << (p1 == p3) << endl; //true

    cout << *p1 << "==" << *p2 << ":" << (*p1 == *p2) << endl; //true
    cout << *p1 << "==" << *p3 << ":" << (*p1 == *p3) << endl; //true

    p3 = &s3; //point to Aaron 
    cout << *p1 << "==" << *p3 << ":" << (*p1 == *p3) << endl; //false;
    

    cout << "\n-------------------------- " << endl;
    char name[]{"Lucas"};
    char *char_ptr1{name}; //L
    char *char_ptr2{&name[4]}; //s
    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " <<  *char_ptr1 << endl;
}