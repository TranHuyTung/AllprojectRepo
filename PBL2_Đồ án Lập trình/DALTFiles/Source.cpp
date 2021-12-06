#include "LinkedList.h"
#include "Node.h"
#include <iostream>
using namespace std;
#include <conio.h>
#include <iomanip>


void menu1()
{
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 40; i++)
        cout << "*";
    cout << " ADMINISTRATOR MENU ";
    for (int i = 0; i <= 40; i++)
        cout << "*";
    cout << endl;
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 1.Tao Sach " << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Them Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Xoa Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Tim Kiem Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "5.Xem Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "6.Muon Tra Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "7.Sua Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "8.Luu Sach Vao File" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "9.Thoat" << endl;
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 101; i++)
        cout << "*";
    cout << endl;
}
void menu1_1()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 1.Tao danh Sach Rong" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Doc File" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Quay Lai" << endl;
}
void menu1_2()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Tao danh Sach Rong" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 2.Doc File" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Quay Lai" << endl;
}
void menu1_3()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Tao danh Sach Rong" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Doc File" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 3.Quay Lai" << endl;
}

void menu2()
{
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 40; i++)
        cout << "*";
    cout << " ADMINISTRATOR MENU ";
    for (int i = 0; i <= 40; i++)
        cout << "*";
    cout << endl;
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Tao Sach " << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 2.Them Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Xoa Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Tim Kiem Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "5.Xem Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "6.Muon Tra Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "7.Sua Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "8.Luu Sach Vao File" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "9.Thoat" << endl;
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 101; i++)
        cout << "*";
    cout << endl;
}
void menu2_1()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 1.Them Dau" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Them Vao vi tri" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Them Cuoi" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Quay Lai" << endl;
}
void menu2_2()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Them Dau" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 2.Them Vao vi tri" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Them Cuoi" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Quay Lai" << endl;
}
void menu2_3()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Them Dau" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Them Vao vi tri" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 3.Them Cuoi" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Quay Lai" << endl;
}
void menu2_4()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Them Dau" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Them Vao vi tri" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Them Cuoi" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 4.Quay Lai" << endl;
}

void menu3()
{
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 40; i++)
        cout << "*";
    cout << " ADMINISTRATOR MENU ";
    for (int i = 0; i <= 40; i++)
        cout << "*";
    cout << endl;
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Tao Sach " << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Them Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 3.Xoa Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Tim Kiem Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "5.Xem Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "6.Muon Tra Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "7.Sua Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "8.Luu Sach Vao File" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "9.Thoat" << endl;
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 101; i++)
        cout << "*";
    cout << endl;
}
void menu3_1()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 1.Ma So" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Ten Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Ten Tac Gia" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Xoa Dau " << endl;
    cout << "\t\t\t\t\t\t\t"
        << "5.Xoa Sau Ma So" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "6.Xoa Cuoi" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "7.Quay Lai" << endl;
}
void menu3_2()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Ma So" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 2.Ten Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Ten Tac Gia" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Xoa Dau " << endl;
    cout << "\t\t\t\t\t\t\t"
        << "5.Xoa Sau Ma So" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "6.Xoa Cuoi" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "7.Quay Lai" << endl;
}
void menu3_3()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Ma So" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Ten Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 3.Ten Tac Gia" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Xoa Dau " << endl;
    cout << "\t\t\t\t\t\t\t"
        << "5.Xoa Sau Ma So" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "6.Xoa Cuoi" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "7.Quay Lai" << endl;
}
void menu3_4()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Ma So" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Ten Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Ten Tac Gia" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 4.Xoa Dau " << endl;
    cout << "\t\t\t\t\t\t\t"
        << "5.Xoa Sau Ma So" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "6.Xoa Cuoi" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "7.Quay Lai" << endl;
}
void menu3_5()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Ma So" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Ten Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Ten Tac Gia" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Xoa Dau " << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 5.Xoa Sau Ma So" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "6.Xoa Cuoi" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "7.Quay Lai" << endl;
}
void menu3_6()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Ma So" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Ten Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Ten Tac Gia" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Xoa Dau " << endl;
    cout << "\t\t\t\t\t\t\t"
        << "5.Xoa Sau Ma So" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 6.Xoa Cuoi" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "7.Quay Lai" << endl;
}
void menu3_7()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Ma So" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Ten Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Ten Tac Gia" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Xoa Dau " << endl;
    cout << "\t\t\t\t\t\t\t"
        << "5.Xoa Sau Ma So" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "6.Xoa Cuoi" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 7.Quay Lai" << endl;
}

void menu4()
{
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 40; i++)
        cout << "*";
    cout << " ADMINISTRATOR MENU ";
    for (int i = 0; i <= 40; i++)
        cout << "*";
    cout << endl;
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Tao Sach " << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Them Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Xoa Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 4.Tim Kiem Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "5.Xem Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "6.Muon Tra Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "7.Sua Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "8.Luu Sach Vao File" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "9.Thoat" << endl;
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 101; i++)
        cout << "*";
    cout << endl;
}
void menu4_1()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 1.Ten Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Ten Tac Gia" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Ten Nha Suat Ban" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Quay Lai" << endl;
}
void menu4_2()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Ten Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 2.Ten Tac Gia" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Ten Nha Suat Ban" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Quay Lai" << endl;
}
void menu4_3()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Ten Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Ten Tac Gia" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 3.Ten Nha Suat Ban" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Quay Lai" << endl;
}
void menu4_4()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Ten Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Ten Tac Gia" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Ten Nha Suat Ban" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 4.Quay Lai" << endl;
}

void menu5()
{
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 40; i++)
        cout << "*";
    cout << " ADMINISTRATOR MENU ";
    for (int i = 0; i <= 40; i++)
        cout << "*";
    cout << endl;
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Tao Sach " << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Them Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Xoa Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Tim Kiem Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 5.Xem Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "6.Muon Tra Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "7.Sua Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "8.Luu Sach Vao File" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "9.Thoat" << endl;
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 101; i++)
        cout << "*";
    cout << endl;
}
void menu5_1()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 1.Xem Toan Bo Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Xem Nhung Cuon Sach Dang Cho Muon" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Xem Nhung Cuon Sach Chua Cho Muon" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Quay Lai" << endl;
}
void menu5_2()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Xem Toan Bo Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 2.Xem Nhung Cuon Sach Dang Cho Muon" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Xem Nhung Cuon Sach Chua Cho Muon" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Quay Lai" << endl;
}
void menu5_3()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Xem Toan Bo Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Xem Nhung Cuon Sach Dang Cho Muon" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 3.Xem Nhung Cuon Sach Chua Cho Muon" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Quay Lai" << endl;
}
void menu5_4()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Xem Toan Bo Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Xem Nhung Cuon Sach Dang Cho Muon" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Xem Nhung Cuon Sach Chua Cho Muon" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 4.Quay Lai" << endl;
}


void menu6()
{
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 40; i++)
        cout << "*";
    cout << " ADMINISTRATOR MENU ";
    for (int i = 0; i <= 40; i++)
        cout << "*";
    cout << endl;
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Tao Sach " << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Them Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Xoa Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Tim Kiem Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "5.Xem Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 6.Muon Tra Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "7.Sua Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "8.Luu Sach Vao File" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "9.Thoat" << endl;
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 101; i++)
        cout << "*";
    cout << endl;
}
void menu6_1()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 1.Muon Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Tra Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Quay Lai" << endl;
}
void menu6_2()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Muon Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 2.Tra Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Quay Lai" << endl;
}
void menu6_3()
{
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Muon Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Tra Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 3.Quay Lai" << endl;
}

void menu7()
{
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 40; i++)
        cout << "*";
    cout << " ADMINISTRATOR MENU ";
    for (int i = 0; i <= 40; i++)
        cout << "*";
    cout << endl;
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Tao Sach " << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Them Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Xoa Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Tim Kiem Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "5.Xem Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "6.Muon Tra Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 7.Sua Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "8.Luu Sach Vao File" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "9.Thoat" << endl;
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 101; i++)
        cout << "*";
    cout << endl;
}
void menu8()
{
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 40; i++)
        cout << "*";
    cout << " ADMINISTRATOR MENU ";
    for (int i = 0; i <= 40; i++)
        cout << "*";
    cout << endl;
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Tao Sach " << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Them Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Xoa Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Tim Kiem Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "5.Xem Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "6.Muon Tra Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "7.Sua Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 8.Luu Sach Vao File" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "9.Thoat" << endl;
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 101; i++)
        cout << "*";
    cout << endl;
}
void menu9()
{
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 40; i++)
        cout << "*";
    cout << " ADMINISTRATOR MENU ";
    for (int i = 0; i <= 40; i++)
        cout << "*";
    cout << endl;
    cout << "\t\t\t\t\t\t\t"
        << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "1.Tao Sach " << endl;
    cout << "\t\t\t\t\t\t\t"
        << "2.Them Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "3.Xoa Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "4.Tim Kiem Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "5.Xem Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "6.Muon Tra Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "7.Sua Sach" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "8.Luu Sach Vao File" << endl;
    cout << "\t\t\t\t\t\t\t"
        << "> 9.Thoat" << endl;
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 101; i++)
        cout << "*";
    cout << endl;
}
LinkedList* list;
void ChonTaoDS()
{
    int count2 = 1;
    system("cls");
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 41; i++)
        cout << "*";
    cout << " KHOI TAO ";
    for (int i = 0; i <= 41; i++)
        cout << "*";
    cout << endl;
    menu1_1();
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 96; i++)
        cout << "*";
    int out2 = 0;
    while (out2 == 0)
    {
        int change = 0;
        char ch2 = _getch();
        if (ch2 == -32)
        {
            ch2 = _getch();
            if (ch2 == 72)
            {
                if ((count2 > 1) && (count2 <= 3))
                    --count2;
                else if (count2 == 1)
                    count2 = 3;
            }
            if (ch2 == 80)
            {
                if ((count2 >= 1) && (count2 < 3))
                    ++count2;
                else if (count2 == 3)
                    count2 = 1;
            }
            if (ch2 == 77)
            {
                change++;
            }
            if (ch2 == 75)
            {
                count2 = 3;
                ++change;
            }
            switch (count2)
            {
            case 1:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " kHOI TAO ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu1_1();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    // tao danh sach rong
                    list = new LinkedList();
                    cout << "\t\t\t\t\t\t\t\t\t\t\t Da Tao Danh Sach";
                }
                break;
            }
            case 2:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " kHOI TAO ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu1_2();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    //doc tu file
                    list = new LinkedList();
                    ifstream filein;
                    filein.open("C:\\Users\\Dell\\Desktop\\sach.txt", ios::in);
                    list->ReadListBookFromFile(filein);
                    list->printList();
                }
                break;
            }
            case 3:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " KHOI TAO ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu1_3();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                if (change != 0)
                {
                    out2++;
                    system("cls");
                    menu1();
                }
                cout << "\n\n";
                cout << "\t\t\t\t\t\t\t"
                    << "Please press the bottom 'up arrow'->to continue !" << endl;

                break;
            }
            }
        }
    }
}

void ChonThemSach()
{
    int count2 = 1;
    system("cls");
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 41; i++)
        cout << "*";
    cout << " THEM SACH ";
    for (int i = 0; i <= 41; i++)
        cout << "*";
    cout << endl;
    menu2_1();
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 96; i++)
        cout << "*";
    int out2 = 0;
    while (out2 == 0)
    {
        int change = 0;
        char ch2 = _getch();
        if (ch2 == -32)
        {
            ch2 = _getch();
            if (ch2 == 72)
            {
                if ((count2 > 1) && (count2 <= 4))
                    --count2;
                else if (count2 == 1)
                    count2 = 4;
            }
            if (ch2 == 80)
            {
                if ((count2 >= 1) && (count2 < 4))
                    ++count2;
                else if (count2 == 4)
                    count2 = 1;
            }
            if (ch2 == 77)
            {
                change++;
            }
            if (ch2 == 75)
            {
                count2 = 4;
                ++change;
            }
            switch (count2)
            {
            case 1:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " THEM SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu2_1();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tChua Khoi Tao Danh Sach";
                        return;
                    }
                    else
                    {
                        cin.ignore();
                        // them dau
                        cout << "\t\t\t\t\t\t";
                        for (int i = 0; i <= 41; i++)
                            cout << "*";
                        cout << " Nhap thong tin sach can them ";
                        for (int i = 0; i <= 41; i++)
                            cout << "*";
                        cout << endl;
                        string maso, tensach, tentacgia, nhaxuatban;
                        double namxuatban;
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap ma so sach: "; fflush(stdin); getline(cin, maso);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (maso == "" || list->isExist(maso));
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap ten sach: "; fflush(stdin); getline(cin, tensach);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (tensach == "");
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap ten tac gia: "; fflush(stdin); getline(cin, tentacgia);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (tentacgia == "");
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap nha xuat ban: "; fflush(stdin); getline(cin, nhaxuatban);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (nhaxuatban == "");
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap nam xuat ban: "; fflush(stdin);
                            cin >> namxuatban;
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (namxuatban <= 1000 || namxuatban > 2020);
                        cout << endl;
                        list->insertNode(new Node(Book(maso, tensach, tentacgia, nhaxuatban, namxuatban)), 0);
                        cout << "\t\t\t\t\t\t";
                        for (int i = 0; i <= 114; i++)
                            cout << "*";
                        list->printList();
                    }
                }
                break;
            }
            case 2:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " THEM SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu2_2();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tChua Khoi Tao Danh Sach";
                        return;
                    }
                    else
                    {
                        cin.ignore();
                        //them sau 1 cuon sach
                        cout << "\t\t\t\t\t\t";
                        for (int i = 0; i <= 41; i++)
                            cout << "*";
                        cout << " Nhap thong tin sach can them ";
                        for (int i = 0; i <= 41; i++)
                            cout << "*";
                        cout << endl;
                        string maso, tensach, tentacgia, nhaxuatban;
                        double namxuatban;
                        int vitri;
                        cout << "\t\t\t\t\t\t\t\t\t\tThem sau sach co vi tri: "; fflush(stdin); cin >> vitri;
                        cin.ignore();
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap ma so sach: "; fflush(stdin); getline(cin, maso);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (maso == "" || list->isExist(maso));
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap ten sach: "; fflush(stdin); getline(cin, tensach);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (tensach == "");
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap ten tac gia: "; fflush(stdin); getline(cin, tentacgia);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (tentacgia == "");
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap nha xuat ban: "; fflush(stdin); getline(cin, nhaxuatban);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (nhaxuatban == "");

                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap nam xuat ban: "; fflush(stdin);
                            cin >> namxuatban;
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (namxuatban <= 1000 || namxuatban > 2020);
                        cout << endl;
                        list->insertNode(new Node(Book(maso, tensach, tentacgia, nhaxuatban, namxuatban)), ++vitri);
                        cout << "\t\t\t\t\t\t";
                        for (int i = 0; i <= 114; i++)
                            cout << "*";
                        list->printList();
                    }
                }
                break;
            }
            case 3:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " THEM SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu2_3();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tChua Khoi Tao Danh Sach";
                        return;
                    }
                    else
                    {
                        cin.ignore();
                        // them cuoi
                        cout << "\t\t\t\t\t\t";
                        for (int i = 0; i <= 41; i++)
                            cout << "*";
                        cout << " Nhap thong tin sach can them ";
                        for (int i = 0; i <= 41; i++)
                            cout << "*";
                        cout << endl;
                        string maso, tensach, tentacgia, nhaxuatban;
                        double namxuatban;
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap ma so sach: "; fflush(stdin); getline(cin, maso);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (maso == "" || list->isExist(maso));
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap ten sach: "; fflush(stdin); getline(cin, tensach);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (tensach == "");
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap ten tac gia: "; fflush(stdin); getline(cin, tentacgia);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (tentacgia == "");
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap nha xuat ban: "; fflush(stdin); getline(cin, nhaxuatban);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (nhaxuatban == "");

                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap nam xuat ban: "; fflush(stdin);
                            cin >> namxuatban;
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (namxuatban <= 1000 || namxuatban > 2020);
                        cout << endl;
                        list->insertNode(new Node(Book(maso, tensach, tentacgia, nhaxuatban, namxuatban)), list->getSize());
                        cout << "\t\t\t\t\t\t";
                        for (int i = 0; i <= 100; i++)
                            cout << "*";
                        list->printList();
                    }
                }
                break;
            }
            case 4:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " THEM SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu2_4();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                if (change != 0)
                {
                    out2++;
                    system("cls");
                    menu2();
                }
                cout << "\n\n";
                cout << "\t\t\t\t\t\t\t"
                    << "Please press the bottom 'up arrow'->to continue !" << endl;
                break;
            }
            }
        }
    }
}
void ChonXoaSach()
{
    int count2 = 1;
    system("cls");
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 41; i++)
        cout << "*";
    cout << " XOA SACH ";
    for (int i = 0; i <= 41; i++)
        cout << "*";
    cout << endl;
    menu3_1();
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 96; i++)
        cout << "*";
    int out2 = 0;
    while (out2 == 0)
    {
        int change = 0;
        char ch2 = _getch();
        if (ch2 == -32)
        {
            ch2 = _getch();
            if (ch2 == 72)
            {
                if ((count2 > 1) && (count2 <= 7))
                    --count2;
                else if (count2 == 1)
                    count2 = 7;
            }
            if (ch2 == 80)
            {
                if ((count2 >= 1) && (count2 < 7))
                    ++count2;
                else if (count2 == 7)
                    count2 = 1;
            }
            if (ch2 == 77)
            {
                change++;
            }
            if (ch2 == 75)
            {
                count2 = 7;
                ++change;
            }
            switch (count2)
            {
            case 1:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " XOA SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu3_1();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tChua Khoi Tao Danh Sach";
                        return;
                    }
                    else
                    {
                        cin.ignore();
                        // xoa theo ma so
                        string maso;
                        cout << "\t\t\t\t\t\t\t\t\t\t";
                        do
                        {
                            cout << "Nhap ma so sach can xoa: "; cin >> maso;
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (maso == "");

                        list->deleteNodeByID(maso);
                        list->printList();

                    }

                }
                break;
            }
            case 2:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " XOA SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu3_2();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tChua Khoi Tao Danh Sach";
                        return;
                    }
                    else
                    {
                        cin.ignore();
                        // xoa theo ten sach
                        string tensach;
                        cout << "\t\t\t\t\t\t\t\t\t\t";
                        do
                        {
                            cout << "Nhap ten sach can xoa: "; getline(cin, tensach);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (tensach == "");
                        list->deleteNodeByBookName(tensach);
                        list->printList();
                    }
                }
                break;
            }
            case 3:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " XOA SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu3_3();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tChua Khoi Tao Danh Sach";
                        return;
                    }
                    else
                    {
                        cin.ignore();
                        // xoa theo ten tac gia
                        string tentacgia;
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\t";
                            cout << "Nhap ten tac gia can xoa: "; getline(cin, tentacgia);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (tentacgia == "");

                        list->deleteNodeByAuthorName(tentacgia);
                        list->printList();
                    }
                }
                break;
            }
            case 4:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " XOA SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu3_4();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tChua Khoi Tao Danh Sach";
                        return;
                    }
                    else
                    {
                        // xoa dau
                        list->deleteNode(0);
                        list->printList();
                    }
                }
                break;
            }
            case 5:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " XOA SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu3_5();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tChua Khoi Tao Danh Sach";
                        return;
                    }
                    else
                    {
                        cin.ignore();
                        // xoa sau 1 cuon sach
                        string ms;
                        cout << "\t\t\t\t\t\t\t\t\t\t";
                        cout << "Ban muon xoa sau cuon sach co ma so: "; cin >> ms;
                        cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        list->deleteNode(list->getPositionByBookID(ms) + 1);
                        list->printList();
                    }
                }
                break;
            }
            case 6:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " XOA SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu3_6();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tChua Khoi Tao Danh Sach";
                        return;
                    }
                    else
                    {
                        // xoa cuoi
                        list->deleteNode(list->size - 1);
                        list->printList();
                    }
                }
                break;
            }
            case 7:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " XOA SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu3_7();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                if (change != 0)
                {
                    out2++;
                    system("cls");
                    menu3();
                }
                cout << "\n\n";
                cout << "\t\t\t\t\t\t\t"
                    << "Please press the bottom 'up arrow'->to continue !" << endl;
                break;
            }
            }
        }
    }
}
void ChonTimKiemSach()
{
    int count2 = 1;
    system("cls");
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 41; i++)
        cout << "*";
    cout << " TIM KIEM SACH ";
    for (int i = 0; i <= 41; i++)
        cout << "*";
    cout << endl;
    menu4_1();
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 96; i++)
        cout << "*";
    int out2 = 0;
    while (out2 == 0)
    {
        int change = 0;
        char ch2 = _getch();
        if (ch2 == -32)
        {
            ch2 = _getch();
            if (ch2 == 72)
            {
                if ((count2 > 1) && (count2 <= 4))
                    --count2;
                else if (count2 == 1)
                    count2 = 4;
            }
            if (ch2 == 80)
            {
                if ((count2 >= 1) && (count2 < 4))
                    ++count2;
                else if (count2 == 4)
                    count2 = 1;
            }
            if (ch2 == 77)
            {
                change++;
            }
            if (ch2 == 75)
            {
                count2 = 4;
                ++change;
            }
            switch (count2)
            {
            case 1:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " TIM KIEM SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu4_1();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    cin.ignore();
                    // tim theo ten sach
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tDanh Sach Chua Duoc khoi Tao";
                        return;
                    }
                    else
                    {
                        cin.ignore();
                        string tensach;
                        cout << "\t\t\t\t\t\t";
                        for (int i = 0; i <= 41; i++)
                            cout << "*";
                        cout << " Tim Kiem Theo Ten Sach ";
                        for (int i = 0; i <= 41; i++)
                            cout << "*";
                        cout << endl;
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap ten sach can tim: "; getline(cin, tensach);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (tensach == "");
                        cout << "\t\t\t\t\t\t";
                        LinkedList* result = list->searchBookByName(tensach);
                        if (result->getSize() != 0)
                        {
                            cout << endl;
                            result->printList();
                        }
                        else
                        {
                            cout << "Khong tim ra sach co ten (" << tensach << ")" << endl;
                        }
                    }


                }
                break;
            }
            case 2:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " TIM KIEM SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu4_2();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    // tim theo ten tac gia
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tDanh Sach Chua Duoc khoi Tao";
                        return;
                    }
                    else
                    {
                        cin.ignore();
                        string tentacgia;
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap ten tac gia can tim: "; getline(cin, tentacgia);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (tentacgia == "");

                        cout << "\t\t\t\t\t\t";
                        LinkedList* node = list->searchNodeByAuthorName(tentacgia);
                        if (node->getSize() != 0)
                        {
                            cout << endl;
                            node->printList();
                        }
                        else
                        {
                            cout << "Khong tim ra sach co ten tac gia (" << tentacgia << ")" << endl;
                        }
                    }
                }
                break;
            }
            case 3:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " TIM KIEM SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu4_3();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    // tim theo ten nha xuat ban
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tDanh Sach Chua Duoc khoi Tao";
                        return;
                    }
                    else
                    {
                        cin.ignore();
                        string tennxb;
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap ten nha xuat ban can tim: "; getline(cin, tennxb);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (tennxb == "");

                        cout << "\t\t\t\t\t\t";
                        LinkedList* node = list->searchNodeByNXBName(tennxb);
                        if (node->getSize() != 0)
                        {
                            cout << endl;
                            node->printList();
                        }
                        else
                        {
                            cout << "Khong tim ra sach co ten nha xuat ban (" << tennxb << ")" << endl;
                        }
                    }
                }
                break;
            }
            case 4:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " TIM KIEM SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu4_4();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                if (change != 0)
                {
                    out2++;
                    system("cls");
                    menu4();
                }
                cout << "\n\n";
                cout << "\t\t\t\t\t\t\t"
                    << "Please press the bottom 'up arrow'->to continue !" << endl;
                break;
            }
            }
        }
    }
}

void ChonXemSach()
{
    int count2 = 1;
    system("cls");
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 41; i++)
        cout << "*";
    cout << " XEM SACH ";
    for (int i = 0; i <= 41; i++)
        cout << "*";
    cout << endl;
    menu5_1();
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 96; i++)
        cout << "*";
    int out2 = 0;
    while (out2 == 0)
    {
        int change = 0;
        char ch2 = _getch();
        if (ch2 == -32)
        {
            ch2 = _getch();
            if (ch2 == 72)
            {
                if ((count2 > 1) && (count2 <= 4))
                    --count2;
                else if (count2 == 1)
                    count2 = 4;
            }
            if (ch2 == 80)
            {
                if ((count2 >= 1) && (count2 < 4))
                    ++count2;
                else if (count2 == 4)
                    count2 = 1;
            }
            if (ch2 == 77)
            {
                change++;
            }
            if (ch2 == 75)
            {
                count2 = 4;
                ++change;
            }
            switch (count2)
            {
            case 1:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " XEM SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu5_1();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tChua Khoi Tao Danh Sach";
                        return;
                    }
                    else
                    {
                        list->printList();
                    }
                }
                break;
            }
            case 2:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " XEM SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu5_2();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tChua Khoi Tao Danh Sach";
                        return;
                    }
                    else
                    {
                        LinkedList* result = list->ShowBookByBorrowStatus();
                        if (result->size == 0)
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\t\t Hien Tat Ca Sach Chua Duoc cho Muon";
                        }
                        else
                        {
                            result->printList();
                        }
                    }
                }
                break;
            }
            case 3:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " XEM SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu5_3();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tChua Khoi Tao Danh Sach";
                        return;
                    }
                    else
                    {
                        LinkedList* result = list->ShowBookByPayStatus();
                        if (result->size == 0)
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\t\t Hien Tat Ca Sach Dang Duoc cho Muon";
                        }
                        else
                        {
                            result->printList();
                        }
                    }
                }
                break;
            }
            case 4:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " XEM SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu5_4();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                if (change != 0)
                {
                    out2++;
                    system("cls");
                    menu5();
                }
                cout << "\n\n";
                cout << "\t\t\t\t\t\t\t"
                    << "Please press the bottom 'up arrow'->to continue !" << endl;
                break;
            }
            }
        }
    }
}
void ChonMuonSach()
{
    int count2 = 1;
    system("cls");
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 41; i++)
        cout << "*";
    cout << " MUON TRA SACH ";
    for (int i = 0; i <= 41; i++)
        cout << "*";
    cout << endl;
    menu6_1();
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i <= 96; i++)
        cout << "*";
    int out2 = 0;
    while (out2 == 0)
    {
        int change = 0;
        char ch2 = _getch();
        if (ch2 == -32)
        {
            ch2 = _getch();
            if (ch2 == 72)
            {
                if ((count2 > 1) && (count2 <= 3))
                    --count2;
                else if (count2 == 1)
                    count2 = 3;
            }
            if (ch2 == 80)
            {
                if ((count2 >= 1) && (count2 < 3))
                    ++count2;
                else if (count2 == 3)
                    count2 = 1;
            }
            if (ch2 == 77)
            {
                change++;
            }
            if (ch2 == 75)
            {
                count2 = 3;
                change++;
            }
            switch (count2)
            {
            case 1:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " MUON TRA SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu6_1();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tChua Khoi Tao Danh Sach";
                        return;
                    }
                    else
                    {
                        cin.ignore();
                        string maso;
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap ma so sach: "; fflush(stdin); getline(cin, maso);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (maso == "");

                        list->updateNodeMuon(maso);
                        list->printList();
                    }
                }
                break;
            }
            case 2:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " MUON TRA SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu6_2();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                cout << endl;
                if (change != 0)
                {
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tChua Khoi Tao Danh Sach";
                        return;
                    }
                    else
                    {
                        cin.ignore();
                        string maso;
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap ma so sach: "; fflush(stdin); getline(cin, maso);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (maso == "");
                        list->updateNodeTra(maso);
                        list->printList();
                    }
                }
                break;
            }
            case 3:
            {
                system("cls");
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << " MUON TRA SACH ";
                for (int i = 0; i <= 41; i++)
                    cout << "*";
                cout << endl;
                menu6_3();
                cout << "\t\t\t\t\t\t\t";
                for (int i = 0; i <= 96; i++)
                    cout << "*";
                if (change != 0)
                {
                    out2++;
                    system("cls");
                    menu6();
                }
                cout << "\n\n";
                cout << "\t\t\t\t\t\t\t"
                    << "Please press the bottom 'up arrow'->to continue !" << endl;

                break;
            }
            }
        }
    }
}
void ChonChinh()
{
    int count1 = 1;
    menu1();
    int out1 = 0;
    while (out1 == 0)
    {
        int change1 = 0;
        char ch1 = _getch();
        if (ch1 == -32)
        {
            ch1 = _getch();
            if (ch1 == 72)
            {
                if ((count1 > 1) && (count1 <= 9))
                    --count1;
                else if (count1 == 1)
                    count1 = 9;
            }
            if (ch1 == 80)
            {
                if ((count1 >= 1) && (count1 < 9))
                    ++count1;
                else if (count1 == 9)
                    count1 = 1;
            }

            if (ch1 == 77)
            {
                change1++;
            }

            if (ch1 == 75)
            {
                count1 = 9;
                ++change1;
            }
            switch (count1)
            {
            case 1:
            {
                system("cls");
                menu1();
                if (change1 != 0)
                {
                    ChonTaoDS();
                }
                break;
            }
            case 2:
            {
                system("cls");
                menu2();
                if (change1 != 0)
                {
                    ChonThemSach();
                }
                break;
            }
            case 3:
            {
                system("cls");
                menu3();
                if (change1 != 0)
                {
                    ChonXoaSach();
                }
                break;
            }
            case 4:
            {
                system("cls");
                menu4();
                if (change1 != 0)
                {
                    ChonTimKiemSach();
                }
                break;
            }
            case 5:
            {
                system("cls");
                menu5();
                if (change1 != 0)
                {
                    if (list != NULL)
                    {
                        ChonXemSach();
                    }
                    else
                    {
                        cout << "\t\t\t\t\t\t\t List is empty";
                    }
                }
                break;
            }
            case 6:
            {
                system("cls");
                menu6();
                if (change1 != 0)
                {
                    ChonMuonSach();
                }
                break;
            }
            case 7:
            {
                system("cls");
                menu7();
                if (change1 != 0)
                {
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tChua Khoi Tao Danh Sach";
                    }
                    else
                    {
                        cin.ignore();
                        //them sau 1 cuon sach
                        cout << "\t\t\t\t\t\t";
                        for (int i = 0; i <= 41; i++)
                            cout << "*";
                        cout << " Nhap thong tin sach can sua ";
                        for (int i = 0; i <= 41; i++)
                            cout << "*";
                        cout << endl;
                        string tensach, tentacgia, nhaxuatban;
                        double namxuatban;
                        bool trangthai;
                        int vitri;
                        cout << "\t\t\t\t\t\t\t\t\t\tSua sau sach co vi tri: "; fflush(stdin); cin >> vitri;
                        cin.ignore();
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap ten sach: "; fflush(stdin); getline(cin, tensach);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (tensach == "");
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap ten tac gia: "; fflush(stdin); getline(cin, tentacgia);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (tentacgia == "");
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap nha xuat ban: "; fflush(stdin); getline(cin, nhaxuatban);
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (nhaxuatban == "");
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap nam xuat ban: "; fflush(stdin);
                            cin >> namxuatban;
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (namxuatban <= 1000 || namxuatban > 2020);
                        cin.ignore();
                        do
                        {
                            cout << "\t\t\t\t\t\t\t\t\t\tNhap trang thai sach: "; fflush(stdin);
                            cin >> trangthai;
                            cout << "\t\t\t\t\t\t\t\t\t\t " << endl;
                        } while (trangthai != 0 && trangthai != 1);
                        cout << endl;
                        list->updateNode(vitri, tensach, tentacgia, nhaxuatban, namxuatban, trangthai);
                        cout << "\t\t\t\t\t\t";
                        for (int i = 0; i <= 114; i++)
                            cout << "*";
                        list->printList();
                    }
                }
                break;
            }
            case 8:
            {
                system("cls");
                menu8();
                if (change1 != 0)
                {
                    if (list == NULL)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tChua Khoi Tao Danh Sach";
                    }
                    else
                    {
                        ofstream fileout;
                        fileout.open("C:\\Users\\Dell\\Desktop\\sach.txt", ios::out);
                        list->WriteListBookToFile(fileout);
                        fileout.close();
                        cout << "\t\t\t\t\t\t\t\t\t\t\t Luu Thanh Cong";
                    }
                }
                break;
            }
            case 9:
            {
                system("cls");
                menu9();
                if (change1 != 0)
                {
                    out1++;
                }
                break;
            }
            }
        }
    }
}

int main()
{
    ChonChinh();
    system("pause");
    return 0;
}