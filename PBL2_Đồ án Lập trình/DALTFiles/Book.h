#pragma once
#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace std;
#include <fstream>
#include <string>

class Book
{
public:
	string MaSo;
	string TenSach;
	string TenTacGia;
	string NhaXuatBan;
	double NamXuatBan;
	bool TrangThai;

public:
	Book();
	Book(string, string, string, string, double);
	void SetMaso(string);
	string GetMaSo();
	void SetTenSach(string);
	string GetTenSach();
	void SetTenTacGia(string);
	string GetTenTacGia();
	void SetNhaXuatBan(string);
	string GetNhaXuatBan();
	void SetNamXuatBan(double);
	double GetNamXuatBan();
	void SetTrangThai(bool);
	bool GetTrangThai();
	~Book();
	void printInfo();
	void ReadBookInfoFromFile(ifstream&);
};
#endif