#include <iostream>

using namespace std;

int main(){
    cout << "Enter A Number." << endl;
    int *int_ptr{nullptr};
    
    int_ptr = new int; //sets it to point at memory on the heap, which was allocated for an int

    cin >> *int_ptr; //stores a value at location int_ptr

    cout << "The value you stored is at: " << int_ptr << endl;
    cout << "And the value is: " << *int_ptr;

    delete int_ptr; //frees up the space on the heap taken by int_ptr. int_ptr STILL POINTS TO THE PLACE IN THE HEAP
    
    //contiguous block of memory.

    size_t size{0};
    double *temp_ptr{nullptr};
    cout << "How many temperatures do you want to store" << endl;

    cin>> size;

    temp_ptr = new double[size]; //creates an array of doubles of size size (the variable, input by the user) and pointer to location on the heap

    delete [] temp_ptr;


    return 0;
}