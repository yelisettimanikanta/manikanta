/*Purpose 	:Program to call private memebers of a class
Language	:C++
Author  	: Manikanta Yelisetti
Date    	: 11/04/2020
*/
#include<iostream>
#include<string.h>

using namespace std;
class Emp
{
	private:   //private members
		int iId;
		char cName[20];
		float fSal;
		void getEmp() //private function
		{
			cout<<"Enter Id,Name,Salary"<<endl;
			cin>>iId>>cName>>fSal;
		}
	public:
		void printEmp()   //funtion having access to priavte members
		{
			getEmp();
			cout<<"Employee details:"<<endl;
			cout<<"id:"<<iId<<endl;
			cout<<"Name:"<<cName<<endl;
			cout<<"sal:"<<fSal<<endl;	
		}
};
int main()
{
	Emp e;
	e.printEmp();  //function call
	return 0;
}

