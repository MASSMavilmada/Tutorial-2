#include <iostream>

using namespace std;

int main()
{
    int no;
    long fac;

    cout << "Enter number : ";
    cin >> no;

    fac = 1;
    for(int r=no; r>=1; r--)
    {
        fac = fac * r;
    }

    cout << "\nFactorial of " << no << " is " << fac << endl;  

    return 0;
}
