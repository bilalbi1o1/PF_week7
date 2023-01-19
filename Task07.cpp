#include<iostream>
using namespace std;
int digitSum(int num);
int main()
{
    int num;
    
    cout<<"Enter a number :";
    cin>>num;
    
    int result = digitSum(num);
    cout<<result;
}

int digitSum(int num)
{
        int num1=0;
        int num2=0;
while(num!=0)
    {
        
    
        num1=num%10;
        num2=num1+num2;
        num=num/10;  

    }
        return num2;
    
}

