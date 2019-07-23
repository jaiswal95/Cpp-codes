//Author: Pankaj jaiswal
//Date: 23th july 2019
/*
Smallest and Largest number of the array
5
1 0 4 5 8
Largest 8
Smallest 0
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int largest = a[0];
    int smallest = a[0];

    for(int i=0;i<n;i++)
    {
        if(a[i]>largest)
            largest = a[i];
        if(a[i]<smallest)
            smallest = a[i];
    }
    cout << "Largest "<<largest<<"\nSmallest "<<smallest<<"\n";
    return 0;
}			