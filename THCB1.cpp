#include<iostream.h>

/*{
	////nhap vao 3 so a b c in ra max min----
//c1 
	int main()
	int a, b, c, max, min;
	//nhap du lieu 
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c; 
	//tim so lon nhat
	max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	cout << "so lon nhat la:" << max << endl;
	//tim so lon nhat
	min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	cout << "so nho nhat la: "<< min << endl; 
	return 0; 
} */
/*{
//c2
	int main()
	int a, b, c, max, min;
	//nhap du lieu
	cout << " nhap vao 3 so nguyen" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	//tim so lon nhat,nho nhat
	if(a > b)
		if(b > c){
			max = a; min = c;
		}
		else
			if(a > c){
				max = a; min = b;
			}
			else{
				max = c; min = b;
			}
	else
		if(a > c){
			max = b; min = c;
		}
		else
			if(b > c){
				max = b; min = a;
			}
			else{
				max = c; min = a;
			}
	cout << "so lon nhat la:"<<max<<endl;
	cout << "so nho nhat la:"<<min<<endl;
	return 0;
}*/

/**{
	////nhap tuoi va in ra ket qua neu tuoihs do khong du d.k vao 10----
	////biet tuoi lop 10 la 16----
	int tuoi;
	if(tuoi == 16)
	{
		cout << "tuoi cua hoc sinh la:" << tuoi << "tuoi." << endl;
		cout << "hoc sinh du tuoi vao lop 10!" << endl;
	}
	else
	{
		cout << "tuoi cua hoc sinh la:" << tuoi <<"tuoi." << endl;
		cout << "hoc sinh khong du tuoi vao lop 10!" << endl;
	}
	return 0;
}**/

/*	////viet chuong trinh giai phuong trinh bac nhat----
	//giai pt ax+b=0
int main()
	{
		int a, b;
		//nhap du lieu
		cout <<" nhap vao 2 he so a, b" << endl;
		cout <<"a = "; cin >> a;
		cout <<"b = "; cin >> b;
		if(a == 0)
			if(b == 0)
				cout <<"pt vo so nghiem" << endl;
			else
				cout <<"pt vo nghiem" << endl;
		else
			cout <<"pt co nghiem x =" <<(float)-b / a << endl;
	return 0;
}*/
	
/*	////giai bat phuong trinh ax+b<c----
int main()
{
	int a, b, c;
	//nhap du lieu
	cout <<"nhap vao 3 he so a, b, c" << endl;
	cout <<"a = "; cin >> a;
	cout <<"\nb = "; cin >> b;
	cout <<"\nc = "; cin >> c;
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
	return 0;
}*/

/*	////giai phuong trinh ax^2+bx+c=0----
#include<math.h>
int main()
{
	int a, b, c;
	float d;
	//nhap du lieu
	cout <<"nhap vao he 3 so a, b, c" << endl;
	cout <<"a = "; cin >> a;
	cout <<"b = "; cin >> b;
	cout <<"c = "; cin >> c;
	if(a == 0)
		if(b == 0)
			if(c == 0)
				cout <<"pt vo so nghiem" << endl;
			else cout <<"pt vo nghiem" << endl;
		else cout <<"pt co 1 nghiem x = " << (float)-c/b << endl;
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
	return 0;
}*/

/*	////viet chuong trinh nhap vao 3 so nguyen a,b,c.ktra xem co tao thanh 3 canh tam giac kh.co thi do la tam gi----
	//kiem tra tam giac
#include<math.h>
int main()
{
	int a, b, c;
	//nhap du lieu
	cout << "nhap vao 3 so nguyen duong a, b, c" << endl;
	cout << "a = "; cin >> a;
	cout << "\nb = "; cin >> b;
	cout << "\nc = "; cin >> c;
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
	return 0;
}*/
	
/**	////tinh tien dien----
int main()
{
	int cs;
	float tiendien;
	do{
		cout <<"nhap vao chi so dien tieu thu" << endl;cin >> cs ;
		if(cs <= 0) 
		cout <<"nhap lai!";}
	while(cs > 0);
		if(cs <= 100)
			tiendien = cs*500;
		else
			tiendien = 100*500 + (cs - 100)*800;
		cout <<"\nso tien dien ho do phai tra la:" << tiendien << endl;
		return 0;
}**/

/*	////nhap diem toan li hoa.tinh diem trung binh----
int main()
{
	float a, b, c, dtb;
	cout <<"nhap diem toan : ";
	cin >> a;
	cout <<"nhap diem li : ";
	cin >> b;
	cout <<"nhap diem hoa : ";
	cin >> c;
	dtb = ((a*4) + (b*3) + (c*2)) / 9;
	if(dtb >= 9.0)
		cout <<"xep loai xuat sac" << endl;
	else
		if(dtb >= 8.0)
			cout <<"xep loai gioi" << endl;
		else 
			if(dtb >= 6.5)
				cout <<"xep loai kha" << endl;
			else
					if(dtb >= 5.0)
						cout <<"xep loai trung binh" << endl;
					else
						cout <<"xep loai yeu" << endl;	
	return 0;
}*/

/*	////Tinh hoa hong duoc huong cua cua hang A----

int main()
{	float hh, ds;
	cout<<"Nhap vao doanh so cua cua hang A";cin>>ds;
	if (ds <= 100) 
		hh = ds*5/100;
	else
		if (ds <= 300)
			hh =  ds*10/100;
		else 
			hh = ds*20/100;
	cout<<"\nHoa hong cua cty A la:"<<hh<<endl;	
	return 0;
}*/	

	 