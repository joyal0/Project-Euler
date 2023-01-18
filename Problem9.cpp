
/*
Special Pythagorean triplet

Problem 9
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

*/

#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	
	/* Code Here */
	int i,j,n,flag=1;
	cout<<"program to satisfy pythagorean triplet condition with condition\n a + b + c = n \n";
	cout<<"Enter the value of n";
	cin>>n;
	for(i=3;i<n;++i)
	{
		for(j=4;j<n;++j)
		{
			if(i==j)
				++j;
			if((hypot(i,j)-int(hypot(i,j)))==0)
			{
				if((n-i-j)==hypot(i,j))
				{
					cout<<"The required product is "<<i*j*(n-i-j)<<" with individual "<<i<<" , "<<j<<" and "<< (n-i-j);
					flag = 0;
					break;
				}
			}
		}
		if((n-i-j)==hypot(i,j))
			break;
	}
	if(flag)
	cout<<"The is no such pythagorean triplet";
	//Code ends here
	

}
