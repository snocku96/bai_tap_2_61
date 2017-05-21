#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello OngHuy!" << endl;
    int first_number;
    int second_number;
    cout <<"please enter your first number: ";
    cin  >>first_number;
    cout <<"please enter your second number: ";
    cin  >>second_number;
    int sum= first_number+second_number;
    cout <<"the total is "<<first_number<<" "<<"+"<<" "<<second_number<<"="<<sum;
    return 0;
}
