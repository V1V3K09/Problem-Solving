#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t ;
    cin >> t ;
    while (t--)
    {
        int l,n;
        cin >> l >> n;
        int arr[l];
        for (int i = 0; i < l; i++)
        {
            cin>>arr[i];
        }
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else 
        cout<<"-1"<<endl;
        
    }
}
bool findPair(int arr[], int size, int n){
    //code
        int l,h;
        sort(arr,arr+size);
        for(int i=0;i<size-1;i++)
        {
            l=i+1;
            h=size-1;
            while(l<=h)
            {
                int mid = (l+h)/2;
                if(arr[mid]-arr[i]==n)
                {
                    return true;
                }
                else if(arr[mid]-arr[i]<n)
                {
                    l=mid+1;
                }
                else
                {
                    h=mid-1;
                }
            }
        }
        return false;
    
}