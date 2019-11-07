/*
    substitution cypher
    ask the user to input a secret message
    convert using code, then convert back
*/

#include <string>
#include <iostream>
#include <cctype>

using namespace std;
int main() {
    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string cypher   = "ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba";

    cout << "enter a string to convert to code: ";
    string user_message; //user input
    
    string user_message_cyphered; //message after converted thru cypher
    
    getline(cin, user_message);

    
    for(auto user_message_char:user_message){
        int alphabet_matched_index; //temp for replacing char
        if(isalpha(user_message_char)){
            alphabet_matched_index = alphabet.find(user_message_char);
            user_message_cyphered.push_back(cypher[alphabet_matched_index]);
        } else {
            user_message_cyphered.push_back(user_message_char);
        }
        
        
    }
    cout << "your message cycphered is: " << user_message_cyphered << endl;

    string translated_cypher_message;
    for(auto cypher_message_char:user_message_cyphered){
        int cypher_matched_index;
        if(isalpha(cypher_message_char)){
            cypher_matched_index = cypher.find(cypher_message_char);
            translated_cypher_message.push_back(alphabet[cypher_matched_index]);
        } else {
            translated_cypher_message.push_back(cypher_message_char);
        }
    }

    cout << "the retranslated message is: " << translated_cypher_message << endl;
    return 0;
}