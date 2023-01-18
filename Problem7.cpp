/*
10001st prime

Problem 7
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/
#include<iostream>
#include<cmath>
using namespace std;
int prime(long long int n)
{
	int flag = -1 ;
	for(long long int i = 3 ; i < n ; i+=2 )
	{
		flag = 1;
		if(n==3)
			return flag;
		else if(n%i==0)
		{
			flag = 0;
			return flag;
		}
		
	}
	return flag;
}

int main()
{

	/* Code Here */
	int count_primes=0,flag = 0;
	int n;
	cout<<"Program to find the nth prime number\nEnter the value of n: ";
	cin>>n;
    long long int i;
    if(n>2)
	{
        ++count_primes;
		++count_primes;
    }	
        
	for (i = 5; count_primes <= n; i+=2)
	{
		/* code */
		
		if(prime(i))
		{
			++count_primes;
		}

		if(count_primes==n)
		{
			flag = 1;
			cout<<i<<" is the "<<n<<"th prime number";
			return 0;
		}
		
	}
	if(flag==0)
	{
			cout<<"Couldn't find "<<n<<"th prime number";
			return 0;
	}
	
}
