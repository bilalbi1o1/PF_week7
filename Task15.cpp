#include<iostream>
using namespace std;

float calculatePrice(float inheritedMoney,int untillYear);

int main()
{    
    float result;
    float inheritedMoney;
    int untillYear;
    
    
    cout<<"Enter inherited money :";
    cin>>inheritedMoney;
    cout<<"Enter year until which he has to live in the past :";
    cin>>untillYear;
    
    result=calculatePrice(inheritedMoney,untillYear);
    
}
float calculatePrice(float inheritedMoney,int untillYear)
{
    float MoneyEven=0;
    float MoneyOdd=0;
    float total=0;
    
    int age;
    age=18+(untillYear-1800);
    
    for(int n=untillYear;n>=1800;n--)
    {
        if(n%2==0)
            {
            MoneyEven=MoneyEven+12000;
            }
        if(n%2!=0)
            {
            MoneyOdd=MoneyOdd+12000+(50*age);
            }
            age=age-1;
           
    }
    
     total=inheritedMoney-MoneyOdd-MoneyEven;
     
    if(total>=0)
    {
    cout<<"Yes! He will live a carefree life and will have "<<total<<" dollars left";
    }
    if(total<0)
    {
    total=total*-1;
    cout<<"He will need "<<total<<" dollars to survive";
    }
    return total;
}