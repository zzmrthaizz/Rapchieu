#ifndef RAPTHUONG_H
#define RAPTHUONG_H
#include <iostream>

class RapThuong
{
    private:
        int Hang;
        int Day;
        int count =0;
    public:
        RapThuong ();
        RapThuong (int n_Hang, int n_Day);
        RapThuong (const RapThuong &p);
        void DatVe(int Hang, int Day);
        void XuatHienTrang(int m_Hang, int m_Day);
        void XuatTongTrong();
        void TinhTien();
};

#endif // RAPTHUONG_H
