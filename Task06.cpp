#include<iostream>
using namespace std;
int frequencyChecker(int num,int dig);
int main()
{
    int num;
    int dig;
    cout<<"Enter number :";
    cin>>num;
    cout<<"Enter digit :";
    cin>>dig;
    int result = frequencyChecker(num,dig);
    cout<<result;
}

int frequencyChecker(int num,int dig)
{
    int num1;
    int count=0;

while(num!=0)
    {
        num1=num%10;
        if(num1==dig)
        count=count+1;
        num=num/10;      
    }
        return count;
    
}

