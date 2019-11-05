/*
Section 7 
chellenge 
Write a c++ program as follows:

Declare 2 empty vectors of integers named vector1 and vector2, respectively

add 10 and 20 to vector1 dynamically using push_back
Display the elements in vector1 using the at() method as well as its size using the size() method

add 100 and 200 to vector 2 dynamically using push_back
Display the elements in vector2 using the at() method as well as its size using the size() method

Declare an empty 2D vector called vector_2d
    remember that a 2D vector is a vector of vector<int>

add vector1 to vector_2d
add vector2 to vector_2d

display the elements in vector 2d
change vector1.at(0) to 1000

display the elements in vector 2d again

display the elements in vector 1

what did you expect? did you get what did you get? what do you think happened?
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Vector1, which has a size of: " << vector1.size() << " elements, contains the elements: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    cout << "=========================\n" << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "Vector2, which has a size of: " << vector2.size() << " elements, contains the elements: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;

    cout << "========================\n" << endl;

    vector <vector <int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "vector2d which has a size of: " << vector_2d.size() << " elements, contains the elements" << endl;
    
    cout << "\n{" << vector_2d.at(0).at(0) << ",";
    cout <<  vector_2d.at(0).at(1) << "}," << endl;
    cout << "{" << vector_2d.at(1).at(0) << ",";
    cout <<  vector_2d.at(1).at(1) << "}" << endl;

    cout << "========================" << endl;

    cout << "\nupdating vector1 element 0 to be 1000" << endl;
    vector1.at(0) = 1000;
    cout << "vector1 at 0 = " << vector1.at(0) << endl;

    cout << "vector_2d at(0).at(0) = " << vector_2d.at(0).at(0) << endl;


    return 0;
}