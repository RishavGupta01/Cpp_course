#include<iostream>

using namespace std;
int c= 45;//this is a global variable
// we know that the precedence of local variable is more than the global variable, so no matter what a global variable is declared as, if there is a local variable corresponding to that same name, that will have a higher precedence
int main(){

    /****************Local and Global scope of variables********************/
    int a,b,c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c=a+b;// this is a local variable, inside the func., so it wont return the value of global c
    cout<<"The sum of a+b is :"<<c<<endl;
    cout<<"The global c is :"<<::c<<endl;//the "::" is the scope resolution operator, helps us access the global c inside the function where c is already present in local scope
    cout<<endl;

    /************Build in Data types**************/

    cout<<"The size of 33.4 is:"<<sizeof(33.4)<<endl;//this gives us the size of a value
    cout<<"The size of 33.4f is:"<<sizeof(33.4f)<<endl;
    cout<<"The size of 33.4l is:"<<sizeof(33.4l)<<endl;
    cout<<"The size of 33.4F is:"<<sizeof(33.4F)<<endl;
    cout<<"The size of 33.4L is:"<<sizeof(33.4L)<<endl;

    /***********Reference Variables**********/
    float x=455;
    float &y=x;//this is a reference variable, it is a variable that is an alias to another variable, it is a reference to the variable x
    cout<<"The value of x is:"<<x<<endl;
    cout<<"The value of y is:"<<y<<endl;


    /**************Type-Casting***************/
    int m=45;
    float n=45.45;
    cout<<"The value of m is:"<<m<<endl;
    cout<<"The value of n is:"<<n<<endl;
    cout<<"The value of m is:"<<float(m)<<endl;//this is type-casting, it converts the value of m to float
    cout<<"The value of n is:"<<int(n)<<endl;//it converts the value of n to int
    int o= (int)n;//this is another way of type-casting
    cout<<"The value of o is:"<<o<<endl;
    
    cout<<"The value of m+n is: "<<(m+n)<<endl;
    cout<<"The value of m+n is: "<<(m+int(n))<<endl;//it converts the value of n to int
    cout<<"The value of m+n is: "<<(m+float(n))<<endl;//it converts the value of n to float


    return 0;

}