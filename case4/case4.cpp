/*Purpose 	:Program to illustrate  public,private and protected access specifiers 
Language	:C++
Author  	: Manikanta Yelisetti
Date    	: 11/04/2020
*/

#include<iostream>
#include<string.h>
using namespace std;
class Square  //class declaration
{
  protected:
  		int iI;  //protected variable
  private:
  		int iArea;  //private variable
  public:
  		Square()
  		{
  			iI = 10;
		}
   void area1(void)
   {
   		iArea = iI * iI;
		cout<<"Area of Square = "<<iArea<<endl;
   }
};

class Rectangle : public Square    //child class
{
  private:
  		int iB,iArea;
  public:
  	Rectangle()
  	{
  		iB = 20;
	}
   void area2(void)
   {
   	iArea = iI * iB;
	cout<<"Area of Rectangle = "<<iArea<<endl;
   }
};
 									// end of class
int main(int argc,char* argv[])
{
    if(argc>=2)
	{
    	if(strcmp(argv[1],"-h")==0) 	//For program usage through commandline argument -h
    	{
    		cout<<"Usage:\nProgram to illustrate  public,private and protected access specifiers "<<endl;
    	}
	}

	else
	{
		Rectangle r;
		r.area1();
		r.area2();
	}
}

