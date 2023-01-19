#include<iostream>
using namespace std;

void series(int num);

int main()
{
    int num;
    int pre=0;
    int next=0;
    int current=1;

    cout<<"How many numbers of Fibonacci series you want to print :";
    cin>>num;

    series(num);

    
}
void series(int num)
{

    int pre=0;
    int next=0;
    int current=1;

    cout<<pre<<endl;
    cout<<current<<endl;
    
    for(int count=1;count<=num-2;count++)
    {
        next = pre + current ;
        pre = current ;
        current = next ;
        cout<<next<<endl;

    }

}