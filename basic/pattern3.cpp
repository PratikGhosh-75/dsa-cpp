#include <iostream>
using namespace std;
int main()
    {
        int n;
        cin >> n;
        for (int i=0; i<n; i++)
        {
            if (i==0)
            {
                for (int j=0; j<n; j++)
                    cout << j+1 << " ";
            }
            else
            {
                cout << i+1 << " ";
                for (int k=0; k<n-i-2; k++)
                    cout << "  ";
                if (i!=n-1)
                    cout << n << " ";
            
            }
            cout << endl;
        }
    }