#include<iostream>//this is a header file, which is used for input/output stream
//there are two types of header files, one is system header (this comes with compiler) files and the other is user defined header files
//including a header file is like copying and pasting the content of the header file at the top of the program
#include"rishav.h"//this is a user defined header file, which is created by me, it'll be in the same directory as the program
using namespace std;

int main()//operators are used to perform operations on variables and values
{
    int a = 10;//here we declared a variable a and assigned a value 10
    int b = 4;//here we declared a variable b and assigned a value 20
    cout<<"Operators in c++"<< endl;
    cout<<"The value of a+b is :"<<a+b<< endl;//operators in c++ are: arithmetic, relational, logical, bitwise, assignment, conditional
    cout<<"The value of a-b is :"<<a-b<< endl;
    cout<<"The value of a*b is :"<<a*b<< endl;
    cout<<"The value of a/b is :"<<a/b<< endl;//division operator gives the quotient of the division in int
    cout<<"The value of a%b is :"<<a%b<< endl;//modulus operator gives the remainder of the division
    cout<<"The value of a++ is :"<<a++<< endl;//increment operator increases the value of the variable by 1 after printing the value
    cout<<"The current value of a is :"<<a<< endl;
    cout<<"The value of a-- is :"<<a--<< endl;//decrement operator decreases the value of the variable by 1 after printing the value
    cout<<"The current value of a is :"<<a<< endl;
    cout<<"The value of ++a is :"<<++a<< endl;//pre-increment operator increases the value of the variable by 1 then prints the value
    cout<<"The current value of a is :"<<a<< endl;
    cout<<"The value of --a is :"<<--a<< endl;//pre-decrement operator decreases the value of the variable by 1 then prints the value
    cout<<"The current value of a is :"<<a<< endl;
    cout<<endl;
    cout<<"Following are the types of comparison operators in C++"<<endl;
    cout<<"The value of a==b is :"<<(a==b)<<endl;//this compares if a=b, and returns value in 0/1, representing false/true respectively
    cout<<"The value of a!=b is :"<<(a!=b)<<endl;//this compares if a is not = b
    cout<<"The value of a<=b is :"<<(a<=b)<<endl;
    cout<<"The value of a>=b is :"<<(a>=b)<<endl;
    cout<<"The value of a<b is :"<<(a<b)<<endl;
    cout<<"The value of a>b is :"<<(a>b)<<endl;
    cout<<endl;
    cout<<" These are the logical operators in C++"<<endl;
    cout<<" The output of this logical and (a<b)&&(a<=b) is:"<<((a<b)&&(a<=b))<<endl;//checks if both conditions r satisfied
    cout<<" The output of this logical And (a>b)&&(a>=b) is:"<<((a>b)&&(a>=b))<<endl;
    cout<<" The output of this logical or (a<b)||(a<=b) is:"<<((a>b)||(a<=b))<<endl;//checks if any one condition is satisfied
    cout<<" The output of this logical or (a>b)||(a>=b) is:"<<((a<b)||(a>=b))<<endl;
    cout<<" The output of this logical not (!(a==b)) is:"<<(!(a==b))<<endl;//reverses the output

    return 0;
}
