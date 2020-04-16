
/*Purpose 	:Program  to calculate the sum of squares of a given Number
Language	:C++
Author  	: Manikanta Yelisetti
Date    	: 16/04/2020
*/

#include<iostream>
#include<string.h>
using namespace std;
int square(int iN)  // function for square fo n numbers
	{
   		int iSum = 0;
   		for (int iI = 1; iI <= iN; iI++)
		 {
    		iSum += iI * iI;                      //square i and add it with sum
   		}
   	return iSum;
}
int main(int argc, char *argv[])
{
	if(argc>=2)
	{
    	if(strcmp(argv[1],"-h")==0) 	//For comparing input string through command line is -h
		{	
			cout<<"Purpose of this program is to calculate the sum of squares of a given Number"<<endl;
			cout<<"This can be done Using formula of Sum of n Natural numbers(n*(n+1)*((2*n)+1))/6" <<endl;
		}
	}
	else
	{
   		int iN;
   		cout << "Enter N: ";  //taking input from the user
   		cin >> iN;
   		cout << "Result is: " << square(iN);  //function call
	}
} 
