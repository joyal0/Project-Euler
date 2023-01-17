/*
Smallest multiple
Problem 5
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 
without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers 
from 1 to 20?
*/
#include<iostream>
#include<cmath>
using namespace std;

int prime(int n)
{
	int flag = -1 ;
	for(int i = 3 ; i < n ; i+=2 )
	{
		flag = 1;
		if(n==3)
			return flag;
		else if(n%i==0)
		{
			flag = 0;
			return flag;
		}
		return flag;
	}
}

int main()
{
	/* Code Here */
	long int n,product;
	product = 1; 
	cout<<"This is a program to find the smallest possible multiple of natural numbers from 1 to n\n Enter the value of n : ";
	cin>>n;
	int list_of_primes[n];
	int count_primes = 0;
	char ch;
	list_of_primes[0] = 2;
	++count_primes;
	if(n>2)
	{
		//find all prime numbers from 1 ton given value of n	
		for (int i = 3; i <= n; i += 2 )
		{
			/* code */
			if(prime(i))
			{
				list_of_primes[count_primes] = i ;
				++count_primes;
			}

		}
		//end of above section
		for (int i = 0; i < count_primes; ++i)
		{
			/* code */
			cout<<product<<"\n" ;
			product *= list_of_primes[i] ;
		}
		//By now product has every prime factor one time
		for(int i = 4 ; i <= n ; ++i )
		{
			//in this loop we try to find recurring occurences of already existing primefactors 
			//needed and multiply by it so as to achieve smallest multiple divisible by any number from 1 to n value
			if( product % i != 0 )
			{
				for (int j = 0; j < count_primes; ++j)
				{
					/* code */
					if( (floor(i/list_of_primes[j])==(i/list_of_primes[j]))&&((i/list_of_primes[j])!=0)&&((i/list_of_primes[j])!=1))
					{
						if(i%list_of_primes[j] == 0)
							product *= list_of_primes[j];
						
					}
				}
			}
		}
		cout<<"\nSmallest multiple from 1 to "<<n<<" is "<<product;
	}
	return 0;
}
