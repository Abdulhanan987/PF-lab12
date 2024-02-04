#include<iostream>
using namespace std;
void printSum(int arr[][3],int rowsize);
main(){
    
      cout<<"Enter row size: ";
      int rowsize;
      cin>>rowsize;
     int arr[rowsize][3];
     cout<<"Enter the elements of the matrix: "<<endl;
     for(int x=0;x<rowsize;x++)
{
    for(int y=0;y<3;y++)
    {
        cout<<"Enter element at position ["<<x<<"]["<<y<<"]: ";
        cin>>arr[x][y];
    }
}
    printSum(arr,rowsize);
}
void printSum(int arr[][3],int rowsize)
{     int sum=0;
    for(int x=0;x<rowsize;x++)
    {
        for(int y=0;y<3;y++)
        {
             sum =sum+arr[x][y];
        }
    }
    cout<<"The sum of elements in the matrix is: "<<sum;
}