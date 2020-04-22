/*Purpose 	:Program to illustrate difference between public, private and protected access specifiers.
Language	:C++
Author  	:Reshma Tamma
Date    	:10/04/2020
*/
#include<iostream>
#include<string.h>
#include<iostream>

using namespace std;
class dot
{
	private:
		int count;
	protected:
		int side ;
	public: 							//in public we can access both public and protected members of class
		int num =10 ;
		void caluclate(int c) 			//function  to access the private data member in public within the class
		{
			count= c*num;
			cout<<"count is "<<count<<endl;
		}
		void display(float ace) 		//function to access the protected data member in public within the class
		{
			int total;
			cout<<"enter the value of side"<<endl ;
			cin>>side;
			total=ace*count*side ;
			cout<<"total is"<<total<<endl ;
		}
		 
};

int main(int argc,char *argv[])
{
    if(argc>=2)
    {
	    if(strcmp(argv[1],"-h")==0)			//if loop for comparing the input string with "-h"
	    {
            cout<<"Usage:Illustrates difference between public, private and protected access specifiers. "<<endl;
            
	    }
    }
	else
	{
		dot g;
		g.caluclate(5) ;
		g.display(4) ;
	}
}

