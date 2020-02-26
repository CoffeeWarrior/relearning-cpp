#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);

int main(){
    int num{10};
    int another_num{20};

    cout << "num before calling pass_by_ref1: " << num << endl;

    pass_by_ref1(num);

    cout << "num after calling pass_by_ref1: " << num << endl;

    vector<string> stooges{"Larry", "Moe", "Curly"};

    cout << "\nstooges before calling pass_by_ref3";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout << "stooges after calling pass_by_ref3";
    print_vector(stooges);



    return 0;
}

void pass_by_ref1(int &num){
    num = 1000;
}

void pass_by_ref2(string &s){
    s = "Changed";
}

void pass_by_ref3(vector<string> &v){
    v.clear();
}

void pass_by_ref4(vector<string> &v){
    for(auto s:v){
        cout << s;
    }
    cout << endl;
}
