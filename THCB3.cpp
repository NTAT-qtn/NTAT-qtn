
#include<iostream>
#include<math.h>
#include<iomanip.h>
using namespace std;
int main(){
	
	void bai1(), bai2(), bai3(), bai4(), bai5(), bai6(), bai7(), bai8(), bai9(), bai10(), bai11(), bai12(), bai13(), bai14(), bai15();
	int luachon;
	do{
		cout <<"\n\n\t\t------------NGUYEN THI ANH TUYET HOM NAY THAT TINH------------";
		cout <<"\n1.viet ra man hinh tu 1 den 10,moi so tren 1 dong";
		cout <<"\n2.tinh tong cac so nguyen tu 1 den n,n nhap tu ban phim";
		cout <<"\n3.chuong trinh tinh giai thua n,n nguyen duong nhap vao tu ban phim";
		cout <<"\n4.nhap vao 1 so nguyen duong n,in ra man hinh tat ca cac uoc so cua n";
		cout <<"\n5.viet chuong trinh in ra man hinh bang nhan cua 1 so n nhap tu ban phim";
		cout <<"\n6.viet chuong trinh tinh tong s=2+4+6+...+2n=2.1+2.2+...+2.n (c1)";
		cout <<"\n7.viet chuong trinh tinh tong s=2+4+6+...+2n=2.1+2.2+...+2.n(c2)";
		cout <<"\n8.viet chuong trinh tinh tong s=1+3+5+...+(2n-1)";
		cout <<"\n9.viet chuong trinh tinh tong s=1+1/2+1/3+...+1/n";
		cout <<"\n10.viet chuong trinh in ra tat ca cac so co 4 chu so abcd ma a+b=c+d"; 
		cout <<"\n11.viet chuong trinh tinh tong s=1+4+9+16+...+n^2(s=1*1+2*2+3*3+...+n*n)"; 
		cout <<"\n12.viet chuong trinh tinh tong s=1-4+9-16+...+(-1)^(n-1)*n^2";
		cout <<"\n13.viet chuong trinh nhap vao 1 so nguyen duong n. in ra cac so hoan hao trong pham vi n biet so hoan hao la so co tong cac uoc so khong ke chinh no bang chinh so do. vi du 6=1+2+3, 6 la so hoan hao"; 
		cout <<"\n14.viet chuong trinh in ra tat ca cac cach doi so tien t(nhap vao tu ban phim) thanh cac to menh gia 1000,2000,5000,10000";
		cout <<"\n15.viet chuong trinh nhap vao 1 so nguyen duong n. in ra cac so nguyen to trong pham vi n"; 
		cout <<"\n0.thoat";
		cout <<"\n\n\t\t------------------------------END-----------------------------";
		cout <<"\nMoi ban nhap lua chon: ";
		cin >> luachon;
		switch(luachon){
			case 1:
			{
				cout << "\nBan chon lam bai 1" << endl;
				bai1();
				system("pause");
				break;
			}
			case 2:
			{
				cout << "\nBan chon lam bai 2" << endl;
				bai2();
				system("pause");
				break;
			}
			case 3:
			{
				cout << "\nBan chon lam bai 3" << endl;
				bai3();
				system("pause");
				break;
			}
			case 4:
			{
				cout << "\nBan chon lam bai 4" << endl;
				bai4();
				system("pause");
				break;
			}
			case 5:
			{
				cout << "\nBan chon lam bai 5" << endl;
				bai5();
				system("pause");
				break;
			}
			case 6:
			{
				cout << "\nBan chon lam bai 6" << endl;
				bai6();
				system("pause");
				break;
			}
			case 7:
			{
				cout << "\nBan chon lam bai 7" << endl;
				bai7();
				system("pause");
				break;
			}
			case 8:
			{
				cout << "\nBan chon lam bai 8" << endl;
				bai8();
				system("pause");
				break;
			}
			case 9:
			{
				cout << "\nBan chon lam bai 9" << endl;
				bai9();
				system("pause");
				break;
			}
			case 10:
			{
				cout << "\nBan chon lam bai 10" << endl;
				bai10();
				system("pause");
				break;
			}
			case 11:
			{
				cout << "\nBan chon lam bai 11" << endl;
				bai11();
				system("pause");
				break;
			}
			case 12:
			{
				cout << "\nBan chon lam bai 12" << endl;
				bai12();
				system("pause");
				break;
			}
			case 13:
			{
				cout <<"\n ban chon lam bai 13 " << endl;
				bai13();
				system("pause");
				break;
			}
			case 14:
			{
				cout <<"\n ban chon lam bai 14 "<< endl;
				bai14();
				system("pause");
				break;
			}
			case 15:
			{
				cout <<"\n ban chon lam bai 15" << endl;
				bai15();
				system("pause");
				break;
			}
			case 0:
			{
				cout << "\nBan chon thoat" << endl;
				return 0;
			}	
			
		}
	}while(luachon);	
}

void bai1()	////viet ra man hinh tu 1 den 10,moi so tren 1 dong----	
{

	for(int i = 1;i <=10; i++)
	cout << i << endl;

}

void bai2() ////tinh tong cac so nguyen tu 1 den n,n nhap tu ban phim----
{
	int n,i;
	long int s=0;
	cout <<"nhap n = ";
	cin >> n;
	for(int i = 1;i < n; i++)
	s += i;
	cout <<"tong cac so nguyen tu 1 den " << n << " la" << s <<endl;
	
}	

void bai3()	////chuong trinh tinh giai thua n,n nguyen duong nhap vao tu ban phim----
{
	int n,i;//i la bien dieu kien cua vong for
	float s = 1;
	cout <<"nhap n = ";
	cin >> n;
	for(int i = 1; i <= n; i++)
	s *= i;
	cout <<"giai thua cua " << n << " la" << s << endl;

}

void bai4()	////nhap vao 1 so nguyen duong n,in ra man hinh tat ca cac uoc so cua n----
{
	int n;
	cout <<"nhap so nguyen duong n" <<endl;
	cin >> n;
	cout <<"cac uoc so cua " << n << " la" <<endl;
	for(int i = 1;i <= n; i++)
		if(n%i == 0)
			cout << i <<"\t";
	
}

void bai5()	////viet chuong trinh in ra man hinh bang nhan cua 1 so n nhap tu ban phim----
{
	int n;
	cout <<"nhap n = ";
	cin >> n;
	cout <<"bang cuu chuong cua " << n <<" la " <<endl;
	for(int i = 1; i <= 10; i++)
		cout <<"\t"<< n << "*" << i << "=" << n*i << endl;

}

void bai6()	////viet chuong trinh tinh tong s=2+4+6+...+2n=2.1+2.2+...+2.n(c1)----
{
	int n;
	long int s=0;
	cout <<"nhap n = ";
	cin >> n;
	for(int i = 2; i <= 2*n; i = i + 2)
		s += i;
		cout <<"tong la : " << s << endl;
} 

void bai7() ////viet chuong trinh tinh tong s=2+4+6+...+2n=2.1+2.2+...+2.n(c2)----
{
	int n;
	long int s = 0;
	cout <<"nhap n = ";
	cin >> n;
	for(int i = 1; i <= n; i++)
		s += 2*i;
	cout <<"tong la : " << s << endl;
}

void bai8() ////viet chuong trinh tinh tong s=1+3+5+...+(2n-1)----
{
	int i, n; 
	long int S=0;	
	cout <<"Nhap n: "; 
	cin >> n;
	for (i = 1; i <= n; i++)
		S = S + (2*i-1); 	//hoac S += 2*i-1;
	cout <<"Tong la: " << S << endl; 
}

void bai9() ////viet chuong trinh tinh tong s=1+1/2+1/3+...+1/n---- 
{
	int n, i;
	float s = 0;
	cout <<"nhap n = ";
	cin >> n;
	for(i = 1; i <= n; i++)
		s += (float)1/i;
	cout <<"tong la : " << s << endl; 
}

void bai10() ////viet chuong trinh in ra tat ca cac so co 4 chu so abcd ma a+b=c+d---- 
{
	int s = 0;
	cout <<"cac so co 4 chu so thoa man a+b=c+d la : " << endl;
	for(int a = 1; a <= 9; a++)
		for(int b = 0; b <=9; b++)
			for(int c = 0; c <= 9; c++)
				for(int d = 0; d <= 9; d++)
					if(a+b == c+d)
						{
							cout << a*1000 + b*100 + c*10 +d*1 <<"\t";
							s++;  
						} 
		cout <<"co tat ca " << s << " so thoa man" << endl; 
}

void bai11() ////viet chuong trinh tinh tong s=1+4+9+16+...+n^2(s=1*1+2*2+3*3+...+n*n)---- 
{
	int n;
	float s = 0;
	cout <<"nhap n = ";
	cin >> n;
	for(int i = 1; i <= n; i++)
		s += pow(i,2);
	cout <<"tong la : " << s << endl; 
}

void bai12() //// viet chuong trinh tinh tong s=1-4+9-16+...+(-1)^(n-1)*n^2(s = (-1)01*1 + (-1)1 2*2 + 3*3 - 4*4 + … + n*n)---- 
{
	int n;
	float s = 0;
	cout <<"nhap n = ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		s += pow(-1,i-1)*pow(i,2);
	cout <<"tong la : " << s << endl; 
}

void bai13() ////viet chuong trinh nhap vao 1 so nguyen duong n. in ra cac so hoan hao trong pham vi n biet so hoan hao la so co tong cac uoc so khong ke chinh no bang chinh so do. vi duj 6=1+2+3, 6 la so hoan hao
{
	int n;
		cout <<"nhap so nguyen duong n: "; cin >> n;
		cout <<"cac so hoan hao trong pham vi " << n << "la: " << endl;
	for(int i =1; i <= n; i++)
	{
		int s = 0;
		for (int j = 1; j < i; j++)
			if(i % j == 0) s = s + j;
		if(s == i)
			cout << i << "\t";
			//end for
	}
}

void bai14() ////viet chuong trinh in ra tat ca cac cach doi so tien t(nhap vao tu ban phim) thanh cac to menh gia 1000,2000,5000,10000
{
	int a, b, c, d, s = 0;
	float t; 
	cout <<"nhap vao so tien can doi"; cin >> t;
	cout << setw(15) << "so to 1000" << setw(15) << "so to 2000";
	cout << setw(15) << "so to 5000" << setw(15) << "so to 10000" << endl;
	for(int a = 0; a <= t/1000; a++)
		for(int b = 0; b <= t/2000; b++)
			for(int c = 0; c <= t/5000; c++)
				for(int d = 0; d <= t/10000; d++)
				if(a*1000 + b*2000 + c*5000 + d*10000 == t)
				{
					cout << setw(15) << a << setw(15) << b;
					cout << setw(15) << c << setw(15) << d << endl;
					s++;
				}
				cout <<"co tat ca " << s << "cach doi " << endl;
}

void bai15() ////viet chuong trinh nhap vao 1 so nguyen duong n. in ra cac so nguyen to trong pham vi n
{
	int n;
		cout <<"nhap so nguyen duong n:"; cin >> n;
		cout <<"cac so nguyen to trong pham vi " << n << " la: " << endl;
		for(int i = 2; i <= n; i++)
		{
			int count = 0; // count de dem uoc cua i
			for (int j = 1; j <= i; j++)
				if(i % j == 0) count ++;
			if(count == 2) cout << i << "\t";
		}
}