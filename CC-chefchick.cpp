#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int min;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(min>a[i])
                {
                min=a[i];
                }
        }
        cout<<min<<endl;
    }
    return 0;
}