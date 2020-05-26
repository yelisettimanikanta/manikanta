#include<iostream>
#include<stdlib.h>
using namespace std;

class Matrix
{
	private:
		int iR,iC,iRow,iColumn,**p;
		char matrix[20][20],outputmatrix[20][20];
		int i;
		
	public:
Matrix()
{
	p=new int* [iRow];
	for ( int i = 0; i <iRow; i++)
	p[i] = new int[iColumn];
	
}
~Matrix(){
	delete p[i];
	delete p;
}

	//int** MatAalloc(int,int);  //dynamically allocate memory
//	void MatRelease(int**,int); //deleteing the allocated memory once program is executed
	void MatRead(char**,int,int); //reading the matrix
	void MatShow(char**,int,int); //dispalying the matrix
	void output(char**,int,int);  //out[ut matrix with * as elements
	void encode(char**,int,int); //gives the required row manipulations
	void rowwise(char**,int,int);

};

int main()
{
	Matrix mat;
	char **a,**b,**c;
	int m,n;
	//mat.MatAalloc(m,n);
	std::cout<<"iRow:";
	std::cin>>m;
	std::cout<<"column:";
	std::cin>>n;
	mat.MatRead(a,m,n);
	mat.MatShow(a,m,n);
//	mat.MatAalloc(m,n);
	mat.output(b,m,n);
	mat.encode(c,m,n);
//	mat.rowwise(c,m,n);

return 0;
}

/*
Function Name:MatAlloc
Return type:int**
Parameters:Two dimensional array,number of rows and columns.
Author Name:Manikanta

int** matrix::MatAalloc(int iRow, int iColumn)
{
	int** p=new int* [iRow];
	for ( int i = 0; i <iRow; i++)
	p[i] = new int[iColumn];
	return p;
}
/*
Function Name:MatRelease
Return type:void
Parameters:Two dimensional array,number of rows.
Author Name:Manikanta

void matrix::MatRelease(int** p, int iRow)
{
	delete p[i];
	delete p;
}
*/
/*
Function Name:MatRead
Return type:void
Parameters:Two dimensional array,number of rows and columns.
Author Name:Manikanta
*/
void Matrix::MatRead(char **a,int iRow, int iColumn)
{

    
    for(iR=0;iR<iRow;iR++)
    {
        for (iC= 0;iC<iColumn;iC++)
        {
            std::cout << "Enter element a" << iR + 0 << iC + 0 << " : ";
            std::cin >>matrix[iR][iC];
        }
    }
	
}

/*
Function Name:MatShow
Return type:void
Parameters:Two dimensional array,number of rows and columns.
Author Name:Manikanta
*/
void Matrix::MatShow(char **a,int iRow, int iColumn)
{
  cout<<"Input matrix:";
    for (iR = 0;  iR<iRow; iR++)
    {
       std::cout<<std::endl;
        for (iC= 0;iC<iColumn;iC++)
        {
        std::cout << matrix[iR][iC]<<"  ";
        }
    std::cout<<"\n";    
    }
}

/*
Function Name:output
Return type:void
Parameters:Two dimensional array,number of rows and columns.
Author Name:Manikanta

*/
void Matrix::output(char **b,int iRow, int iColumn)
{
	cout<<"output matrix with *";
    for(iR=0;iR<iRow;iR++)
    {
        for (iC= 0;iC<iColumn;iC++)
        {
			outputmatrix[iR][iC]='*';
        }
    
    }
    
	for(iR=0;iR<iRow;iR++)
    {
    	std::cout<<std::endl;
        for(iC=0;iC<iColumn;iC++)
        {
        std::cout<<outputmatrix[iR][iC]<<" ";
        }
    	std::cout<<"\n";    
    }


}


/*
Function Name:encode
Return type:void
Parameters:Two dimensional array,number of rows and columns.
Author Name:Manikanta
*/

void Matrix::encode(char **b,int iRow,int iColumn)
{  
	cout<<"Rowise matrix:\n";
	for(iR=0;iR<iRow;iR++)
	{
		int l=0;
		for(iC=0;iC<iColumn;iC++)
		{
			
			if(iC==0)
			{
				outputmatrix[iR][l]=matrix[iR][iC];
				cout<<outputmatrix[iR][l]<<"\t";
				l++;
				
			}
			else
			{
				if(matrix[iR][iC]!=matrix[iR][iC-1])
				{
					outputmatrix[iR][l]=matrix[iR][iC];
				
				cout<<outputmatrix[iR][iC]<<"\t";
				l++;
				}	
			}
			
			cout<<" ";
		}
		cout<<"\n";
	}
	
}
	
/*
////logic 2

void matrix::encode(char **b,int iRow,int iColumn)
{


	for(iR=0;iR<iRow;iR++){
		for(iC=0;iC<iColumn;i++){
			outputmatrix[iR][iC]=matrix[iR][iC];
		}
	}
	for(iR=0;iR<iRow;iR++){
		for(iC=0;iC<iColumn;i++){
			int l=iC+1;
			if(outputmatrix[iR][iC]==outputmatrix[iR][iC+1])
			{
				while(l<iR-1)
				{
					outputmatrix[iR][iC]=outputmatrix[iC][l];
					outputmatrix[iR][iC-1]='*';
				}
				while(l=iColumn)
				{
					outputmatrix[iR][iColumn]=outputmatrix[iR][iColumn-1];
				}
				l++;
			}
		}
	}
}
	
*/	
	
	
/*

/////logic 3

void matrix::encode(char **b,int iRow,int iColumn)
{
	for(iR=0;iR<iRow;iR++)
	{
		for(iC=0;iC<iColumn;iC++)
		{
			if(matrix[iR][iC]==matrix[iR][iC+1])
			{
				outputmatrix[iR][iC]=matrix[iR][iC] ;
				outputmatrix[iR][iC+1]='*';
		
			}
			if(matrix[iR][iC]!=matrix[iR][iC+1])
			{
				outputmatrix[iR][iC]=matrix[iR][iC] ;
				outputmatrix[iR][iC+1]=matrix[iR][iC+1];
			}
			if(outputmatrix[iR][iC]=='*')
			{
				if(matrix[iR][iC-1]==matrix[iR][iC+1])
				{
					outputmatrix[iR][iC+1] ='*';
				}
				else
				{
					outputmatrix[iR][iC+1]=matrix[iR][iR+1] ;
				}
			}
			std::cout<<outputmatrix[iR][iC];
		//	MatShow(a,iR,iC);
		}
		
	}

	
//	rowwise(c,row,col);
}
void matrix::rowwise(char **c,int row,int col)
{
	int q;
//	cout<<"rowwise matrix:\n";

	
	for(q=0;q<2;q++)
	{
		for(iR=0;iR<iRow;iR++)
  		{
    		for(iC=0;iC<iColumn;iC++)
      		{
         		if((outputmatrix[iR][iC]=='*')&&(outputmatrix[i][iC+2]=='*'))
        		{
           			if(outputmatrix[iR][iC+1]= '*')
            		{
               			outputmatrix[iR][iC]=outputmatrix[i][iC+2] ;
               			outputmatrix[iR][iC+1]= '*' ;
                		outputmatrix[iR][iC+2]= '*' ;
              		}
					 if(outputmatrix[iR][iC+1]==1||0)
 					{
   						outputmatrix[iR][iC]= outputmatrix[i][iC+1] ;
   						outputmatrix[iR][iC+1]='*' ;
   						outputmatrix[iR][iC+2]='*' ;
					}
				}
				cout<<outputmatrix[iR][iC];			 
			}
		}		
	}
}
*/







