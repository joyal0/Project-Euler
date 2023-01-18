/*
Largest product in a series

Problem 8
The four adjacent digits in the 1000-digit number that have the greatest product are 9 × 9 × 8 × 9 = 5832.

73167176531330624919225119674426574742355349194934
96983520312774506326239578318016984801869478851843
85861560789112949495459501737958331952853208805511
12540698747158523863050715693290963295227443043557
66896648950445244523161731856403098711121722383113
62229893423380308135336276614282806444486645238749
30358907296290491560440772390713810515859307960866
70172427121883998797908792274921901699720888093776
65727333001053367881220235421809751254540594752243
52584907711670556013604839586446706324415722155397
53697817977846174064955149290862569321978468622482
83972241375657056057490261407972968652414535100474
82166370484403199890008895243450658541227588666881
16427171479924442928230863465674813919123162824586
17866458359124566529476545682848912883142607690042
24219022671055626321111109370544217506941658960408
07198403850962455444362981230987879927244284909188
84580156166097919133875499200524063689912560717606
05886116467109405077541002256983155200055935729725
71636269561882670428252483600823257530420752963450

Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?
*/
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

int* GetBigInteger(string str)
{
    int x = str.size(), a = 0;
 
    // Create an array to store the big
    // integer into it.
 
    // Make the array size same as the
    // size of string str
    int* arr = new int[str.size()];
 
    // Loop to extract string elements
    // into the array one by one
    while (a != x) {
 
        // Subtracting '0' to convert
        // each character into digit
 
        // str[a] - '0'
        // = ASCII(str[a]) - ASCII('0')
        // = ASCII(str[a] - 48
        arr[a] = str[a] - '0';
        a++;
    }
 
    // Return the reference of the array
    return arr;
}

int main()
{
	
	/* Code Here */
	string str;
	cout<<"Program to find n digits of a number s ,such that has greatest product\n";
	cout<<"Enter the value of s: ";
	cin>>str;
	cout<<"Enter the value of n: ";
	int n,loop=0;
	cin>>n;
	long int product=1,product_temp=1,sum=0,sum_temp;
    // Function Call
    int* arr = GetBigInteger(str);
 
    // Print the digits in the arr[]
    for (int i = str.size(); i >= n-1 ; --i) 
    {
    	loop = 0;
    	product_temp =1;
        sum_temp=0;
    	for(int j = i ; j>= (i-(n-1)) ; --j)
    	{
    		product_temp *= arr[j] ;
    		sum_temp += arr[j]*pow(10,loop);
    		++loop; 
    	}	
    	
    	if (product<product_temp)
    	{
    		sum = sum_temp;
    		product = product_temp;
    	}
	}
	cout<<"\n The larget multiple of "<<n<<" digits is "<<product<<"\nand the digits are "<<sum;
	//Code ends here
	
}


