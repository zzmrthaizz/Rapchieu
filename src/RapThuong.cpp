#include "RapThuong.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

// Ham dung
RapThuong::RapThuong()
{
    int Rap[2][2] = {0};
}

RapThuong::RapThuong(int n_Hang, int n_Day)
{
    int Hang= n_Hang;
    int Day = n_Day;
    int**Rap=new int*[Hang];
    for (int i=1; i<Day;i++)
    {
        int*Rap[i]=new int[Day];
    }
}
RapThuong::RapThuong(const RapThuong &p)
{
    int Hang = p.Hang;
    int Day =p.Day;
    int**Rap=new int*[Hang];
    for (int i=0; i<Day;i++)
    {
        int*Rap[i]=new int[Day];
    }
}
//Dat ve
void RapThuong::DatVe(int m_Hang, int m_Day)
{
    Rap[m_Hang][m_Day] = 1;
    int HangGiua = (Hang+1)/2;
    if (m_Hang = HangGiua)
    {
        int GiaVe = 50;
    }
    else {int GiaVe = 50-2*abs(m_Hang-HangGiua);}
}
//Hien trang
void RapThuong::XuatHienTrang(int m_Hang, int m_Day)
{
    if (Rap[m_Hang][m_Day]=0)
    {
        cout << "ghe trong";
    }
    else { cout << "da co nguoi";}
}
// so ghe con trong
void RapThuong::XuatTongTrong()
{
    for (int i=0; i<Hang; i++)
    {
        for (int j=0; i<Day; i++)
        {
            if (Rap[i][j]=0)
            {
                count = count+1;
            }

        }
    }
    cout << count;
}
