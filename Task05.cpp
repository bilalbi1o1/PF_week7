#include<iostream>
using namespace std;
int totaldigits(int);
int main()
{
    int num;
    
    cout<<"Enter a number :";
    cin>>num;
    
    int result = totaldigits(num);
    cout<<result;
}

int totaldigits(int num)
{
    int count=0;
while(num!=0)
    {
        count=count+1;
        num=num/10;      
    }
        return count;
    
}

