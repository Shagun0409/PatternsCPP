#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i=1;
    
    
    while(i<=n){
        int j=1;
        int count=i;
        while(j<=i){
            cout<<count;
            j=j+1;
           count=count+1;
          

        }
        cout<<endl;
        i=i+1;
    }

    
}