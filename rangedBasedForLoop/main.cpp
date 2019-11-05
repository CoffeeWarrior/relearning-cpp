#include <iostream>
#include <vector>
 
using namespace std;

int main() {

    // int scores[]{10, 20, 30};

    // for(auto score:scores){ //compiler finds the type of array "scores" then assigns type int to score. 
    //     cout << score << endl;
    // }

    vector<double> temperatures{87.9, 77.9, 80.0, 72.5};
    double average_temp{0};
    double total {0};

    for(auto temp:temperatures){
        total += temp;
    }

    average_temp = total/temperatures.size();

    cout << "average temperature is " << average_temp << endl;

    cout << "\n***********************************\n" << endl;

    for (auto val: {1,2,3,4,5}){
        cout << val << endl; //should print on each line a different number;
    }

    cout << "\n**************************************\n" << endl;

    // for(auto c: "the quick brown fox jumps over the lazy dog"){
    //     cout << c; //should print string
    // }

    //lets make it not print any vowels

    for(auto c: "the quick brown fox jumps over the lazy dog"){
        bool not_a_vowel = true;
        for(auto v: "aeiouy" ){
            if(c == v){
                not_a_vowel = false;
            }
        }
        if(not_a_vowel){
            cout << c;
        }
    }

    return 0;
}