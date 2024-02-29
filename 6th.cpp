#include<iostream>
using namespace std;
int main()
{
    int a=5;
    cout<<"The value of a: "<<a<<endl;
    a=45;//this updates the value of a
    cout<<"The value of a: "<<a<<endl;//check the updated value of a

    /*********Constants*******8*/
    //to avoid doing this, we can use the "const" keyword
    const int b=5;
    cout<<"The value of b: "<<b<<endl;
    //b=45;//this will give an error, as we cannot update the value of a constant variable
    cout<<"The value of b: "<<b<<endl;//check the updated value of b
    return 0;

}
