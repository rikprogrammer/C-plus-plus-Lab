#include <iostream>
using namespace std;

void matrixAddition(int m1[][10], int m2[][10], int r, int c)
{
    int add[10][10];

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            add[i][j] = m1[i][j] + m2[i][j];
    }

    cout << "Matrix after adding the values of the two matrices:- " << endl;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            cout << add[i][j] << " ";

        cout << endl;
    }
}


void matrixSubstraction(int m1[][10], int m2[][10], int r, int c)
{
    int sub[10][10];

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            sub[i][j] = m1[i][j] - m2[i][j];
    }

    cout << "Matrix after subtracting the values of the two matrices:- " << endl;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            cout << sub[i][j] << " ";

        cout << endl;
    }
}


void matrixMultiplication(int m1[][10], int m2[][10], int r1, int c1, int r2, int c2)
{
    int multi[10][10];

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            multi[i][j] = 0;

            for(int k = 0; k < c1; k++)
                multi[i][j] = multi[i][j] + m1[i][k] * m2[k][j];
        }
    }

    cout << "Matrix after multiplying the two matrices:- " << endl;

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
            cout << multi[i][j] << " ";

        cout << endl;
    }
}


void matrixTranspose(int m1[][10], int m2[][10], int r, int c)
{
    cout << "Matrix after transposing the values of the 1st matrix:- " << endl;

    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
            cout << m1[j][i] << " ";

        cout << endl;
    }

    cout << "Matrix after transposing the values of the 2nd matrix:- " << endl;

    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
            cout << m2[j][i] << " ";

        cout << endl;
    }
}


int main()
{
    int row1, row2, col1, col2, chc;

    cout << "Enter the number of rows for the 1st matrix:- ";
    cin >> row1;

    cout << "Enter the number of rows for the 2nd matrix:- ";
    cin >> row2;

    cout << "Enter the number of columns for the 1st matrix:- ";
    cin >> col1;

    cout << "Enter the number of columns for the 2nd matrix:- ";
    cin >> col2;

    if(col1 > 10 || col2 > 10)
       cout << "Number of columns cannot be more than 10." << endl;
    else if(row1 != col1 || row2 != col2)
       cout << "Number of rows and columns must be equal for both matrices." << endl;
   else
    {
        int matrix1[10][10], matrix2[10][10];

        cout << "Enter elements in the 1st matrix:- " << endl;
        for(int i = 0; i < row1; i++)
        {
            for(int j = 0; j < col1; j++)
                cin >> matrix1[i][j];
        }


        cout << "Enter elements in the 2nd matrix:- " << endl;
        for(int i = 0; i < row2; i++)
        {
            for(int j = 0; j < col2; j++)
                cin >> matrix2[i][j];
        }


        cout << "-----MENU-----" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Transpose" << endl;
        cout << "Enter your choice:- " << endl;
        cin >> chc;


        switch(chc)
        {
            case 1:
                if(row1 == row2 && col1 == col2)
                  matrixAddition(matrix1, matrix2, row1, col1);
                else
                  cout << "Addition is not possible. Dimensions of both matrices must be same." << endl;
                  
                break;

            case 2:
                if(row1 == row2 && col1 == col2)
                  matrixSubstraction(matrix1, matrix2, row1, col1);
                else
                  cout << "Subtraction is not possible. Dimensions of both matrices must be same." << endl;
                
                break;

            case 3:
                if(col1 == row2)
                  matrixMultiplication(matrix1, matrix2, row1, col1, row2, col2);
                else
                  cout << "Multiplication is not possible. Columns of the 1st matrix must be equal to rows of the 2nd matrix." << endl;
                  
                break;

            case 4:
                matrixTranspose(matrix1, matrix2, row1, col1);
                break;

            default:
                cout << "Invalid Choice" << endl;
        }
    }

    return 0;
}
