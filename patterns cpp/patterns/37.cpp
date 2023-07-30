#include<iostream>
using namespace std;
int main(){

int n;

cin>>n;

 int i=1;
    while(i<n)
    {   int count=1;
       int j=1;
       while(j<=i)
       {
        
        cout<<count;
        count++;
        j++;

       }


       int space=i+1;
       while(space<n){
        cout<<"r";
        space++;
       }

    space=1;
       while(space<=n-i-1){
        cout<<"r";
        space++;
       }
        j=i;
        count=1;
      while(j>=i){
        cout<<count;
        count++;
        j--;
      }

       cout<<endl;
       i++;
    }

}