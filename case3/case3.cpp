/*Purpose 	:program program that explains Variable Scope,Modifier Types,Storage Classes
Language	:C++
Author  	: Manikanta Yelisetti
Date    	: 10/04/2020
	*/
	
#include<iostream>
#include<string.h>
#include<typeinfo>
using namespace std;

unsigned iNum=75;    //global variables
signed int iNum1=90; 


void test_function_storage()
	{
    auto  auto_iNum="NEW";   
    long double fCount;          // declaration of local variables
	cout<<"Enter the double value:";
	cin>>fCount;
    static int iStatic_Num;    
    register int iRegister_Num;    
	cout<<"Enter the Register variable:";
	cin>>iRegister_Num;
	iStatic_Num=iStatic_Num+iRegister_Num*2;
	for(int iStart=0;iStart<fCount;iStart++)
    {
		iStatic_Num++;
    }
	cout<<endl;
	cout<<"Global Variables:"<<endl;
	cout<<"Global   = "<<iNum<<" "<<"Size:"<<sizeof(iNum)<<endl;
	cout<<"Second Global Variable = "<<iNum1<<" "<<"Size:"<<sizeof(iNum1)<<endl;
	cout<<endl;
	cout<<"Static   = "<<iStatic_Num<<" "<<"Size:"<<sizeof(iStatic_Num)<<endl;
	cout<<"Register = "<<iRegister_Num<<" "<<"Size:"<<sizeof(iRegister_Num)<<endl;
	cout<<"Auto = "<<auto_iNum<<'\t'<<"Type ="<<typeid(auto_iNum).name()<<endl;
	cout<<"Double Value:"<<fCount<<" "<<"Size of Double:"<<sizeof(fCount)<<endl;
	cout<<endl;
	}



void type_modifiers()
	{
    unsigned iNum;  
	cout<<"Enter a unsigned Number:";
	cin>>iNum;
	signed int iNum1;cout<<"Enter signed number:";
	cin>>iNum1;
	test_function_storage();
	cout<<endl;
	cout<<"Local variables"<<endl;
	cout<<"Global Variable in function = "<<iNum<<" "<<"Size:"<<sizeof(iNum)<<endl;
	cout<<"Second Global Variable in function = "<<iNum1<<" "<<"Size:"<<sizeof(iNum1)<<endl;
	cout<<endl;
	}

int main(int argc,char* argv[])
{
    if(argc>=2)
    {
        if(strcmp(argv[1],"-h")==0)     
        {
			cout<<"Just enter different values as mentioned and observe the output"<<endl;    //usage of the program
        }
    }
    else
    {
		test_function_storage();  
		type_modifiers();
    }
    return 0;
}

