#include<iostream>
using namespace std;

void validNumber(int number);
int main()
{
    int num;

    cout<<"Enter a number :";
    cin>>num;
    
    validNumber(num);
    
}
void validNumber(int number)
{   
    while(number<=0)
    {
        cout<<"Error ! Enter a number greater than zero " <<endl;
        cout<<"Enter the number again :";
        cin>>number;
    }
}