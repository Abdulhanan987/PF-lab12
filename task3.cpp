#include<iostream>
using namespace std;
string result(string arr[][5],string coordintes);
main ()
{
    cout<<"Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
    string coordinates;
    cin>>coordinates;
    string arr[5][5]={{".",".",".","*","*"},
                      {".","*",".",".","."},
                      {".","*",".",".","."},
                      {".","*",".",".","."},
                      {".","*","*",".","."}};
                      cout<<"Result: "<<result(arr,coordinates);
}
string result(string arr[][5],string coordintes)
{     int COORD; int COORDY;    string result ;
    if(coordintes[0]=='A')
    {
        COORD = 0;
    }
    else if (coordintes[0]=='B')
    {
        COORD=1;
    }
    else if (coordintes[0]=='C')
    {
        COORD=2;
    }
    else if (coordintes[0]=='D')
    {
        COORD=3;
    }
    else if (coordintes[0]=='E')
    {
        COORD=4;
    }
    if(coordintes[1]=='1')
    {
       COORDY=0;
    }
    else if (coordintes[1]=='2')
    {
        COORDY=1;
    }
    else if (coordintes[1]=='3')
    {
        COORDY=2;
    }
    else if (coordintes[1]=='4')
    {
        COORDY=3;
    }
    else if (coordintes[1]=='5')
    {
        COORDY=4;
    }
    if(arr[COORD][COORDY]==".")
    {
        result ="splash";
    }
    else if (arr[COORD][COORDY]=="*")
    {
        result = "BOOM";
    }
   return result;
}