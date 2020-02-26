//random numbers

#include <iostream>
#include <cstdlib> //required for rand()
#include <ctime> //required for time()


using namespace std;

int main() {

    int random_number {};

    size_t count{10};
    int min{1};     //upper bound inclusive
    int max{6};     //lower bound inclusive

    cout << "RAND_MAX on my sistem is: " << RAND_MAX << endl;

    srand(time(nullptr));

    for(size_t i{1}; i <= count; ++i){
        random_number = rand()%max +min;
        cout << random_number << endl;
    }

    return 0;
}