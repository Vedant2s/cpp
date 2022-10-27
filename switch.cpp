#include<iostream>
using namespace std;
int main()
{
    int choice,a,b;
    cout<<"Enter your choice"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Multiplication"<<endl;
    cout<<"3.Subtraction"<<endl;
    cout<<"4.Division"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1://if choice is char variable then this line may be case 'a':
        cout<<"Enter 2 no.s"<<endl;
        cin>>a>>b;
        cout<<a+b<<endl;
        break;
    case 2:
        cout<<"Enter 2 no.s"<<endl;
        cin>>a>>b;
        cout<<a*b<<endl;
        break;
    case 3:
        cout<<"Enter 2 no.s"<<endl;
        cin>>a>>b;
        cout<<abs(a-b)<<endl;
        break;
    case 4:
        cout<<"Enter 2 no.s"<<endl;
        cin>>a>>b;
        cout<<(float)a/b<<endl;
        break;
    default:
        cout<<"exit"<<endl;
        break;
    }
    return 0;
}
