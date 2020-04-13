/*Purpose 	:Program to illustrate  public,private and protected access specifiers 
Language	:C++
Author  	: Manikanta Yelisetti
Date    	: 11/04/2020
*/

#include <iostream>
#include<string.h>

using namespace std;

class A
{
public:
A()
    {
		cout<<"A Class Constructor is Invoked"<<endl;
    }
    ~A()
    {
		cout<<"A Class Destructor is Invoked"<<endl;
    }

};

class B
{
public:
    A ob;    //A class object in another class
B()
    {
		cout<<"B Class Constructor is Invoked"<<endl;
    }
    ~B()
    {
		cout<<"B Class Destructor is Invoked"<<endl;
    }
    
};

class Derived:public B
{
public:
	Derived()
    {
		cout<<"Derived Class Constructor is Invoked"<<endl;
    }
    ~Derived()
    {
     	cout<<"Derived Class Destructor is Invoked"<<endl;
    }
};

int main(int argc,char* argv[])
{
    if(argc>=2)
    {
        if(strcmp(argv[1],"-h")==0)     //created a help command
        {
			cout<<"Usage: order of constructors and destructors"<<endl;
        }
    }
    else
    {
        Derived *D=new Derived();
        B *B=D;
        delete B;
    }
    return 0;
}

