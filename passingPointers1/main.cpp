#include <iostream>
using namespace std;

void double_data(int *int_ptr){
    *int_ptr = *int_ptr * 2;
}

int main(){
    int value{10};

    cout << value << endl;
    double_data(&value);
    cout <<value << endl;

    cout << "----------------------" << endl;
    //what I think will happen for this section: I think that value will double because its accessing the value @ the memory location

    int *int_ptr{&value};

    double_data(int_ptr);
    cout << value << endl;
    return 0;
}