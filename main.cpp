#include "head.hpp"
#include "CIntNR.cpp"



int main()
{
    int a[len];
    int b[len];
    int mod;
    for (int i = 0; i < len; i++)
        cin >> a[i];
    for (int i = 0; i < len; i++)
        cin >> b[i];
    cin >> mod;
    CIntNR v1(a, mod);
    CIntNR v2(b, mod);
    v1.print_num();
    v2.print_num();
    CIntNR v3;
    v3 = v1 + v2;
    v3.print_num();
    CIntNR v4;
    v4 = v1 - v2;
    v4.print_num();
    return 0;
}
