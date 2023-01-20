#include<iostream>
using namespace std;
void printPercentage(int number);

int main()
{
    int number;
    cout<<"Enter how many numbers you want to Enter :";
    cin>>number;

    printPercentage(number);
}
void printPercentage(int number)
{
    float p1;
    float p2;
    float p3;
    float p4;
    float p5;
    float c1=0;
    float c2=0;
    float c3=0;
    float c4=0;
    float c5=0;

    for(int count=1 ; count<=number ;count++ )
    {
        int num=0;
        cout<<"Enter a number :";
        cin>>num;

        if(num<200)
        {
            c1 = c1 + 1;
        }
        if(num>=200 && num<400)
        {
            c2 = c2 + 1;
        }
        if(num>=400 && num<600)
        {
            c3 = c3 + 1;
        }
        if(num>=600 && num<800)
        {
            c4 = c4 + 1;
        }
        if(num>=800 && num<=1000)
        {
            c5 = c5 + 1;
        }
    }

    p1=(c1/number)*100;
    p2=(c2/number)*100;
    p3=(c3/number)*100;
    p4=(c4/number)*100;
    p5=(c5/number)*100;

    cout<<p1<<"%"<<endl;
    cout<<p2<<"%"<<endl;
    cout<<p3<<"%"<<endl;
    cout<<p4<<"%"<<endl;
    cout<<p5<<"%";

}