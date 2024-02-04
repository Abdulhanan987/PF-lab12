#include<iostream>
using namespace std;
void printmatrix(int arr[][3]);
main()
{
    cout<<"Enter the elements of the matrix: "<<endl;
    int rowsize = 3;
    int colsize=3;
    int arr[3][3];
    for(int x=0;x<rowsize;x++)
    {
        for(int y=0;y<colsize;y++)
        {
            cout<<"Enter element at position ["<<x<<"]["<<y<<"]: ";
        cin>>arr[x][y];
        }
    }
    printmatrix(arr);
    if(arr[0][0]==1&&arr[1][1]==1&&arr[2][2]&&(arr[0][1]==0&&arr[0][2]==0&&arr[1][0]==0&&arr[1][2]==0&&arr[2][1]==0&&arr[2][0]==0))
    {
        cout<<"The entered matrix is an identity matrix.";
    }
    else
    {
        cout<<"The entered matrix is NOT an identity matrix.";
    }
}
void printmatrix(int arr[][3])
{     cout<<"The matrix you entered is: "<<endl;
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            cout<<arr[x][y]<<"\t";
        }
        cout<<endl;
    }
}
