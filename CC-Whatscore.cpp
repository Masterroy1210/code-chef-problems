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
        int s[101]={0};
        for(int i=0;i<n;i++)
        {
            int s1,p1;
            cin>>p1>>s1;
            if(s1>s[p1]&&p1<9)
                s[p1]=s1;
        }
        int sum=0;
        for(int i=1;i<9;i++)
            sum=sum+s[i];
            cout<<sum<<endl;


    }
    return 0;
}