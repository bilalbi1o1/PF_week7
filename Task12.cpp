#include<iostream>
using namespace std;

int hcf(int num1,int num2);
int lcm(int num1,int num2,int HCF);

int main()
{
    int num1;
    int num2;
    int HCF;
    int LCM;

    cout<<"Enter first number :";
    cin>>num1;
    cout<<"Enter second number :";
    cin>>num2;

    HCF=hcf(num1,num2);
    cout<<"HCF is "<<HCF<<endl;

    LCM=lcm(num1,num2,HCF);
    cout<<"LCM is "<<LCM;

    return 0;
}
int hcf(int num1,int num2)
{ 
    int num=0;
    int HCF=0;

    if(num1<num2)
    {
        for(int count=num1;count>0;count--)
        {
            if(num2%count==0 && num1%count==0)
            {
                HCF=count;
                return HCF;
            }
        }
    }
     if(num1>num2)
    {
        for(int count=num2;count>0;count--)
        {
            if(num1%count==0 && num2%count==0)
            {
                HCF=count;
                return HCF;
            }
        }
    }
}
int lcm(int num1,int num2,int HCF)
{
    int LCM;
    LCM=(num1*num2)/HCF;
    return LCM;

}