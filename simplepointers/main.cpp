#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int num{10};

    cout << "Value of num is: " << num << endl;
    cout << "Sizeof of num is: " << sizeof num << endl;
    cout << "Address of num is: " << &num << endl;

    cout << "\n****************************\n" << endl;
    int *p; //unitialized pointer

    cout << "Value of p is: " << p << endl; //garbage
    cout << "Address of p is: " << &p << endl;
    cout << "sizeof of p is: " << sizeof p << endl;

    p = nullptr;
    cout << "\nValue of p after being set to nullptr:" << p << endl;


    cout << "\n****************************\n" << endl;

    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector<string> *p4{nullptr};


    cout << "sizof of p1: " << p1 << endl;
    cout << "sizof of p2: " << p2 << endl;
    cout << "sizof of p3: " << p3 << endl;
    cout << "sizof of p4: " << p4 << endl;

     cout << "\n****************************\n" << endl;

    int score{7};
    double temp{100.5};
    int *score_ptr{&score};


    cout << "location of score: " << &score << endl;
    cout << "value of scoreptr: " << score_ptr << endl; //this will be the same as the location of score
    cout << "location of scoreptr: " << &score_ptr << endl; //this will be its own unique location

    cout << "\n****************************\n" << endl;

    //score_ptr = &high_temp //this will create a compiler error. 
    


    return 0;
}