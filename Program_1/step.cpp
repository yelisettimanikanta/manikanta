#include<string.h>   
#include<iostream>
using namespace std;
class Stepcount
{
    private:
    int lengthOfArray,arr[100];
    public:
bool jumpStp(int arr[100],int lengthOfArray)  //function to find the steps to move through the array
{        
    int step = arr[0];  //assigning the step varibale to index of array
	for (int i = 1; i < lengthOfArray; i++) 
      {
            if (step == 0)
            { 
               return false;
            }
            else if(step!=0)
            {
            step = max(--step, arr[i]);
            }
            else 
            return true;
       }
       

}
};

int main(int argc,char* argv[])
{
  
    if(argc==2)
    {
        if(argc == 2 && strcmp(argv[1], "-h")==0)      //help command
        {
	    cout<<"usage:finds if we can move to the end of array"<<endl;
        }
    }
	else
    {        
    Stepcount st;
     
    int i,lengthOfArray,*arr;
    
    cout<<"Enter no.of elements"<<endl;
    cin>>lengthOfArray;
    arr=new int[lengthOfArray];    //dynamic memory allocation
   
     cout<<"Input "<<lengthOfArray<<" elements"<<endl; //reading of elements
    for(int i=0;i<lengthOfArray;i++)
    {
        cout<<"Input element "<<i+1<<": ";
        cin>>arr[i];
    }
    
    cout<<"Entered elements are: ";
    for(int i=0;i<lengthOfArray;i++)
    {
        cout<<arr[i]<<" ";     // printing the elements
    }
    cout<<endl;    
 
     bool result=st.jumpStp(arr,lengthOfArray);
   if(result)
    {
        cout<<"True, we can reach till the end of the array"<<endl;
    }
    else
    {
        cout<<"False, we cannot reach till the end of the array"<<endl;
    }
    
    delete[] arr;   // deallocating memory
    return 0;
}
}









