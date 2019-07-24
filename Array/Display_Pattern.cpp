//Author: Pankaj jaiswal
//Date: 24th july 2019
/*
Enter size of row and column: 3 3
Enter elements of matrices(row wise)
5 6 2 1 4 2 4 8 6
Displaying matrix
5  6  2
1  4  2
4  8  6
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int arr[10][10],row,col,i,j;
    cout<<"Enter size of row and column: ";
    cin>>row>>col;
    cout<<"Enter elements of matrices(row wise)"<<endl;
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            cin>>arr[i][j];
    cout<<"Displaying matrix"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            cout<<arr[i][j]<<"  ";
        cout<<endl;
    }
    
    return 0;
}