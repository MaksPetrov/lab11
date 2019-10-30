#include <iostream>

using namespace std;

int main()
{
    int k = 0;
    float p, s = 1000;
    cin >> p;
    while(s<=1100)
    {
        s *= 1+(p/100);
        k += 1;
    }
    cout << k << endl << s;
}
