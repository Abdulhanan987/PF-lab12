#include<iostream>
using namespace std;
void printmatrix(int arr[][5],int rowsize);
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

}

void printmatrix(int arr[][5],int rowsize)
{     cout<<"Original Matrix: "<<endl;
    for(int x=0;x<rowsize;x++)
    {
        for(int y=0;y<5;y++)
        {
            cout<<arr[x][y]<<"\t";
        }
        cout<<endl;
    }
}
void returnlargest(int arr[][5],int rowsize)
{
         int largest =0;  int sum =0;
         for(int i=0;i<rowsize;i++)
         {   int sum =0;
            for(int j=0;j<5;j++)
            {
                
            }
         }
}
        