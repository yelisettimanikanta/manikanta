#include<iostream>
#include<stdlib.h>

class Matrix{

int i;
public:
int* MatAalloc(int row, int col)
{
	int** p=new int* [row];
//	p=new int *[row];
	for ( int i = 0; i < row; i++)
		p[i] = new int[col];
	//return p;
}
void MatRelease(int** p, int row)
{
	delete p[i];
	delete p;
}
void MatRead(int** a, int row, int col)
{
	int i, j;
	for(i=0;i<row;i++)
	{
		for (j= 0;j <col;j++)
		{
			std::cout << "Matrix[" << i << "," << j << "]=";
			std::cin >> a[i][j];
		}
	}
}

void MatShow(int** a, int row, int col)
{
	int i, j;
	for (i = 0;  i < row; i++)
	{
	//33	std::cout<<std::endl;
		for (j = 0; j < col; j++)
		{
				std::cout << a[i][j]<<"\n";
		}
		
	}
}

};
int main()
{
	Matrix mat;
	int **a,m,n;
	std::cout<<"row:";
	std::cin>>m;
	std::cout<<"column:";
	std::cin>>n;
	mat.MatAalloc(m,n);
	mat.MatRead(a,m,n);
	mat.MatShow(a,m,n);
	mat.MatRelease(a,m);

return 0;
}

