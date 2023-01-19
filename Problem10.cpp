/*
Summation of primes

Problem 10
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

*/

#include<iostream>

using namespace std;

int prime(unsigned long long int n)
{
	int flag = -1 ;
	for(unsigned long long int i = 3 ; i*i <= n ; i+=2 )
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
	unsigned long long int n,sum=0;
	cout<<"This is a program to find the sum of all prime numberss from 1 to n\n Enter the value of n : ";
	cin>>n;
	int count_primes = 0;
	++count_primes;
	sum += 2 ;
	if(n>2)
	{
		//find all prime numbers from 1 ton given value of n	
		for (unsigned long long int i = 3; i <= n; i += 2 )
		{
			/* code */
			if(prime(i))
			{
				++count_primes;
				sum += i ;

			}

		}
		//end of above section
		cout<<"\nsum of prime numbers from 1 to "<<n<<" is given by \n";
		cout<<" = "<<sum;
	}

}
