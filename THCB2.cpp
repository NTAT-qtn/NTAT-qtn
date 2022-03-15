#include<iostream.h>

/*int main()
{
	char kytu;
	cout <<"nhap vao 1 ky tu"; cin >> kytu;
	switch(kytu)
	{
		case'A':
		case'a':
			cout <<"Xin chao!" << endl;break;
		case'B':
		case'b':
			cout <<"Hoan nghenh!" << endl; break;
		default:
			cout <<"Xin loi!" << endl; break;
	}	//end switch
}*/

/*
//#include <bits/stdc++.h>
#include<math.h>
//using namespace std;
int main() {
	int chon;
	float a, b, c; 
	bool flag = true;
	cout<<"Moi nhap a: ";
	cin>>a;
	cout<<"Moi nhap b: ";
	cin>>b;
	cout<<"Moi nhap c: ";
	cin>>c;
	cout<<"\n=================================================================="<<endl;
	cout<<"|| 1. Kiem tra a, b, c co tao thanh tam giac hay khong           ||"<<endl;
	cout<<"|| 2. Giai phuong trinh ax^2 + bx +c = 0                         ||"<<endl;
	cout<<"|| 3. Giai bat phuong trinh ax + b > c                           ||"<<endl;
	cout<<"|| 0. Thoat                                                      ||"<<endl;
	cout<<"==================================================================="<<endl;
	do{
		cout<<"\nMoi chon: ";
		cin>>chon;
		switch(chon){
			case 0:
				flag = false;
				break;
			case 1: 
				if ((a+b) > c&& (b+c)>a && (a+c) >b){
					cout<<"La tam giac"<<endl; 
				}else {
					cout<<"Khong la tam giac"<<endl; 
				}
				break;
			case 2: 
				if (a==0 ){
					if (b!=0){
						cout<<"Phuong trinh co nghiem duy nhat: x = "<<-c/b<<endl;
					}else{
						if(c == 0){
							cout<<"Phuong trinh vo so nghiem"<<endl;
						}else{
							cout<<"Phuong trinh vo nghiem"<<endl;
						}
					}
				}else{
					float dt;
					dt = pow(b, 2)-4*a*c;
					if (dt < 0){
						cout << "Phuong trinh vo nghiem"<<endl;
					} else if (dt==0){
						cout<<"Phuong trinh co nghiem kep la: 	x = "<<-b/(2*a)<<endl;
					}else{
						cout<<"Phuong trinh co hai nghiem phan biet: 	x = "<<(-b-sqrt(dt))/ (2*a) << "\n\t\t\t\t\tx = "<<(-b+sqrt(dt))/ (2*a)<<endl;
					}		
				}
				break;
			case 3: 
				if (a > 0){
					cout<<"Nghiem cua bat phuong trinh la: x > "<< ((c-b)/a)<<endl;
				}else if (a<0){
					cout<<"Nghiem cua bat phuong trinh la: x < "<< ((c-b)/a)<<endl;
				}
				else if (b>c){
					cout<<"Bat phuong trinh vo so nghiem"<<endl;
				}
				else{
					cout<<"Bat phuong trinh vo nghiem"<<endl;
				}
				break;
			default:
				cout<<"Sai cu phap"<<endl;
			}
	}while(flag);
	return 0;
}*/

/*	////nhap x,y tu ban phim...----
int main()
{
	int x, y;
	char toantu;
	cout <<"nhap vao 2 so x, y" << endl;
	cout <<"x = "; cin >> x;
	cout <<"\ny = "; cin >> y;
	cout <<"\nnhap phep toan:";
	cin >> toantu;
switch(toantu)
{
	case'+':
		cout <<"x + y = " << x+y << endl; break;
	case'-':
		cout <<"x - y = " << x-y << endl; break;
	case'*':
		cout <<"x * y = " << x*y << endl; break;
	case'/':
		if(y == 0)
			cout <<"khong thuc hien phep chia!" << endl;
		else
			cout <<"x / y = " << (float)x/y << endl; break;
}
	return 0;
}*/

/*	////viet chuong trinh hien thi 1 menu co cac lua chon de tinh dien tich cua hinh vuong,hcn,hthg,hbh ,in kq ra man---- 
#include<iomanip.h>
int main()
{
	int a, b, c, d;
	int chon;
	cout << setw(60) <<"|**************MENU**************|" << endl;
	cout << setw(60) <<"|1.tinh dien tich hinh vuong     |" << endl;
	cout << setw(60) <<"|2.tinh dien tich hinh chu nhat  |" << endl;
	cout << setw(60) <<"|3.tinh dien tich hinh thang     |" << endl;
	cout << setw(60) <<"|4.tinh dien tich hinh binh hanh |" << endl;
	cout << setw(60) <<"|0.thoat                         |" << endl;
	cout << setw(60) <<"|********************************|" << endl;
	do
	{
		cout <<"hay nhap lua chon 1,2,3,4 hoac 0" << endl; cin >> chon;
		switch(chon)
		{
			case 1:
				cout << setw(60) <<"nhap vao canh hinh vuong"; cin >> a;
				cout << setw(60) <<"dien tich hinh vuong la :" << a*a << endl;
				break;
			case 2:
				cout << setw(60) <<"nhap vao chieu dai hinh chu nhat"; cin >> a;
				cout << setw(60) <<"nhap vao chieu rong hinh chu nhat"; cin >> b;
				cout << setw(60) <<"dien tich hinh chu nhat la : " << a*b << endl;
				break;
			case 3:
				cout << setw(60) <<"nhap vao day lon cua hinh thang"; cin >> a;
				cout << setw(60) <<"nhap vao day nho cua hinh thang"; cin >> b;
				cout << setw(60) <<"nhap vao chieu cao cua hinh thang"; cin >> d;
				cout << setw(60) <<"dien tich cua hinh thang la : " << ((a + b) * d )/2 << endl;
				break;
			case 4:
				cout << setw(60) <<"nhap vao canh day cua hinh binh hanh"; cin >> a;
				cout << setw(60) <<"nhap vao chieu cao cua hinh binh hanh"; cin >> d;
				cout << setw(60) <<"dien tich hinh binh hanh la : " << a*d << endl;
				break;
		} 
	} while(chon!=0);
	return 0; 
} */

/*	////nhap vao 3 so a b c. in ra menu chon thuc hien cac cong viec sau----
	////tinh tong a+b+c.tính tich a*b*c .tim max.tim min----
#include<iomanip.h>
int main(){
int a, b, c, max, min;
int chon; 
	cout << setw(60) <<"|---------menu-----------|" << endl;
	cout << setw(60) <<"|1.tinh tong a+b+c       |" << endl;
	cout << setw(60) <<"|2.tinh tich a*b*c       |" << endl;
	cout << setw(60) <<"|3.tim max               |" << endl;
	cout << setw(60) <<"|4.tim min               |" << endl;
	cout << setw(60) <<"|0.thoat!!!              |" << endl; 
	cout << setw(60) <<"|------------------------|" << endl; 
	do{
		cout <<"nhap lua chon cua ban 1, 2, 3, 4 hoac 0" << endl; cin >> chon;
		switch(chon){
			case 1:
				cout << setw(30) <<"nhap a = "; cin >> a;
				cout << setw(30) <<"nhap b = "; cin >> b;
				cout << setw(30) <<"nhap c = "; cin >> c;
				cout << setw(30) <<"a + b + c = " << a + b + c << endl;
				break;
			case 2:
				cout << setw(30) <<"nhap a = "; cin >> a;
				cout << setw(30) <<"nhap b = "; cin >> b;
				cout << setw(30) <<"nhap b = "; cin >> c;
				cout << setw(30) <<"a * b * c = " << a * b * c << endl;
				break;
			case 3:
				cout << setw(30) <<"nhap a = "; cin >> a;
				cout << setw(30) <<"nhap a = "; cin >> b;
				cout << setw(30) <<"nhap b = "; cin >> c;
			max = a;
				if (max < b) max = b;
				if (max < c) max = c;
					cout << setw(30) << "so lon nhat la:" << max << endl;
					break;
			case 4:
				cout << setw(30) <<"nhap a = "; cin >> a;
				cout << setw(30) <<"nhap a = "; cin >> b;
				cout << setw(30) <<"nhap b = "; cin >> c;
			min = a;
				if(min > b) min = b;
				if(min > c) min = c;
					cout << setw(30) <<"so nho nhat la : " << min << endl;
					break;
		}
	} while(chon!=0);
	return 0; 
}  */ 

/*	////viet chuong trinh nhap vao 3 so nguyen a, b, c. in ra menu lua chon sau----
	////tinh tong a+b+c,tinh tich a*b*c,gpt ax+b=c----	
#include<iomanip.h>
int main(){
	int a, b, c;
	int chon;
		cout << setw(60) <<"*----------menu-----------*" << endl;
		cout << setw(60) <<"*1.tinh tong cua a + b + c*" << endl;
		cout << setw(60) <<"*2.tinh tich cua a*b*c    *" << endl;
		cout << setw(60) <<"*3.giai pt ax+b=c         *" << endl;
		cout << setw(60) <<"*0.thoat!!                *" << endl;
		cout << setw(60) <<"*-------------------------*" << endl;
		do{
			cout << setw(60) <<"nhap lua chon 1, 2, 3, 4, hoac 0 " << endl; cin >> chon;
		switch(chon){
			case 1:
				cout << setw(30) <<"nhap a = "; cin >> a;
				cout << setw(30) <<"nhap b = "; cin >> b;
				cout << setw(30) <<"nhap c = "; cin >> c;
				cout << setw(30) <<"a + b + c = " << a + b + c << endl;
				break;
			case 2:
				cout << setw(30) <<"nhap a = "; cin >> a;
				cout << setw(30) <<"nhap b = "; cin >> b;
				cout << setw(30) <<"nhap b = "; cin >> c;
				cout << setw(30) <<"a * b * c = " << a * b * c << endl;
				break;
			case 3:
				cout << setw(30) <<"nhap a = "; cin >> a;
				cout << setw(30) <<"nhap b = "; cin >> b;
				cout << setw(30) <<"nhap c = "; cin >> c;
				if(a == 0)
					if(b == 0 && c == 0)
					cout <<"pt vo so nghiem" << endl;
					else
						cout <<"pt vo nghiem" << endl;
				else
					cout <<"pt co nghiem x =" <<(float)(c - b) / a << endl;
				break;
		}
		}while(chon!=0);
	return 0;	
} */

/*	////nhap vao 3 so a, b, c nguyen duong.in ra menu chon----
	////giai bpt ax+b>c,giai pt ax*x+bx+c=0,ktra chung co tao thanh tam giac?tam giac do la tam giac gi?----
#include<iomanip.h>
#include<math.h>
int main(){
	int a, b, c, d;
	int chon;
		cout << setw(60) <<"[-----------menu-----------]" << endl;
		cout << setw(60) <<"[1.giai bpt ax + b > c     ]" << endl;
		cout << setw(60) <<"[2.giai pt ax*x +bx + c = 0]" << endl;
		cout << setw(60) <<"[3.kiem tra tam giac       ]" << endl;
		cout << setw(60) <<"[0.thoat!!                 ]" << endl;
		cout << setw(60) <<"[--------------------------]" << endl;
		do{
			cout << setw(30) <<"nhap lua chon cua ban 1, 2, 3, hoac 0" << endl; cin >> chon;
		
		switch(chon){
			case 1:
				cout << setw(30) <<"nhap a = "; cin >> a;
				cout << setw(30) <<"nhap b = "; cin >> b;
				cout << setw(30) <<"nhap c = "; cin >> c;
				if(a == 0)
						if(b >c)
							cout <<"bpt vo so nghiem" << endl;
						else
							cout <<"bpt vo nghiem" << endl;
				else
						if(a > 0)
							cout <<"bpt co nghiem x<" << (float)(c-b)/a << endl;
						else
							cout <<"bpt co nghiem x>" << (float)(c-b)/a << endl;
							break;
			case 2:
				cout << setw(30) <<"nhap a = "; cin >> a;
				cout << setw(30) <<"nhap b = "; cin >> b;
				cout << setw(30) <<"nhap c = "; cin >> c;
				if(a == 0)
					if(b == 0)
						if(c == 0)
							cout <<"pt vo so nghiem" << endl;
						else 
							cout <<"pt vo nghiem" << endl;
					else 
						cout <<"pt co 1 nghiem x = " << (float)-c/b << endl;
				else //(a != 0)
					d = b*b - 4*a*c;
					if(d < 0)
						cout <<"pt vo nghiem" << endl;
					else 
						if(d == 0)
						cout <<"pt co nghiem x = " << -b/(2*a) << endl;
							else
								{
								cout <<"pt co 2 nghiem" << endl;
								cout <<"x1 = " << (-b - sqrt(d) / (2*a)) << endl;
								cout <<"x2 = " << (-b + sqrt(d) / (2*a)) << endl;
								}
								break;
			case 3:
				cout << setw(30) <<"nhap a = "; cin >> a;
				cout << setw(30) <<"nhap b = "; cin >> b;
				cout << setw(30) <<"nhap c = "; cin >> c;
				if((a + b > c) && (b + c > a) && (a + c > b))
				{
					cout <<"thoa man 3 canh la tam giac" << endl;
						if((a == b) && (b == c))
							cout << "do la tam giac deu" << endl;
						else
							if((a == b) || (a == c) || (b == c))
								cout <<"do la tam giac can" << endl;
							else
								if((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + c*c == b*b))
									cout <<"do la tam giac vuong" << endl;
								else
									cout <<"do la tam giac thuong" << endl;
			}
				else
					cout << "khong thoa man la 3 canh tam giac" << endl;
					break;
		}
	}while(chon != 0);
	return 0;
} */ 

/*	////viet chuong trinh cua 1 so nguyen co hai chu so.hay in ra cach doc cua so nguyen nay----
#include<math.h>
int   main()
{
	int n, a, b;
  //vong do ...while su dung de kiem tra viec nhap du lieu (so co 2 chu so)
  do 
  {  cout<<"Nhap vao mot so co 2 chu so"<<endl;
     cin >> n;
     if (n<10 || n>99)		//so nhap vao khong phai 2 chu so
	 	cout<<"Ban phai nhap so co 2 chu so. Nhap lai!"<<endl;
   } while (n<10 || n>99);
   a = n/10;		//a la hang chuc    
   b = n%10;		//b la hang don vi
   switch (a)
	{
    	case 1: cout<<"Muoi"; break;
 		case 2: cout<<"Hai muoi "; break;
		case 3: cout<<"Ba muoi "; break;
		case 4: cout<<"Bon muoi "; break;
		case 5: cout<<"Nam muoi "; break;
		case 6: cout<<"Sau muoi "; break;
		case 7: cout<<"Bay muoi "; break;
		case 8: cout<<"Tam muoi "; break;
		case 9: cout<<"Chin muoi "; break;
	};
 	switch (b)
	{
    	case 1: cout<<"mot"<<endl; break;
 		case 2: cout<<"hai"<<endl; break;
		case 3: cout<<"ba"<<endl; break;
		case 4: cout<<"bon"<<endl; break;
		case 5: cout<<"nam"<<endl; break;
		case 6: cout<<"sau"<<endl; break;
		case 7: cout<<"bay"<<endl; break;
		case 8: cout<<"tam"<<endl; break;
		case 9: cout<<"chin"<<endl; break;
	};
	cout<<endl;
return 0;
} */

/*	////viet chuong trinh in ra menu thuc hien cac cong viec sau----
	////tinh dien tic tam giac,hcn,hv,htron,hbh----
#include<iomanip.h>
#include<math.h>
int main()
{
	int a, b, c, r, h;
	int chon;
		cout << setw(60) <<"*----------menu-------------------*" << endl;
		cout << setw(60) <<"*1.tinh dien tich tam giac        *" << endl;
		cout << setw(60) <<"*2.tinh dien tich hinh chu nhat   *" << endl;
		cout << setw(60) <<"*3.tinh dien tich hinh vuong      *" << endl;
		cout << setw(60) <<"*4.tinh dien tich hinh thang      *" << endl;
		cout << setw(60) <<"*5.tinh dien tich hinh tron       *" << endl;
		cout << setw(60) <<"*6.tinh dien tich hinh binh hanh  *" << endl;
		cout << setw(60) <<"*0.thoat!!!                       *" << endl;
		cout << setw(60) <<"*---------------------------------*" << endl;
	do{
		cout << setw(30) <<"nhap lua chon 1, 2, 3, 4, 5, 6, hoac 0 : " << endl; cin >> chon;
		switch(chon){
			case 1:
				cout <<"nhap canh tam giac a ="; cin >> a;
				cout <<"nhap chieu cao h ="; cin >> h;
				cout <<"dien tich tam giac la : " << (a*h)/2 << endl; 
				break;
			case 2:
				cout <<"nhap chieu dai hcn a ="; cin >> a;
				cout <<"nhap chieu rong hcn b ="; cin >> b;
				cout <<"dien tich hcn la : " << a*b << endl;
				break;
			case 3:
				cout <<"nhap canh hv a ="; cin >> a;
				cout <<"dien tich hinh vuong la : " << a*a << endl;
				break;
			case 4:
				cout <<"nhap day lon a ="; cin >> a;
				cout <<"nhap day be b ="; cin >> b;
				cout <<"nhap chieu cao hinh thang h ="; cin >> h;
				cout <<"dien tich hinh thang la : " << ((a+b)*h)/2 << endl;
				break;
			case 5:
				cout <<"nhap ban kinh r = "; cin >> r;
				cout <<"dien tich hinh tron la : " << 3.14*r*r << endl;
				break; 
			case 6:
				cout <<"nhap canh hinh thang a ="; cin >> a;
				cout <<"nhap chieu cao h ="; cin >> h;
				cout <<"dien tich hinh binh hanh la : " << a*h << endl;
				break; 
		 }
	} while(chon!=0);
	return 0; 
}	*/


	


	