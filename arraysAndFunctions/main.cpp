#include <iostream>

using namespace std;

void print_array(int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

const int myArraySize = 5;

int main(){
    int my_scores[myArraySize]{100, 98, 90, 86, 84};
    
    print_array(my_scores, myArraySize);

    set_array(my_scores, myArraySize, 100);

    print_array(my_scores, myArraySize);

    return 0;
}

void print_array(int arr[], size_t size){
    for(size_t i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void set_array(int arr[], size_t size, int value){
        for(size_t i = 0; i < size; i++){
        arr[i] = value;
    }
}

