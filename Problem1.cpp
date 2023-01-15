#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    for(int i=2;(i%3==0)&&(i%5==0)&&(i<10000);++i)
    {
        sum += i;
    }
    cout<<"Sum = "<<sum;
    return 0;
}