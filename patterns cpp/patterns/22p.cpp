#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while(i<=n){


        //space print karlo
        int space =i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
    
    
    int count;
    int j=n-i+1;
    while(j<=n){
      
        cout<<j;
        j=j-1;
        
    }
    //count=count+1;
    cout<<endl;
    i=i+1;
    }
}