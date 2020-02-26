#include <iostream>
#include <string>

using namespace std;
//mirror the string on each line
//first line displays 1 character, second line 3, third line 5, etc
//each line is (line # * 2 )-1
//trying again. ALready successfully solved but want to go again


/*
    ex input: abcde
    output
           a
          aba
         abcba
        abcdcba
       abcdedcba
*/

//observations. Every lane just has the previous line reversed
int main(){
    cout << "Input a string so I can make a letter pyramid out of it: ";
    string user_input;
    getline(cin, user_input);

    string output_line; // output_line = whitespace + word + previous_word_reversed
    string previous_word_reversed;

    for(size_t i = 1; i <= user_input.length(); ++i){
        string whitespace((user_input.length() + 1 - i), ' ');
        
        string word = user_input.substr(0, i); //copy into word up to the index
        output_line = whitespace + word + previous_word_reversed;

        
        cout << output_line << endl;

        previous_word_reversed = "";
        for(size_t j = word.length(); j > 0; j--){
            previous_word_reversed.push_back(word.at(j - 1));
        }

    }

    return 0;
}
    
    