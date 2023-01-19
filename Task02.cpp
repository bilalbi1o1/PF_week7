#include<iostream>
using namespace std;

int SUM();

int main()
 {
    int result;
    result = SUM();
    cout<<result;


 }

 int SUM()
 {
    int sum=0;
    for(int n=1;n<=5;n++)
        {
            sum=sum+n;
        }
        return sum;
 }