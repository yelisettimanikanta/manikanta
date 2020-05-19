#include<iostream>
#include<stdlib.h>
using namespace std;

class Matrix
{
	public:
	int iR,iC,iRow,iColumn;
	char matrix[20][20],outputmatrix[20][20];
	int i;
int** MatAalloc(int iRow, int col)
{
	int** p=new int* [iRow];
	for ( int i = 0; i <iRow; i++)
	p[i] = new int[col];
	return p;
}
void MatRelease(int** p, int iRow)
{
	delete p[i];
	delete p;
}

void MatRead(char **a,int iRow, int iColumn)
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


void MatShow(char **a,int iRow, int iColumn)
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

void output(char **b,int iRow, int iColumn)
{
	cout<<"output matrix with *";
	//int iRow,col;
    //std::cout<<"Enter iRow size same as input matrix:";
	//std::cin>>iiRow;
	//std::cout<<"Enter column size same as input matrix:";
	//std::cin>>iColumn;
    for(iR=0;iR<iRow;iR++)
    {
        for (iC= 0;iC<iColumn;iC++)
        {
            //std::cout << "Enter element b" << iR + 0 << iC + 0 << " : ";
            //std::cin >>matrix[iR][iC];
            //cout<<"*"<<"\t";
            //cout<<"enter * as element:";
            outputmatrix[iR][iC]='*';
            //cin>>outputmatrix[iR][iC]='*';
        }
        //cout<<"\n";
    }
    
	for (iR = 0;  iR<iRow; iR++)
    {
       std::cout<<std::endl;
        for (iC= 0;iC<iColumn;iC++)
        {
        std::cout <<outputmatrix[iR][iC]<<"  ";
        }
    std::cout<<"\n";    
    }


}


void encode(char **b,int iRow,int iColumn)
{  
	cout<<"Rowise matric:\n";
	for(iR=0;iR<iRow;iR++)
	{
		
		for(iC=0;iC<iColumn;iC++)
		{
			int l=0;
			if(iC==0)
			{
				outputmatrix[iR][l]=matrix[iR][iC];
				cout<<outputmatrix[iR][l]<<"\t";
				
			}
			else
			{
				while(matrix[iR][iC]!=matrix[iR][iC-1])
			
					outputmatrix[iR][l]=matrix[iR][iC];
				
				
				cout<<outputmatrix[iR][iC]<<"\t";	
			}
			l++;
			cout<<" ";
		}
		cout<<"\n";
	}
}


};

int main()
{
	Matrix mat;
	char **a,**b;
	int m,n,p,q,l;
	mat.MatAalloc(m,n);
	std::cout<<"iRow:";
	std::cin>>m;
	std::cout<<"column:";
	std::cin>>n;
	mat.MatRead(a,m,n);
	mat.MatShow(a,m,n);
	mat.MatAalloc(p,q);
	mat.output(b,m,n);
	mat.encode(b,m,n);

//	mat.encode_matrix(b,p,q);
	//mat.iRowwise(b,p,q);
	//std::cout<<"notworl";
	//mat.MatShow(b,p,q);
/*	a=MatAlloc(m,n);
	MatRead(a,m,n);
	MatShow(a,m,n);
	b=MatAlloc(p,q);
	MatShow(p,q);
	*/
	
return 0;
}

