#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
double J[20];
double Array2[10][10];
double Array[10][10];
double D, Dx, Dy;
double Totalx, Totalx2, Totalxy, Totaly;
int i = 1;
int dem = 0;
void menu();
void InputFile(fstream& MatrixIn);
void Display();
void VoidChange1();
void VoidChange2();
double mangX[100];
double mangY[100];
double mangY2[100];
double mangX2[100];

void NhapX(double mangX[], int x)
{
  for(int i=0;i<x;i++)
  {
	cout<<"X"<<i+1<<" is: ";
	cin>>mangX[i];
  }
}
void NhapY(double mangY[],int x)
{
  for(int i=0;i<x;i++)
  {
	cout<<"Y"<<i+1<<" is: ";
	cin>>mangY[i];
  }
}

void HamChuyen1(double mangY[],double mangY2[],double mangX[] ,double mangX2[], int x)
{
	for(int i=0;i<x;i++)
	{
		mangY2[i]=log10(mangY[i]);
		mangX2[i]=log10(mangX[i]);
	}
}

void HamChuyen2(double mangX2[],double mangY2[],int x,double Tongx,double Tongx2,double Tongxy, double Tongy, 
	double A, double B, double D,double Dx,double Dy,double a, double b)
{
	D=0;
	Dx=0;
	Dy=0;
   for(int i=0;i<x;i++)
	{
		Tongx=Tongx+mangX2[i];
		Tongx2=Tongx2+pow(mangX2[i],2);
		Tongxy=Tongxy+(mangX2[i] * mangY2[i]);
		Tongy=Tongy+mangY2[i];
	}
	D=x*Tongx2-Tongx*Tongx;
	Dx=Tongy*Tongx2-Tongxy*Tongx;
	Dy=x*Tongxy-Tongx*Tongy;
	A=Dx/D;
	B=Dy/D;
	a=pow(10,A);
	b=B;

	cout<<"\t\t\t=================================RESULT=================================\n\n"<<endl;
	cout << "D=" << D << " " << "Dx=" << Dx << " " << "Dy=" << Dy << endl;
	cout << "a=" << pow(10, Dx / D) << " " << "b=" << Dy / D << endl << endl;
	cout<<"f(x)="<<a<<"x^"<<b<<"\n\n\n\n";
	cout<<"\t\t\t=================================CHOOSE=================================\n\n"<<endl;
	cout<<"1.Dua Ket Qua Vao file(MatrixOut.txt)."<<endl;
	cout<<"2.Exit."<<endl;
	cout<<"Nhap Lua Chon: ";
	int chon;
	cin>>chon;
	if (chon == 1)
	{
		ofstream MatrixOut("MatrixOut.txt");
		MatrixOut << "D=" << D << " " << "Dx=" << Dx << " " << "Dy=" << Dy << endl;
		MatrixOut << "a=" << pow(10, Dx / D) << " " << "b=" << Dy / D << endl;
		MatrixOut << "f(x)=" << pow(10, Dx / D) << "x^" << Dy / D << "\n\n";
		MatrixOut.close();
		cout << "\t\t\t\t\t\t\tDONE\n\n\n\n";
		system("pause");
	}
	else {}
}

int main() 
{
    menu();
	system("pause");
	return 0;
}

void InputFile(fstream& MatrixIn)
{
	dem=0;
	while (MatrixIn.eof() == false)
	{
		MatrixIn >> J[i];
		i++;
		dem++;
	}
	int a = 1;
	for (int z = 1; z <= 2; z++)
	{
		for (int j = 1; j <= dem / 2; j++) 
		{
			Array[z][j] = J[a];
			a++;
		}
	}
}

void Display() 
{
	cout << "The Matrix is entered:\nX: ";
	for (int z = 1; z <= 2; z++) 
	{
		for (int j = 1; j <= dem / 2; j++) 
		{
		cout << "[" << z << "]" << "[" << j << "]=" << Array[z][j] << "    ";
		}
		cout << endl;
		if (z <= 1)
		cout << "Y: ";
	}
}

void VoidChange1() 
{
	for (int i = 1; i <= 2; i++) 
	{
		for (int j = 1; j <= dem/2; j++) 
		{
			Array2[i][j] = log10(Array[i][j]);
		}
	}
}

void VoidChange2()
{
	Totalx=0;D=0;
	Totalx2=0;Dx=0;
	Totalxy=0;Dy=0;
	Totaly=0;
	for (int i = 1; i <= dem/2; i++) 
	{
		Totalx = Totalx + Array2[1][i];
		Totalx2 = Totalx2 + pow(Array2[1][i], 2);
		Totalxy = Totalxy + (Array2[1][i] * Array2[2][i]);
		Totaly = Totaly + Array2[2][i];
	}
	D = dem/2 * Totalx2 - Totalx * Totalx;
	Dx = Totaly * Totalx2 - Totalxy * Totalx;
	Dy = dem/2 * Totalxy - Totalx * Totaly;
}

void menu()
{
	int choose;
	while (true)
	{
		system("cls");
		cout << "====================DO AN CO SO-PHUONG PHAP BINH PHUONG BE NHAT-NHOM 18N13B-N10====================\n";
		cout << "\t\t\t=======================MENU======================\n";
		cout << "\n1.Nhap Du Lieu Tu file(Matrixin.txt) Xuat Ra Man Hinh Va file(MatrixOut.txt).";
		cout << "\n2.Nhap Du Lieu Tu Ban Phim Va Xuat Ra Man Hinh.";
		cout << "\n3.Exit.";
		cout << "\n\t     ===================================END===================================\n";
		cout << "Enter your selection: ";
		cin >> choose;
		if (choose == 1) 
		{
			system("cls");
			fstream MatrixIn;
			MatrixIn.open("MatrixIn.txt", ios_base::in);
			if (MatrixIn.fail() == true)
			{
				cout << "\nWARNING: The file does not exist!\nCreat a file 'MatrixIn.txt' in the same folder.\n\n\n\n";
				break;
				system("pause");
			}

			InputFile(MatrixIn);
			if (dem % 2 == 1) 
			{
				cout << "WARNING: File is failed!.\nPlease check file again!\n\n\n" << endl;
				break;
			}

			Display();
			VoidChange1();
			VoidChange2();
			ofstream MatrixOut("MatrixOut.txt");
			cout << "\t\t\t=================================RESULT=================================\n\n" << endl;
			cout << "D=" << D << " " << "Dx=" << Dx << " " << "Dy=" << Dy << endl;
			cout << "a=" << pow(10, Dx / D) << " " << "b=" << Dy / D << endl << endl;
			cout << "f(x)=" << pow(10, Dx / D) << "x^" << Dy / D << "\n\n";
			MatrixOut << "D=" << D << " " << "Dx=" << Dx << " " << "Dy=" << Dy << endl;
			MatrixOut << "a=" << pow(10, Dx / D) << " " << "b=" << Dy / D << endl;
			MatrixOut << "f(x)=" << pow(10, Dx / D) << "x^" << Dy / D << "\n\n";
			MatrixIn.close();
			MatrixOut.close();
			system("pause");
		}
		else if (choose == 2) 
		{
			system("cls");
			int x;
			double A{}, B{}, D{}, Dx{}, Dy{}, a{}, b{};
			double Tongx{}, Tongx2{}, Tongxy{}, Tongy{};
			cout << "Enter the number of column values of X: ";
			cin >> x;
			NhapX(mangX, x);
			NhapY(mangY, x);
			HamChuyen1(mangY, mangY2, mangX, mangX2, x);
			HamChuyen2(mangX2, mangY2, x, Tongx, Tongx2, Tongxy, Tongy, A, B, D, Dx, Dy, a, b);
		}

		else if (choose == 3) 
		{
			break;
		}
		else 
		{
			cout << "Choose again!" << endl;
			system("pause");
		}
	}		
}