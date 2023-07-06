#include <iostream>
using namespace std;
int main()
{
    char ch;
    int n;
    cin >> n;

    int i = 1;
    while (i < n)
    {
        // spaceeeee
        int space = 1;
        while (space < n - i + 1)
        {
            cout << "q";
            space++;
        }

        int j = i+1;
        while (j <=(2*n+1))
        {
            ch = 'A' + j - 1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
}