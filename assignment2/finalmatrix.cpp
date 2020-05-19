#include<iostream>
#include<stdlib.h>
using namespace std;

class Matrix
{
	public:
		int iR,iC,iRow,iColumn;
		char matrix[20][20],outputmatrix[20][20];
		int i;
int** MatAalloc(int row, int col)
{
	int** p=new int* [row];
	for ( int i = 0; i < row; i++)
	p[i] = new int[col];
	return p;
}
void MatRelease(int** p, int row)
{
	delete p[i];
	delete p;
}

void MatRead(char **a,int row, int col)
{

    std::cout<<"row:";
	std::cin>>iRow;
	std::cout<<"column:";
	std::cin>>iColumn;
    for(iR=0;iR<iRow;iR++)
    {
        for (iC= 0;iC<iColumn;iC++)
        {
            std::cout << "Enter element a" << iR + 0 << iC + 0 << " : ";
            std::cin >>matrix[iR][iC];
        }
    }
	
}


void MatShow( char **a,int row, int col)
{
  
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

void output(char **b,int OutRow, int OutColumn)
{
	int row,col;
    std::cout<<"Enter row size same as input matrix:";
	std::cin>>iRow;
	std::cout<<"Enter column size same as input matrix:";
	std::cin>>iColumn;
    for(iR=0;iR<iRow;iR++)
    {
        for (iC= 0;iC<iColumn;iC++)
        {
            //std::cout << "Enter element b" << iR + 0 << iC + 0 << " : ";
            //std::cin >>matrix[iR][iC];
            //cout<<"*"<<"\t";
            cout<<"enter * as element:";
            cin>>outputmatrix[iR][iC];
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
	cout<<"hello";
	for(iR=0;iR<iRow;iR++)
	{
		cout<<"working";
		for(iC=0;iC<iColumn;iC++)
		{
			int l=0;
			if(iC==0)
			{
				outputmatrix[iR][l]=matrix[iR][iC];
				cout<<outputmatrix[iR][l];
			}
			else
			{
				while(matrix[iR][iC]!=matrix[iR][iC-1])
				outputmatrix[iR][l]=matrix[iR][iC];
				cout<<outputmatrix[iR][l];	
			}
			l++;
		}
		//cout<<"working";
	}
}


};

int main()
{
	Matrix mat;
	char **a,**b;
	int m,n,p,q,l;
	mat.MatAalloc(m,n);
	mat.MatRead(a,m,n);
	mat.MatShow(a,m,n);
	mat.MatAalloc(p,q);
	mat.output(b,p,q);
	mat.encode(b,p,l);

//	mat.encode_matrix(b,p,q);
	//mat.rowwise(b,p,q);
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

