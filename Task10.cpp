#include<iostream>
using namespace std;

void SUM();
int main()
{
    SUM();
}
void SUM()
{
    int number=0;
  for(int num=1 ; num<=100 ; num++)
    {
        number=number+num;
    }
    cout<<number;
}