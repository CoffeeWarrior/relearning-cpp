//Arrays

#include <iostream>

using namespace std;

int main(){

    char vowels[]{'a', 'e', 'i', 'o', 'u'};

    
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;


    //cin >> vowels[5]; this will cause your program to crash. accessing out of bounds.

    cout << "==========================" << endl;

    double hi_temps[]{90.1, 89.8,77.5, 81.6};
    
    cout << "the first high temp is: " << hi_temps[0] << endl;

    hi_temps[0] =100.7; // set the first element in hi_temps to 100.7
    cout << "the first high temp is now: " << hi_temps[0] << endl;

    int test_scores[5]{0}; // will initalize with 0 in all values
    /*hypothetical initialization:
        int test_scores[5]{100} // this will not intialize all test scores with value 100, this will initalize test_scores[0] with 100 and the rest will be junk.
        int test_scores[5]{100, 90} // this will initalize test scores 0 and 1 with 100 and 90 respectively.
    */

    cout << "notice what the value of the array name is: " << test_scores << endl; //this the hex address of the memory location of the start of the array.
    return 0;
}