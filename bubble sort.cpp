#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j ,temp;
    cin >> n ;

    int arr[n];

    for(i=0;i<n;i++)
        cin >> arr[i] ;

    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j] = temp ;
        }
    }
     for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
        return 0;
}
