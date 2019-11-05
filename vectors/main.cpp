#include <iostream>
#include <vector>

using namespace std;

int main() {
    //vector <char> vowels; //empty
    //vector <char> vowels(5); //5 initialized to zero

    vector <char> vowels{'a', 'e', 'i', 'o', 'u'};

    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    cout << "=============================" << endl;
    // vector <int> test_scores(3); // 3 elements all initialized to zero
    // vector <int> test_scores(3, 100) // 3 elements all initialized to 100

    vector <int> test_scores{100,98,89}; //vector of 3 integers, initialized to 100, 98, and 89

    cout << "Test scores using array syntax: " << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;


    cout << "Test scores using vector syntax" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;

    cout << "===============================\n" << endl;

    cout << "enter 3 test scores: " << endl;

    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);


    cout << "Updated test scores: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;


    cout << "====================\n" << endl;

    cout << "lets add a score" << endl;

    int score_to_add{0};

    cout << "add a test score: " << endl;
    cin >> score_to_add;

    test_scores.push_back(score_to_add);
    cout << "test scores are now: " << endl;

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;


    cout << "=====================\n" << endl;

    cout << "add another test score: " << endl;
    cin >> score_to_add;

    test_scores.push_back(score_to_add);
    cout << "test scores are now: " << endl;

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;

    cout << "\nThere are now " << test_scores.size() << " scores in the vector" << endl;

    // cout << "This should cause an exception!!" << test_scores.at(10); //because of bounds checking, this will cause an exception
    // cout << "This would not cause an exception!" << test_scores[10]; //this would not cause an exception, this would just throw out junk.

    cout << "======================\n" << endl;

    vector <vector<int>> movie_ratings {
        {1,2,3,4},
        {4,3,2,1},
        {1,9,4,10}
    }; //this is a two dimensional vector, a vector of vectors!

    cout << "\nHere are the movie rating for reviewer #1 using array syntax :" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    cout << "\nHere are the movie rating for reviewer #1 using array syntax :" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;
    //repeat .at().at() to access an element in the vector of vectors.


    return 0;

}