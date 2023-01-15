#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    int i;
    for(i=3;(i<10000);++i)
    {
        if((i%3==0)||(i%5==0))
            sum += i;
    }
    cout<<"Sum = "<<sum;
    return 0;
}