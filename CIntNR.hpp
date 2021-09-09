#ifndef CINTNR_HPP_INCLUDED
#define CINTNR_HPP_INCLUDED

#include "head.hpp"

class CIntNR{
private:
    int coord[len];
    int N;
public:
    void set_coords(int crd[len]);

    void set_module(int m);

    CIntNR(int crd[len], int m);

    CIntNR();

    void print_num();

    const CIntNR operator+(const CIntNR a)
    {
        if (a.N == N)
        {
            int tmp[len];
            for (int i = 0; i < len; i++)
                tmp[i] = (a.coord[i] + coord[i]) % a.N;
            CIntNR ans(tmp, a.N);
            return ans;

        }
        else{
            cout << "Module error\n";
            int tmp[len];
            for (int i = 0; i < len; i++)
                tmp[i] = 0;
            CIntNR ans(tmp, 1);
            return ans;
        }
    }

    const CIntNR operator- (const CIntNR a)
    {
        if (a.N == N)
        {
            int tmp[len];
            for (int i = 0; i < len; i++)
                tmp[i] = (coord[i] - a.coord[i]) % a.N;
            CIntNR ans(tmp, a.N);
            return ans;

        }
        else{
            cout << "Module error\n";
            int tmp[len];
            for (int i = 0; i < len; i++)
                tmp[i] = 0;
            CIntNR ans(tmp, 1);
            return ans;
        }
    }

    CIntNR operator= (const CIntNR &a)
    {
        for (int i = 0; i < len; i++)
            coord[i] = a.coord[i];
        N = a.N;
        return *this;
    }

};

#endif // CINTNR_HPP_INCLUDED
