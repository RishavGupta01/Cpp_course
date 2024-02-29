#include<iostream>
using namespace std;    
int main()// in this program, we perform addition of two numbers(basic input/output)
{
    int num1;//int is a data type, num1 is a variable
    int num2;//here we declared two variables
    cout << "Enter the value of num1: \n"; // cout is used for output, cin is used for input
    cin >> num1;//'<<' is the insertion operator, '>>' is the extraction operator
    cout << "Enter the value of num2: \n";
    cin >> num2;
    cout << "The sum of num1 and num2 is: " << num1 + num2 << endl;//endl is used to end the line
    return 0;//return 0 means success
}
