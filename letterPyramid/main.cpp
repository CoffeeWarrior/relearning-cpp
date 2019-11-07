#include <iostream>
#include <string>

using namespace std;
//mirror the string on each line
//first line displays 1 character, second line 3, third line 5, etc
//each line is (line # * 2 )-1


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
    string userInput;
    cout << "input a string to make a pyramid" << endl;
    getline(cin, userInput);
    
    string previous_line_output;
    unsigned int line_number{0};
    do {
        string previous_line_output_reversed;
        string output_line; //whitespace + characters to be output
        string output_line_word; //characters to be output
        string whitespace;
        for(size_t i = 0; i < previous_line_output.length(); i++){ 
            previous_line_output_reversed.push_back(previous_line_output.at(previous_line_output.length() -1 - i));
        }
        
        
        for(size_t i=0; i <= line_number; i++){
            output_line_word.push_back(userInput.at(i));
        }
        
        for(size_t i = line_number; i < userInput.length(); i++){
            whitespace +=' ';
        }

        output_line = whitespace + output_line_word + previous_line_output_reversed;
        cout << output_line << endl;
        line_number++; 
        previous_line_output = output_line_word; //set up next end of string
    } while (line_number < userInput.length());
    
    return 0;
}