#include<iostream>
using namespace std;

void counting(int number);
int main()
{
    int number;
    cout<<"Enter a number :";
    cin>>number;
    counting(number);
}
void counting(int number)
{
  for(int num=1 ; num<=number ; num++)
    {
        cout<<num<<endl;
    }
    
}