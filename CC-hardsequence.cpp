#include<iostream>
using namespace std;


int main()
{
 int t,val,arr[129],visited[256];
 cin>>t;
 while(t--)
 {

     cin>>val;
     for(int i=0;i<256;i++)
     {
         visited[i]=0;
     }
     arr[1]=0;
     for(int i=2;i<129;i++)
     {
         if(visited[arr[i-1]]!=0)
            arr[i]=(i-1)-visited[arr[i-1]];
        else
            arr[i]=0;
        visited[arr[i-1]]==i-1;
     }
     int count =0;
     for(int i=1;i<=val;i++)
     {
         if(arr[val]==arr[i])
            count++;
     }
     cout<<count;

 }





    return 0;
}