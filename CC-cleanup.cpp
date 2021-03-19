#include<iostream>
using namespace std;


int main()
{   
    int n,m,t,k;
    cin>>t;
    while(t--)
    {
        int arr[1003]={0},arr1[1003];
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
                cin>>k;
                arr[k]=1;

        }

        k=0;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==0)
                arr1[k++]=i;
        
     }

            for(int j=0;j<n-m;j=j+2)
            {
                cout<<arr1[j]<<" ";
            }
           cout<<endl;
           for(int i=1;i<n-m;i=i+2)
            cout<<arr1[i]<<" ";
            cout<<endl;
    }




    return 0;
}