#include <iostream>
using namespace std;

void matrixAddition(int m1[][10], int m2[][10], int r, int c)
{
  int add[r][c];
  for(int i = 0; i < r; i++)
  {
    for(int j = 0; j < c; j++)
      add[i][j] = m1[i][j] + m2[i][j];     	
  }
  
  printf("Matrix after adding the values of the two matrices:- ");
  for(int i = 0; i < r; i++)
  {
    for(int j = 0; j < c; j++)
	  cout << add[i][j] << " " << endl;  	
  }		
}

void matrixSubstraction(int m1[][10], int m2[][10], int r, int c)
{
  int sub[r][c];
  for(int i = 0; i < r; i++)
  {
    for(int j = 0; j < c; j++)
      sub[i][j] = m1[i][j] - m2[i][j];     	
  }
  
  printf("Matrix after substracting the values of the two matrices:- ");
  for(int i = 0; i < r; i++)
  {
    for(int j = 0; j < c; j++)
	  cout << sub[i][j] << " " << endl;  	
  }	
}

void matrixMultiplciation(int m1[][10], int m2[][10], int r, int c)
{
  int multi[r][c];
  for(int i = 0; i < r; i++)
  {
    for(int j = 0; j < c; j++)
	{
	  for(int k = 0; k < c; k++)
	    multi[i][j] = multi[i][j] + m1[i][j] * m2[i][j];	
	}	
  }
  
  printf("Matrix after multiplicating the values of the two matrices:- ");
  for(int i = 0; i < r; i++)
  {
    for(int j = 0; j < c; j++)
	  cout << multi[i][j] << " " << endl;	
  }
}

void matrixTranspose(int m1[][10], int m2[][10], int r, int c)
{
  printf("Matrix after transposing the values of the 1st matrix:- ");	
  for(int i = 0; i < c; i++)
  {
    for(int j = 0; j < r; j++)
	  cout << m1[i][j] << " " << endl;	
  }
  
  printf("Matrix after transpoing the values of the 2nd matrix:- ");	
  for(int i = 0; i < c; i++)
  {
    for(int j = 0; j < r; j++)
	  cout << m2[i][j] << " " << endl;	
  }	
}

int main()
{
  int row1, row2, col1, col2, chc;
 
  cout << "Enter the number of rows for the 1st matrix:- " << endl;
  cin >> row1;
  cout << "Enter the number of rows for the 2nd matrix:- " << endl;
  cin >> row2;
  cout << "Enter the number of columns for the 1st matrix:- " << endl;
  cin >> col1;
  cout << "Enter the number of columns for the 2nd matrix:- " << endl;
  cin >> col2;
  
  int matrix1[row1][col1], matrix1[row2][col2];
  
  if((row1 != row2 || col1 != col2 || col1 > 10 || col2 > 10)
    printf("Dimesions of the matrix are either not same or invalid");
  else
  {
    printf("Enter elements in the 1st martix:- ");
    for(int i = 0; i < row1; i++)
    {
      for(int j = 0; j < col1; j++)
	    cin >> matrix1[i][j];	
	}
	
	printf("Enter elements in the 2nd martix:- ");
    for(int i = 0; i < row2; i++)
    {
      for(int j = 0; j < col2; j++)
	    cin >> matrix2[i][j];	
	} 
  
    cout << "-----MENU-----" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Substraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Transpose" << endl;
    cout << "Enter your choice:- " << endl;
    cin >> chc;
  
    switch(chc)
    {
      case 1: 
	          matrixAddition(matrix1, matrix2, row1, col1);
	          break;          
	  case 2: 
	          matrixSubstraction(matrix1, matrix2, row1, col1);
	          break;         
      case 3:
	          matrixMultiplication(matrix1, matrix2, row1, col1);
	          break;
	  case 4: 
	          matrixTranspose(matrix1, matrix2, row1, col1);
	          break;
	  default:
	          cout >> "Invalid Choice" >> endl;        
    }
 }
 
 return 0;
}
