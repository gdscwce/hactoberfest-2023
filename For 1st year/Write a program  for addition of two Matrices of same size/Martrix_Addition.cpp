#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void getMat(int a[][100],int n)
{
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	
}
void print(int a[][100],int n)
{
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

void addMat(int a1[][100],int a2[][100],int ans[][100],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			ans[i][j]=a1[i][j]+a2[i][j];
		}
	}
}

int main()
{
	int size;
	cout<<"Enter the size of matrix :"<<endl;
	cin>>size;
	
	int mat1[size][100] , mat2[size][100],res[size][100];
	
	cout<<"Enter the matrix 1 row wise\n";
	getMat(mat1,size);

	cout<<"Enter the matrix 2 row wise\n";
	getMat(mat2,size);

	addMat(mat1,mat2,res,size);

	cout<<"\nMatrix 1 is\n\n";
	print(mat1,size);

	cout<<"Matrix 2 is \n\n";
	print(mat2,size);

	cout<<"Resultant Matrix is \n";
	print(res,size);
	
	
	return 0;
	
}
