#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;

 int i=0;
    while(i<n)
    {

          int space;
        space=0;
        while(space<=n-i-1)
        {
            cout<<" ";
            space=space+1;
        }

       int j=0;
        while(j<(2*i+1))
        {
            cout<<"*";
            j++;

        }
        space =0;
        while(space<=n-i-1)
        {
            cout<<" ";
            space=space+1;
            
        }
        cout<<endl;
        i++;

    }
    }