/*
Convert ASCII to char and Char to ASCII
*/

#include <iostream>
using namespace std;

int main()
{
    int user_ASCII ;
    char user_number;
    
    cout << "Please Enter your ASCII value : ";
    cin >> user_ASCII;
    cout << "The ASCII value is : " << char(user_ASCII) << endl;

    cout << "Please Enter your number value : ";
    cin >> user_number;
    cout << "The number value is : " << int(user_number) << endl;
    return 0;
}