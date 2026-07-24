#include <iostream>
using namespace std;
int main()
{
    cout <<endl << "1. " << endl << endl;
    for (int i=1; i<=5; i++)
    {
        for (int j=1; j<=5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl << "2. " << endl << endl;
    for (int i=1; i<=5; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << endl << "3. " << endl << endl;
    for (int i=1; i<=5; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    cout << endl << "4. " << endl << endl;
    for (int i=1; i<=5; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
    cout << endl << "5. " << endl << endl;
    int a=1;
    for (int i=1; i<=4; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << a++;
        }
        cout << endl;
    }
    
    cout << endl << "6. " << endl << endl;
    for (int i=1; i<=5; i++)
    {
        for (int j=5; j>=i; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    cout << endl << "7. " << endl << endl;
    for (int i=1; i<=5; i++)
    {
        for (int j=5; j>=i; j--)
        {
            cout << i;
        }
        cout << endl;
    }

    cout << endl << "8. " << endl << endl;
    for (int i=1; i<=5; i++)
    {
        for (int j=5; j>=i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << "9. " << endl << endl;
    for (int i=0; i<=4; i++)
    {
        for (int k=3; k>=i; k--)
        {
            cout << " ";
        }
        for (int j=1; j<=2*i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    cout << endl << "10. " << endl << endl;
    int b=4;
    for (int i=0; i<=4; i++)
    {
        for (int k=0; k<i; k++)
        {
            cout << " ";
        }
        for (int j=2*b+1; j>=1; j--)
        {
            cout << "*";
        }
        cout << endl;
        b--;
    }

    cout << endl << "11. " << endl << endl;
    for (int i=0; i<=4; i++)
    {
        for (int k=3; k>=i; k--)
        {
            cout << " ";
        }
        for (int j=1; j<=2*i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    int c=3;
    for (int i=0; i<=4; i++)
    {
        for (int k=0; k<=i; k++)
        {
            cout << " ";
        }
        for (int j=2*c+1; j>=1; j--)
        {
            cout << "*";
        }
        cout << endl;
        c--;
    }
    
    cout << endl << "12. " << endl << endl;
    for (int i=0; i<=5; i++)
    {
        for (int j=0; j<=5; j++)
        {
            if (i==0 || i==5)
            {
                cout << "*";
            }
            else
            {
                if (j==0 || j==5)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    cout << endl << "13. " << endl << endl;
    for (int i=0; i<5; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if (j==i || j==0 || i==4)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    cout << endl << "14. " << endl << endl;
    for (int i=0; i<5; i++)
    {
        for (int j=4; j>=i; j--)
        {
            if (j==4 || i==0 || j==i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    cout << endl << "15. " << endl << endl;
    for (int i=0; i<5; i++)
    {
        for (int k=3; k>=i; k--)
        {
            cout << "  ";
        }
        for (int j=0; j<=2*i+1; j++)
        {
            if (j%2==0)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    
    cout << endl << "16. " << endl << endl;
    for (int i=0; i<5; i++)
    {
        for (int k=3; k>=i; k--)
        {
            cout << "  ";
        }
        for (int j=1; j<=2*i+1; j++)
        {
            if (j==1 || j==2*i+1 || i==4)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}