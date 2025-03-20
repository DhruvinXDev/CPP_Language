/*A data analytics company was tasked with developing a unique digital signature system based on the
concept of "super digits." The system required finding a single-digit representation of a given number
through recursive digit summation. The algorithm was defined as follows:
If the number has only one digit, it is its super digit. Otherwise, the super digit is the super digit of the
sum of its digits, repeated recursively until a single digit is obtained.
The challenge involved an additional complexity—constructing the number by concatenating a given
string representation of an integer multiple times. For example, if the number n was represented as a
string and concatenated k times, the super digit of the resulting number needed to be calculated.
For instance:
Given n = 9875 and k = 4, the number is represented as 9875987598759875.
The sum of digits in this number is calculated recursively until a single digit remains:
9 + 8 + 7 + 5 + 9 + 8 + 7 + 5 + 9 + 8 + 7 + 5 + 9 + 8 + 7 + 5 = 116
1 + 1 + 6 = 8
The super digit is 8.
The system was required to handle large numbers efficiently by leveraging mathematical insights
rather than explicitly constructing large concatenated strings. This case study called for implementing
a recursive solution to calculate the super digit, supported by a mathematical approach to optimize
the handling of repeated sums.*/

#include<iostream>
#include<vector>
using namespace std;

int super_digit ( int , int );

int main  ( )
{
    int number , k,super_digit;
    cout << "Enter the number : ";
    cin >> number;
    cout << "Enter the k : ";
    cin >> k ;
    super_digit = super_digit(number , k);
    cout <<"The super digit is : "<<super_digit<<endl;
    return 0;
}

int super_digit ( int num , int k)
{
    x:
    int digit, sum;
    for ( sum = 0;num>0;num/=10)
    {
        digit = num%10;
        sum +=  digit * k;
    }
    if(sum < 10 )
        return sum;
    else
    {
        num = sum ;
        k=1;
        goto x;
    }
}
