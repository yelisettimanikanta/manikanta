#include<iostream>
/*Purpose 	:Gives the type and size of given commandline arguments
	Language	:C++
	Author  	: Manikanta Yelisetti
	Date    	: 10/04/2020
	*/

#include<string.h>
using namespace std;
int main(int argc, char* argv[])
{
	if(argc>=2)
	{
    	if(strcmp(argv[1],"-h")==0) 	//For comparing input string through command line is -h
	{
		cout<<"Purpose of this program is to calculate the sum of squares of a given Number\nThis can be done Using formula of Sum of n Natural numbers(n*(n+1)*((2*n)+1))/6 "<<endl;
	}
	}
	else{
   int iNumber;
   int iResult;
   cout<<"Enter a Number to calculate the sum of squares of that number "<<endl;
   cin>>iNumber;
   iResult=(iNumber*(iNumber+1)*((2*iNumber)+1))/6;        	//Formula for sum of squares of n Natural Numbers
   cout<<iResult<<endl;
	}
 	return 0;
}
