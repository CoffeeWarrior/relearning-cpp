#inclue <iostream>

//g++ -Wall -std=c++14 main.cpp -o main.exe   this will make an executable file called main.exe
// ./main       this will run the executable file main.exe

int main(){
    int favorite_Number; 

    std::cout << "enter your favorite number between 1 and 100" << std::endl;

    std::cin >> favorite_Number;

    std::cout << "wow thats my favorite number too!" << std::endl;

    return 0;
}