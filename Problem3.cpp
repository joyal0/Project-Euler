/*Largest prime factor

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/

#include<iostream>
using namespace std;

int primeNo(unsigned long long int n)
{

	int flag;
	unsigned long long int largestprimefactor;
	if(n>2)
	{
		flag = 0;
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
				flag = 1;
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
	unsigned long long int n,flag,result;
	cin>>n;
	cout<<primeNo(n)<<" is the largest prime factor of "<<n;
	return 0;
}