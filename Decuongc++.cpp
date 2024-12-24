#include<bits/stdc++.h>

using namespace std;
//133 end bai 1 
//262 end bai 2
//428 end bai 6
/*int UCLN(int a,int b){
	if(a == 0){
		return b;
	}else if(b == 0){
		return a;
	}
	while(a != b){
		if(a > b){
			a = a - b;
		}else
			b = b - a;
	}
	return a;
}

class PS{
	protected:
		int ts,ms;
	public:	
	PS(){
		ts = 0;
		ms = 1;
	}
	PS(int ts1,int ms1){
		this->ts = ts1;
		this->ms = ms1;
	}
	~PS(){
		ts = 0;
		ms = 1;
	}
	void nhap();
	void xuat();
	PS rutgon();
	PS cong(PS ps2);
	PS hieu(PS ps2);
	PS nhan(PS ps2);
	PS chia(PS ps2);		
};
PS PS::cong(PS ps2){
	PS tong;
	tong.ts = ts*ps2.ms + ms*ps2.ts;
	tong.ms = ms*ps2.ms;
	return tong;
}
PS PS::hieu(PS ps2){
	PS hieu;
	hieu.ts = ts*ps2.ms + ms*ps2.ts;
	hieu.ms = ms*ps2.ms;
	return hieu;
}
PS PS::nhan(PS ps2){
	PS nhan;
	nhan.ts = ts*ps2.ts;
	nhan.ms = ms*ps2.ms;
	return nhan;
}
PS PS::chia(PS ps2){
	PS chia;
	chia.ts = ts*ps2.ms;
	chia.ms = ms*ps2.ts;
	return chia;
}
void PS::nhap(){
	cout << "Nhap tu so :"; cin >> ts;
	cout << "Nhap mau so:"; cin >> ms;
}
PS PS::rutgon(){
	PS rg;
	rg.ts = ts / UCLN(ts,ms);
	rg.ms = ms / UCLN(ts,ms);
	return rg;
}

void PS::xuat(){
	cout << ts << "/" << ms << endl;
}
class PS2 : public PS{
	public:
		PS2 operator = (PS2 ps);
		int operator > (PS2 ps);
		int operator < (PS2 ps);
		
};
PS2 PS2::operator = (PS2 ps){
	ts = ps.ts;
	ms = ps.ms;
	return *this;
}
int PS2::operator >(PS2 ps){
	if(ts * ps.ms > ps.ts * ms)
	return 1;
	else
	return 0;
}
int PS2::operator < (PS2 ps){
	if(ts * ps.ms < ps.ts * ms)
	return 1;
	else
	return 0;
}

int main(){
	PS2 ps2[5];
	PS2 max;
	for(int i = 0;i < 5;i++){
		ps2[i].nhap();
	}
	cout << "Phan phan so lon nhat la:";
	max = ps2[0];
	for(int i = 1;i < 5;i++){
		if(max < ps2[i]){
			max = ps2[i]; 
		}
	}
	max.xuat();
	cout << "Sap xep phan so theo thu tu tang dan:" << endl;
	for(int i = 0;i < 4;i++){
		for(int j = i + 1;j < 5;j++){
			if(ps2[i] > ps2[j]){
				swap(ps2[i],ps2[j]);
			}
		}
	}
	for(int i = 0;i < 5;i++){
		ps2[i].xuat();
	}
}*/

/////////////////////////////////////////////////////////
/*class SoPhuc{
	protected:
		int pt,pa;
	public:
		SoPhuc(){
			pt = 0;
			pa = 0;
		}
		SoPhuc(int pt1,int pa1){
			pt = pt1;
			pa = pa1;
		}
		~SoPhuc(){
			pt = 0;
			pa = 0;
		}
		friend istream& operator >> (istream &is,SoPhuc &sp);
		friend ostream& operator << (ostream &os,SoPhuc sp);
		float module();
		SoPhuc operator + (SoPhuc sp);
		SoPhuc operator - (SoPhuc sp);
		SoPhuc operator * (SoPhuc sp);
		SoPhuc operator / (SoPhuc sp);
};
	SoPhuc SoPhuc::operator + (SoPhuc sp){
		SoPhuc tong;
		tong.pt = pt + sp.pt;
		tong.pa = pa + sp.pa;
		return tong;
	}
	SoPhuc SoPhuc::operator - (SoPhuc sp){
		SoPhuc hieu;
		hieu.pt = pt + sp.pt;
		hieu.pa = pa + sp.pa;
		return hieu;
	}
	SoPhuc SoPhuc::operator * (SoPhuc sp){
		SoPhuc nhan;
		nhan.pt = (pt*sp.pt - pa*sp.pa);
		nhan.pa = (pt*sp.pa + pa*sp.pt);
		return nhan;
	}
	SoPhuc SoPhuc::operator /(SoPhuc sp) {
    SoPhuc chia;

    // Tính module bình phuong c?a s? ph?c `sp`
    double mau = sp.pt * sp.pt + sp.pa * sp.pa;

    // Ki?m tra chia cho 0 d? tránh l?i
    if (mau == 0) {
        throw std::invalid_argument("Không th? chia cho s? ph?c có module b?ng 0.");
    }

    // Tính ph?n th?c và ph?n ?o
    chia.pt = (pt * sp.pt + pa * sp.pa) / mau; // Ph?n th?c
    chia.pa = (pa * sp.pt - pt * sp.pa) / mau; // Ph?n ?o

    return chia;
}

	istream& operator >> (istream &is,SoPhuc &sp){
		cout << "Nhap phan thuc: ";
		is >> sp.pt;
		cout << "Nhap phan ao: ";
		is >> sp.pa;
		return is;
	}
	ostream& operator << (ostream &os,SoPhuc sp){
		os << sp.pt;
		if(sp.pa > 0){
			os << " + " << sp.pa << "i" << endl;
		}else
			os << sp.pa << "i" << endl;
		return os;	
	}
	float SoPhuc::module(){
		return sqrt(pow(pt,2) + pow(pa,2));
	}
class SoPhuc2 : public SoPhuc{
	public:
		SoPhuc2 operator = (SoPhuc2 sp2);
		int operator > (SoPhuc2 sp2);
		int operator < (SoPhuc2 sp2);
};
	SoPhuc2 SoPhuc2::operator = (SoPhuc2 sp2){
		pt = sp2.pt;
		pa = sp2.pa;
		return *this;
	}
	int SoPhuc2::operator > (SoPhuc2 sp2){
		if(module() > sp2.module()){
			return 1;
		}else
			return 0;	
	}
	int SoPhuc2::operator < (SoPhuc2 sp2){
		if(module() < sp2.module()){
			return 1;
		}else
			return 0;	
	}
	
 int main(){
 	SoPhuc2 sp2[5];
 	for(int i = 0;i < 5;i++){
 		cin >> sp2[i];
	 }
	 cout << "So phuc lon nhat:";
	 SoPhuc2 max = sp2[0];
	 for(int i = 1;i < 5;i++){
	 	if(max.module() < sp2[i].module()){
	 		max = sp2[i];
		 }
	 }
	 cout << max << endl;
	 cout << "Sap xep day so phuc theo chieu tang dan cua module:";
	 for(int i = 0;i < 5;i++){
	 	for(int j = i + 1;j < 5;j++){
	 		if(sp2[i].module() > sp2[j].module()){
	 		swap(sp2[i],sp2[j]);
	 		}
		 }
	 }
	 for(int i = 0;i < 5;i++){
	 	cout << sp2[i];
	 }
 	return 0;
 }*//////////////////////////////////////////////////////////////////////////////
 
 
 ///Bai 4 LOP TIME
 
 /*class Times{
 	public:
 		int h,m,s;
 	Times(){
 		h = 0;
 		m = 0;
 		s = 0;
	 }
	 Times(int h1,int m1,int s1){
	 	h = h1;
	 	m = m1;
	 	s = s1;
	 }
	 ~Times(){
	 	h = 0;
	 	m = 0;
	 	s = 0;
	 }
	 friend istream& operator >> (istream &is,Times &t);
	 friend ostream& operator << (ostream &os,Times t);
	 Times operator ++ ();
	 //Times operator -- (Times tm);
 };
 	Times Times::operator ++ (){
 		++s;
 		if(s == 60){
 			s = 0;
			 ++m;	
		 }
		 if(m == 60){
		 	m = 0;
		 	++h;
		 }
		if(h == 24){
			h = 0;
		}
	return *this;
}
 
 	istream& operator >> (istream &is,Times &t){
 		cout << "Nhap gio:";
 		is >> t.h;
 		cout << "Nhap phut:";
 		is >> t.m;
 		cout << "Nhap giay:";
 		is >> t.s;
 		return is;
	 }
	 ostream& operator << (ostream &os,Times t){
	 	if(t.h < 10){
	 		os << 0 << t.h << ":";
		 }else
		 	os << t.h << ":";
		 if(t.m > 10){
		 	os << t.m << ":";
		 }else
		 	os << 0 << t.m << ":";
		 if(t.s > 10){
		 	os << t.s << endl;
		 }else
		 	os << 0 << t.s << endl;	
	 	return os;
	 }
	 
	int main(){
		Times t1;
		cin >> t1;
		cout << t1;
		cout << "Sau khi tang 1 giay:";
		++t1;
		cout << t1;
		return 0;
	}*/
	////////////////////////////////////////////////////////
	//Lop Ma tran
	/*class matrix
	{
		private:
			int **x;
			int n,m;
		public:
			int getN(){
				return n;
			}
			int getM(){
				return m;
			}
			int** getX(){
				return x;
			}
			matrix(){
				n = 0;
				m = 0;
			}
			matrix(int n1,int m1) : n(n1),m(m1)
			{
				x = new int*[n];
				for(int i = 0;i < n;i++)
				{
					x[i] = new int[m]{0};	
				}
			}
			void nhap(){
				for(int i = 0;i < n;i++)
				for(int j = 0;j < m;j++)
				{
					cout << "x[" << i << "," << j << "] =";
					cin >> x[i][j];
				}
			}
			
			void xuat()
			{
				for(int i = 0;i < n;i++)
				{
					for(int j = 0;j < m;j++)
						cout << x[i][j] << " ";
						cout << "\n";	
				}
			}
			
			friend matrix cong(matrix &a,matrix &b);	
	};
	matrix cong(matrix &a,matrix &b){
		matrix tong(a.n,a.m);
		if((a.n != b.n) || (a.m != b.m)){
			cout << "Hai ma tran khong cung cap:";
			return tong;
		}
		for(int i = 0;i < a.n;i++){
			for(int j = 0;j < a.m;j++){
				tong.x[i][j] = a.x[i][j] + b.x[i][j];
			}
		}
		return tong;	
	}
	int tongCot(matrix mt,int k){
		int sum = 0;
		for(int i = 0;i < mt.getN();i++)
			sum += mt.getX()[i][k];
		
		return sum;	
	}
	int main(){
		int n,m;
		cout << "Nhap so dong n "; cin >> n;
		cout << "Nhap so cot m "; cin >> m;
		matrix a(n,m),b(n,m),c;
		cout << "Nhap ma tran a:"; a.nhap();
		cout << "Nhap ma tran b:"; b.nhap();
		cout << "Ma tran A:" << endl;
		a.xuat();
		cout << "Ma tran B:" << endl;
		b.xuat();
		cout << "Tong cot thu hai cua ma tran A:";
		cout << tongCot(a,2) << endl;
		cout << "Tong hai ma tran : \n";
		c = cong(a,b);
		c.xuat();
		return 0;
	}/*////////////////////////////
	
	class ThiSinh{
		private:
			string mts;
			string hoten;
			float dt,dl,dh;
		public:
			void nhap();
			void xuat();
			float tongDiem();			
	};
	void ThiSinh::nhap(){
		cout << "Ma thi sinh:";
		cin >> mts;
		cin.ignore();
		cout << "Nhap ho ten:";
		getline(cin,hoten);
		cout << "Nhap diem toan:";
		cin >> dt;
		cout << "Nhap diem ly:";
		cin >> dl;
		cout << "Nhap diem hoa:";
		cin >> dh;
		cin.ignore();
	}
	void ThiSinh::xuat(){
		cout << "Ma thi sinh" << mts << " " << "Ho ten" << hoten << endl;
		cout << "Diem toan:" << dt << " " << "Diem ly:"  << dl << " " << "Diem hoa:" << dh << endl;
	}
	float ThiSinh::tongDiem(){
		float tongD = dt + dl + dh;
		return tongD;
	}
int main(){
	int n;
	cout << "Nhap so luong thi sinh: ";
	cin >> n;
	/*ThiSinh** ds = new ThiSinh*[n];
	for(int i = 0;i < n;i++){
		ds[i] = new ThiSinh();
		ds[i]->nhap();
	}
	ThiSinh* tsmax = ds[0];
	for(int i = 0;i < n;i++){
		if(ds[i]->tongDiem() > tsmax->tongDiem()){
			tsmax = ds[i];
		}
	}
	cout << "Thi sinh co diem cao nhat:\n";
	tsmax->xuat();
	for (int i = 0; i < n; ++i) {
        delete ds[i];
    }
    delete[] ds;*/
    ThiSinh *ds = new ThiSinh[n];
    for(int i = 0;i < n;i++){
    	ds[i].nhap();
	}
	delete[] ds;
	return 0;
}	
	
	
