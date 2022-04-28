#include<bits/stdc++.h>
using namespace std;

int main(){
    double x, y, res;
    int choice;
    
    cout<<"Enter two numbers: \n";
    cin>>x>>y;

    cout<<"******Calculator******"<<endl;
    cout<<"1"<<endl;
    cout<<"2"<<endl;
    cout<<"3"<<endl;
    cout<<"4"<<endl;
    cout<<"5"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;
    cout<<"\n";

    switch(choice){
        case 1: res = x+y;
                cout<<"Result of a+b is : "<<res<<"\n";
                break;
        case 2: res = x-y;
                cout<<"Result of a-b is : "<<res<<"\n";
                break;
        case 3: res = x*y;
                cout<<"Result of a*b is : "<<res<<"\n";
                break;
        case 4: res = x/y;
                cout<<"Result of a/b is : "<<res<<"\n";
                break;
        case 5: if(int(x)%2==0)
                    cout<<x<<" is even\n";
                else   
                    cout<<x<<" is odd\n";
                if(int(y)%2==0)
                    cout<<y<<" is even\n";
                else   
                    cout<<y<<" is odd\n";
                break;
        default: cout<<"Wrong Choice....\n";
                 break;
    }
}
