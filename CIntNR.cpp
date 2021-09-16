#include "CIntNR.hpp"

void CIntNR::set_coords(int* crd)
{
    if (crd != NULL)
    {
        for (int i = 0; i < len; i++)
        {
            coord[i] = crd[i] % N;
            if (coord[i] < 0)
                coord[i] = coord[i] + N;
        }
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            coord[i] = 0;
        }
    }
}

void CIntNR::set_module(int m)
{
    if (m != 0)
    {
        N = m;
    }
    else
    {
        cout << "Module error: zero module\n";
        N = 1;
    }
}

CIntNR::CIntNR(int* crd, int m)
{
    set_module(m);
    set_coords(crd);
}

CIntNR::CIntNR()
{
    int tmp[len];
    for (int i = 0; i < len; i++)
        tmp[i] = 0;
    set_module(1);
    set_coords(tmp);
}

void CIntNR::print_num()
{
    for (int i = 0; i < len; i++)
        cout << coord[i] << " ";
    cout << "by module " << N << "\n";
}

int* CIntNR::get_coords()
{
    static int r[len];
    for (int i = 0; i < len; i++){
      r[i] = coord[i];
    }
    return r;
}
