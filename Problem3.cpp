/*Largest prime factor

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/

#include<iostream>
using namespace std;

int primeNo(unsigned long long int n)
{

	unsigned long long int largestprimefactor;
	if(n>2)
	{
		while(n%2 == 0)
		{
			largestprimefactor = 2;
			n /= 2;
		}
		for (unsigned long long int i = 3; i*i <= n ; i += 2)
		{
			/* code */
			while(n%i == 0)
			{
				n /= i;
				largestprimefactor = i;	
			}
		}
		return n;
	}
}
int main()
{
	/* code here */
	//code section to check if a number is primew
	cout<<"Enter number to check if it's largest prime factor\n";
	unsigned long long int n;
	cin>>n;
	cout<<primeNo(n)<<" is the largest prime factor of "<<n;
	return 0;
}

/*
The method of solving this problem is 
1) to understand how this problem is solved and
2) the mathematical and logical concepts used to solove this problem

The number whose largest prime factor is to be found is passed to function primeNo
first we confirm if the given o is greater than 0 as we cant prime factors for negative numbers
secondly we continuously divide it by 2 until the no is no longer divisible by 2 and its multiples 
		which menas we dont need to try dividing the no by even multiples anymore and can reduce half of the numbers in this way
thirdly we will loop and recurringly divide the rest of the number by 3 and other odd multiples 
		until the square of the number is equivalent to the given number
lastly the what is left of the original number is the largest prime factor 
		It is based on the mathematical property that
		Every composite number can be expressed as multiples of prime numbers
		so if we divide the composite nubers recurringly with prime numbers then 
		the last left number is the largest prime factor of that numbers
*/