#include <iostream>
using namespace std;
int main()
{
    char ch;
    int n;
    cin >> n;
int count;
    int i = 1;
    while (i <= n)
    {
        int j=1;
        while(j<=i){
            count=0;
            ch='A'+n-i-j+1;//formula
            cout<<ch;
            j++;
            ch++;

        }
        cout<<endl;
        i++;
    }
}