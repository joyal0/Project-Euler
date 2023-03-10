//Even Fibonacci numbers
//
/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/
#include<iostream>
using namespace std;

int main()
{
	/* code */
	long long int a=0,b=1;
	long long int c=1,sum = 0;
	while( c < 4000000 )
	{
		/* code */
		if(c%2==0)
		{
			sum += c;
		}
		c = a + b;
		a = b;
		b = c;
	}
	cout<<"SUM = "<<sum;
	return 0;
}