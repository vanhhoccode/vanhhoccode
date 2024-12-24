#include<bits/stdc++.h>

using namespace std;

class Date {
	private:
		int d,m,y;
	public:
		Date(){
			d = 0;
			m = 0;
			y = 0;
		}
		int getDay()
		{
			return d;
		}
		int getMonth()
		{
			return m;
		}
		int getYear()
		{
			return y;
		}
		Date(int d1,int m1,int y1){
			this->d = d1;
			this->m = m1;
			this->y = y1;
		}
		~Date(){
			d = 0;
			m = 0;
			y = 0;
		}
		void nhap();
		void xuat();
		Date operator ++(int);
		Date operator --(int);	
};

Date Date::operator ++(int){
	Date kq;
	kq.d = getDay() + 1;
	kq.m = getMonth();
	kq.y = getYear();
	if((getMonth() == 4) || (getMonth() == 6) || (getMonth() == 9) || (getMonth() == 11)){
		if(kq.d > 30){
			kq.d = 1;
			kq.m = getMonth() + 1;
		}
		else
		{
			kq.d = getDay() + 1;
		}
	}
	if(getMonth() == 12){
		if(kq.d > 30){
			kq.d = 1;
			kq.m = 1;
			kq.y = getYear() + 1;
		}
		else
		{
			kq.d = getDay() + 1;
		}
	}
	else
	{
		if(kq.d > 31){
			kq.d = 1;
			kq.m = 1;
			kq.y = getYear() + 1;
		}
		else
		{
			kq.d = getDay() + 1;
		}
	}
	return kq;	
}

	void Date::nhap(){
		do
		{
			cout << "Nhap ngay:"; cin >> d;
		}
		while(d < 0 || d > 31);
		do
		{
			cout << "Nhap thang:"; cin >> m;
		}
		while(m < 0 || m > 12);
		do
		{
			cout << "Nhap nam:"; cin >> y;
		}while(y < 0 || y > 9999);
		
	}
	void Date::xuat(){
		cout << d << "/" << m << "/" << y;
	}

int main(){
	Date ngay;
	ngay.nhap();
	ngay.xuat();
	cout << "\n Ngay tiep theo:"; ngay++.xuat();
	return 0;
}	
	
