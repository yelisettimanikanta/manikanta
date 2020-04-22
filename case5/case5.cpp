/*Purpose 	:Program to illustrate constructor and destructor calling with and without virtual keyword 
Language	:C++
Author  	: Manikanta Yelisetti
Date    	: 11/04/2020
*/

#include<iostream>
#include<string.h>
using namespace std;
class base
{
    public:
        base()
        {
            cout<<"base class constructor"<<endl;
        }
        
        
        virtual ~base()
        {
            cout<<"base class destructor"<<endl;
        }
};
class derived:public base
{
    public:
        derived()
        {
            cout<<"derived class constructor"<<endl;
        }
        
        ~derived()
        {
            cout<<"derived class destructor"<<endl;
        }
};

int main(int argc,char* argv[])
{
    if(argc>=2)
	{
    	if(strcmp(argv[1],"-h")==0) 	//For program usage through commandline argument -h
    	{
    		cout<<"Usage:\nProgram to illustrates constructor and destructor calling"<<endl;
    	}
	}

	else
	{
    base *b=new derived();
   
    derived obj;
	}
    
}
