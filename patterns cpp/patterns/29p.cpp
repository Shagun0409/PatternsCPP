 #include<iostream>
using namespace std;
int main(){
int count=1;
int n;
cin>>n;

 int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<count<<" ";
            count++;
            j++;

         }
          i++;
        cout<<endl;
    }
    
    
    }