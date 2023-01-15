/*
Largest palindrome product 
Problem 4
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 
Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include<iostream>

using namespace std;

int main()
{
    /*COde Here*/
    //my first thing that comes to mjy mind is to find minimum and maximum values of multiplication
    //of 2 3-digit numbers
    long long int min = 100*100,max = 999*999 ;
    cout<<"The Palindrome should lie between "<<min<<" and "<<max<<"\n";
    long long int starter,tempStart,rev,init;
    int temp=0,i;
    starter = max/1000;
    tempStart = --starter;
    while(starter>100)
    {
        init = tempStart;
        cout<<"init="<<init<<"\n";
        temp = 0;
        while(tempStart>0)
        {
            temp = (temp*10) + tempStart%10 ;
            tempStart /= 10;
        }
        rev = (init*1000)+temp;
        cout<<"rev="<<rev<<"\n";
        i = 100;
        while(i<999)
        {
            if(rev%i==0)
            {
                if(((rev/i)/100>0)&&((rev/i)/100<=9))
                {
                    cout<<rev <<" is the largest palindrome multiplie by two 3-digit numbers "<<i<<" and "<<(rev/i);
                    return 0;
                }
            }
            ++i;
        }
        tempStart = init-1;
    }
    return 0;
}