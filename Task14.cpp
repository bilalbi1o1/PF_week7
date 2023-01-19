#include<iostream>
using namespace std;

float calculateMoney(int age,float machinePrice,int toyUnitPrice);

int main()
{
    int age;
    float machinePrice;
    int toyUnitPrice;
    float result;
    
    cout<<"Enter Lillys age :";
    cin>>age;
    cout<<"Enter price of the washing machine  :";
    cin>>machinePrice;
    cout<<"Enter Unit price of each toy :";
    cin>>toyUnitPrice;
    
    result = calculateMoney(age,machinePrice,toyUnitPrice);
    cout<<result;
}
float calculateMoney(int age,float machinePrice,int toyUnitPrice)
{   
    float moneyEven=0;
    float moneyOdd=0;
    float totalMoney;
    int toyNumbers=0;
    
    for(int n=age;n>0;n--)
    {
        if(age%2==0)
            {
            moneyEven=moneyEven+5*age;
            moneyEven=moneyEven-1;
            
            }     
        if(age%2!=0)
            {
            toyNumbers=toyNumbers+1;
            }
            age=age-1;
    } 
    moneyOdd=toyNumbers*toyUnitPrice;
   totalMoney=moneyEven + moneyOdd;

   if(totalMoney>=machinePrice)
    {
     cout<<"Yes!"<<endl;
     return totalMoney-machinePrice;
    }
    if(totalMoney<machinePrice)
    {
     cout<<"No!"<<endl;
     return machinePrice-totalMoney;
    }
}