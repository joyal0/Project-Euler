
/*
Longest Collatz sequence
Submit

 Show HTML problem content 
Problem 14
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

long long int chlen(long long int t)
{
	long long int count=0;
	for(long long int i = t;i>=2;)
	{
		if(i%2==0)
		{
			i /= 2;
			++count;
		}
		else if(i%2!=0)
		{
			i = 3*i + 1;
			++count;
		}
	}
	return count;
}
int main()
{
	
	/* Code Here */
	long long int chain=0,tgt,temp_cl;
	for(long long int i = 999999;i>=100000;--i)
	{
		temp_cl = chlen(i);
		if(temp_cl>chain)
		{
			chain = temp_cl;
			tgt = i;
		}
	}
	cout<<"Target="<<tgt;


}
