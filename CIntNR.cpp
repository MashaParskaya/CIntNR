#include "CIntNR.hpp"

void CIntNR::set_coords(int crd[len])
    {
        for (int i = 0; i < len; i++){
            coord[i] = crd[i] % N;
            if (coord[i] < 0)
                coord[i] = coord[i] + N;
        }
    }
    void CIntNR::set_module(int m)
    {
        N = m;
    }
    CIntNR::CIntNR(int crd[len], int m)
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

