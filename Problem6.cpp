
/*
Sum square difference
Problem 6
The sum of the squares of the first ten natural numbers is,

The square of the sum of the first ten natural numbers is,

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 
.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
#include<iostream>
using namespace std;


int main()
{

	/* Code Here */
	int n;
	long long int sum_of_square=0,square_of_sum=0;
	cout<<"Program to calulate diff b/w square of sums and sum of squares of first n natural numbers\nEnter the value of n: ";
	cin>>n;
	for (int i = 1; i <= n; ++i)
	{
		/* code */
		sum_of_square += i*i ;
		square_of_sum += i ;
	}
	square_of_sum *= square_of_sum ;
	cout<<"diff b/w square of sums and sum of squares of first "<<n<<" natural numbers is \n";
	cout<<square_of_sum<<" - "<<sum_of_square<<" = "<<square_of_sum - sum_of_square ;
	//Code ends here


}
