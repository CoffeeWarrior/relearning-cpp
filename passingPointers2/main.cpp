#include <iostream>
#include <string>
using namespace std;

void swap(int *a, int *b){ //pointer to a
    int temp = *a; //pointer to b
    *a =*b; //value @ location a gets value @ location b
    *b = temp; //value @ location b gets temp
}

int main(){
    int x{100}, y{200};
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    swap(&x, &y);

    cout << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}