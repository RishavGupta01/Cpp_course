#include<iostream>
#include<iomanip>//this is used for manipulating the input and output
using namespace std;
/**********Manipulators**********/
int main()
{
    int a=5, b=68, c=1933;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;
    cout<<"The value of a is: "<<setw(4)<<a<<endl;//this sets the width of the output
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;

    int x= 4, y=5;
    int z= (5*x)+y;// see the operator precedence from cppreference.com to see how this works
    int w= ((((5*x)+y)-45)+21);// is this case the associativity of the operators is left to right
    cout<<"The value of 5*x+y is: "<<z<<endl;
    cout<<"The value of 5*x+y-45+21 is: "<<w<<endl;
    return 0;
}

