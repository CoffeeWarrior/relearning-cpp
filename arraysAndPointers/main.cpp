#include <iostream>

using namespace std;

int main(){
    int scores[]{100,95,89};

    int *score_ptr{scores}; // why dont we put & infront of the array scores? -> scores is already a pointer

    cout << "location of scores: " << scores << endl;
    cout << "location of score_ptr: " << score_ptr << endl;
    
    cout << endl;

    /************************************************/
    cout << "subscript notation array (values): " << endl;
        cout << scores[0] << endl;
        cout << scores[1] << endl;
        cout << scores[2] << endl;

    /***********************************************/
    cout << "subscript notation pointer (values): " << endl;
        cout << score_ptr[0] << endl;
        cout << score_ptr[1] << endl;
        cout << score_ptr[2] << endl;
    
        /************************************************/
    cout << "subscript notation array (locations use &): " << endl;
        cout << &scores[0] << endl;
        cout << &scores[1] << endl;
        cout << &scores[2] << endl;

    /***********************************************/
    cout << "subscript notation pointer (locations use &): " << endl;
        cout << &score_ptr[0] << endl;
        cout << &score_ptr[1] << endl;
        cout << &score_ptr[2] << endl;
    
    /**********************************************/
    cout << "offset array notation (locations): " << endl;
        cout << scores + 0 << endl;
        cout << scores + 1 << endl;
        cout << scores + 2 << endl;

    /**********************************************/
    cout << "offset pointer notation (locations): " << endl;
        cout << score_ptr + 0 << endl;
        cout << score_ptr + 1 << endl;
        cout << score_ptr + 2 << endl;
    
    /**********************************************/
    cout << "offset array notation (values use *): " << endl;
        cout << *(scores + 0) << endl;
        cout << *(scores + 1) << endl;
        cout << *(scores + 2) << endl;

    /**********************************************/
    cout << "offset pointer notation (values use *): " << endl;
        cout << *(score_ptr + 0) << endl;
        cout << *(score_ptr + 1) << endl;
        cout << *(score_ptr + 2) << endl;

return 0;
}
