//Program to print cube of a number 
//date created 30 October 2019
//author Samra
#include <iostream>
using namespace std;

int main()
{
    int i, num, cub;

    cout << " Display the cube of the numbers upto a given integer:\n";
    cout << "Input the number of terms : ";
    cin >> num;
    for (i = 1; i <= num; i++) 
    {
        cub = i * i * i;
        cout << "Number is : " << i << " and the cube of " << i << " is: " << cub << endl;
    }
}