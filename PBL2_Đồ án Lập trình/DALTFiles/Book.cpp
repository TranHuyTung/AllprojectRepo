#include "Book.h"
#include <iomanip>
Book::Book()
{
	this->MaSo = "0";
	this->TenSach = "";
	this->TenTacGia = "";
	this->NhaXuatBan = "";
	this->NamXuatBan = 0;
	this->TrangThai = false;
}

Book::Book(string maso, string tensach, string tentacgia, string nhaxuatban, double namxuatban)
{
	this->MaSo = maso;
	this->TenSach = tensach;
	this->TenTacGia = tentacgia;
	this->NhaXuatBan = nhaxuatban;
	this->NamXuatBan = namxuatban;
	this->TrangThai = false;
}

void Book::SetMaso(string maso)
{
	MaSo = maso;
}

string Book::GetMaSo()
{
	return this->MaSo;
}

void Book::SetTenSach(string tensach)
{
	TenSach = tensach;
}

string Book::GetTenSach()
{
	return this->TenSach;
}

void Book::SetTenTacGia(string tentacgia)
{
	TenTacGia = tentacgia;
}

string Book::GetTenTacGia()
{
	return TenTacGia;
}

void Book::SetNhaXuatBan(string nhaxuatban)
{
	NhaXuatBan = nhaxuatban;
}

string Book::GetNhaXuatBan()
{
	return NhaXuatBan;
}

void Book::SetNamXuatBan(double namxuatban)
{
	NamXuatBan = namxuatban;
}

double Book::GetNamXuatBan()
{
	return NamXuatBan;
}

void Book::SetTrangThai(bool trangthai)
{
	TrangThai = trangthai;
}

bool Book::GetTrangThai()
{
	return TrangThai;
}

Book::~Book()
{
}

void Book::printInfo()
{
	cout << setw(10) << this->MaSo << setw(30) << this->TenSach << setw(30) << this->TenTacGia << setw(30) << this->NhaXuatBan << setw(30) << this->NamXuatBan << setw(15) << this->TrangThai;
}
void Book::ReadBookInfoFromFile(ifstream& filein)
{
	getline(filein, MaSo, ',');
	//filein.seekg(1, 1);
	getline(filein, TenSach, ',');
	//filein.seekg(1, 1);
	getline(filein, TenTacGia, ',');
	//filein.seekg(1, 1);
	getline(filein, NhaXuatBan, ',');
	//filein.seekg(1, 1);
	filein >> NamXuatBan;
	//filein.seekg(2, 1);
	string status;
	getline(filein, status, '\n');
	if (status == "true")
		SetTrangThai(true);
	else
		SetTrangThai(false);
}