#include<iostream>
using namespace std;

void table(int num);

int main()
{
    int num;
    cout<<"Enter a number :";
    cin>>num;   
    table(num);
    
}

void table(int num)
{
    for(int n=1;n<=10;n++)
        {
            cout<<num<<" * "<<n<<" = "<<num*n<<endl;

        }
}