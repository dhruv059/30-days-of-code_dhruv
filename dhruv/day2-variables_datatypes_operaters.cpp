#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    // declaring variables:
    int x, y; // int data-type

    double result; // double data-type
    float u; //float data-type
    bool z=false; //boolean data-type
    string s; //string data-type

    // initializing the values
    x = 6;
    y = 7;

    //operators used
    a = a + 1;
    result = a - b;

    cout << "Result of "<<x<<" - "<<y<<" is: "<<result<<endl;
    cout <<"Data-Type of u is: " <<typeid(u).name() << endl;
    cout <<"Data-Type of a is: " <<typeid(x).name() << endl;
    cout <<"Data-Type of result is: " <<typeid(result).name() << endl;
    cout <<"Data-Type of x is: " <<typeid(z).name() << endl;
    cout <<"Data-Type of s is: " <<typeid(s).name() << endl;

    return 0;
}
