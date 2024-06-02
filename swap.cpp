#include<iostream>
using namespace std;

int main ()
{
    int num1, num2, temp; 
    cin >> num1 >> num2;
    cout << " before swapping: num1 = " << num1 << " , num2 = " << num2 << endl;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << " after swapping: num1 = " << num1 << " , num2 = " << num2 << endl;
    return 0;
}