 #include<bits/stdc++.h>

using namespace std;
////////////////////Phan So 154
///////////////////sophucoverload.cpp
//////////////////Time 328
/*int UCLN(int a,int b){
	while(b != 0){
		int tmp = b;
		b = a % b;
		a = tmp;
	}
	return a;
}

class PhanSo{
	protected:
		int tuso;
		int mauso;
	public:
		int getTuso(){
			return tuso;
		}
		int getMauso(){
			return mauso;
		}
		PhanSo(){
			tuso = 0;
			mauso  = 1;
		}
		PhanSo(int tuso1,int mauso1){
			this->tuso = tuso1;
			this->mauso = mauso1;
		}
		~PhanSo(){
			tuso = 0;
			mauso = 1;
		}
		void nhap();
		void xuat();
		PhanSo rutgon();
		PhanSo operator + (PhanSo ps2);
		PhanSo operator - (PhanSo ps2);
		PhanSo operator * (PhanSo ps2);
		PhanSo operator / (PhanSo ps2);		
};
	void PhanSo::nhap(){
		cout << "Nhap tu so:";
		cin >> tuso;
		cout << "Nhap mau so:";
		cin >> mauso;
	}
	void PhanSo::xuat(){
		cout << tuso << "/" << mauso << endl;
	}
	PhanSo PhanSo::rutgon(){
		int c = UCLN(tuso,mauso);
		this->tuso = tuso / c;
		this->mauso = mauso / c;
		return *this;
	}
	
	PhanSo PhanSo::operator +(PhanSo ps2){
		PhanSo pstong;
		pstong.tuso = tuso*ps2.mauso + ps2.tuso * mauso;
		pstong.mauso = mauso * ps2.mauso;
		return pstong;
	}
	
	PhanSo PhanSo::operator -(PhanSo ps2){
		PhanSo pshieu;
		pshieu.tuso = tuso*ps2.mauso + ps2.tuso * mauso;
		pshieu.mauso = mauso * ps2.mauso;
		return pshieu;
	}
	PhanSo PhanSo::operator *(PhanSo ps2){
		PhanSo pstich;
		pstich.tuso = tuso * ps2.tuso;
		pstich.mauso = mauso * ps2.mauso;
		return pstich;
	}
	PhanSo PhanSo::operator /(PhanSo ps2){
		PhanSo psthuong;
		psthuong.tuso = tuso * ps2.mauso;
		psthuong.mauso = mauso * ps2.tuso;
		return psthuong;
	}

	class PhanSo2 : public PhanSo{
		public:
			void operator = (PhanSo2 ps2);
			int operator > (PhanSo2 ps2);
			int operator < (PhanSo2 ps2);
			PhanSo2 psmax(PhanSo2 ps[]);
			PhanSo2 psmin(PhanSo2 ps[]);
	};
	void PhanSo2::operator =(PhanSo2 ps2){
		this->tuso = ps2.tuso;
		this->mauso = ps2.mauso;
	}
	PhanSo2 PhanSo2::psmax(PhanSo2 ps[3]){
		PhanSo2 psmax = ps[0];
		for(int i = 1;i < 3;i++){
			if(psmax < ps[i]){
				psmax = ps[i];
			}
		}
		return psmax;
	}
	PhanSo2 PhanSo2::psmin(PhanSo2 ps[3]){
		PhanSo2 psmin =  ps[0];
		for(int i = 1;i < 3;i++){
			if(psmin > ps[i]){
				psmin = ps[i];
			}
		}
		return psmin;
	}
	int PhanSo2::operator >(PhanSo2 ps2) {
    return (tuso * ps2.mauso > ps2.tuso * mauso);
}

int PhanSo2::operator <(PhanSo2 ps2) {
    return (tuso * ps2.mauso < ps2.tuso * mauso);
}
int sapxep(int l, int r, PhanSo2 ps[3]) {
    int l1 = l;
    int r1 = r;
    int idx = (l + r) / 2;
    PhanSo2 pivot = ps[idx];  // S? d?ng ph?n t? gi?a làm pivot
    while (l <= r) {
        // S? d?ng các toán t? so sánh dã d?nh nghia
        while (ps[l] < pivot) l++;
        while (ps[r] > pivot) r--;
        
        if (l <= r) {
            swap(ps[l], ps[r]);
            l++;
            r--;
        }
    }
     if(l1 < r) sapxep(l1, r, ps); // S?p x?p ph?n bên trái
     if(l < r1) sapxep(l, r1, ps); // S?p x?p ph?n bên ph?i
    return 0;
}

int main(){
	PhanSo2 ps[3];
	for(int i = 0;i < 3;i++){
		ps[i].nhap();
	}
	sapxep(0,2,ps);
	for(int i = 0;i < 3;i++){
		ps[i].xuat();
	}
}*/

/*class dathuc{
	protected:
		int n;
		int a[10];
	public:
		void nhap();
		void xuat();
		dathuc operator + (dathuc dt);
		dathuc operator - (dathuc dt);	
};

void dathuc::nhap(){
	cout << "Nhap bac da thuc";
	cin >> n;
	cout << "\nNhap he so cho da thuc"; 
	for(int i = 0;i <= n;i++){
		cout << "\na[" << i << "]:"; 
		cin >> a[i];
	}
}

void dathuc::xuat(){
	cout << a[n] << "x^" << n;
	for(int i = n-1;i >= 1;i--){
		if(a[i] > 0){
			cout <<" + "<< a[i] << "x^" << i; 
		}else{
			cout << a[i] << "x^" << i;
		}
	}
	if(a[0] > 0){
		cout << "+" << a[0];
	}else{
		cout << a[0];
	}
}
dathuc dathuc::operator + (dathuc dt2){
	dathuc t;
	if(n > dt2.n){
	t.n = n;
	for(int i = 0;i <= dt2.n;i++){
		t.a[i] = a[i] + dt2.a[i];
	}
	for(int i = dt2.n + 1;i <= n;i++){
		t.a[i] = a[i];
		}
	}else{
		t.n = dt2.n;
		for(int  i = 0;i <= n;i++){
			t.a[i] = a[i] - dt2.a[i];
		}
		for(int i = n + 1;i < dt2.n;i++){
			t.a[i] = dt2.a[i];
		}
	}
	return t;
}

class dathuc2 : public dathuc{
	public:
		bool operator > (dathuc2 dt2);
		bool operator < (dathuc2 dt2);
		dathuc2 dtmin(dathuc2 dt[9]);
		dathuc2 dtmax(dathuc2 dt[9]);
};

bool dathuc2::operator >(dathuc2 dt2){
	if(n > dt2.n){
		return true;
	}else if(dt2.n ==  n){
		for(int)
	}
}

int main(){
	dathuc dt,dt2;
	dt.nhap();
	dt2.nhap();
	dt.xuat();
	cout << endl;
	dt2.xuat();
	cout << endl;
	dathuc dt3;
	dt3 = dt + dt2;
	cout << "Tong hai da thuc:" << endl;
	dt3.xuat();
	return 0;
}*/

/*class Time{
	protected:
		int h,m,s;
	public:
		Time(){
			h = 0;
			m = 0;
			s = 0;
		}
		Time(int h1,int m1,int s1){
			h = h1;
			m = m1;
			s = s1;
		}
		~Time(){
			h = 0;
			m = 0;
			s = 0;
		}
		void nhap(){
			cout << "Nhap gio:";
			cin >> h;
			cout << "Nhap phut:";
			cin >> m;
			cout << "Nhap giay:";
			cin >> s;
		}
		void xuat(){
			cout << h << ":" << m << ":" << s << endl;
		}
		Time operator ++ (int plus){
			s += plus;
			return *this;
		}
		Time operator -- (int plus){
			s -= plus;
			return *this;
		}
		/*Time chuanhoa(){
			if(s >= 60){
				s = s - 60;
				m++;
			}
			if(m >= 60){
				m = m - 60;
				h++;
			}
			if(h > 23){
				h = h - 24;
			}
			return *this;
		}
	Time chuanhoa() {
    // N?u giây âm ho?c vý?t quá 60
    if (s < 0 || s >= 60) {
        m += s / 60; // Chuy?n ð?i giây thành phút
        s = (s % 60 + 60) % 60; // Ði?u ch?nh giá tr? giây v? [0, 59]
    }
    
    // N?u phút âm ho?c vý?t quá 60
    if (m < 0 || m >= 60) {
        h += m / 60; // Chuy?n ð?i phút thành gi?
        m = (m % 60 + 60) % 60; // Ði?u ch?nh giá tr? phút v? [0, 59]
    }
    
    // N?u gi? âm ho?c vý?t quá 24
    if (h < 0 || h > 23) {
        h = (h % 24 + 24) % 24; // Ði?u ch?nh giá tr? gi? v? [0, 23]
    }
    
    return *this;
}

				
};

int main(){
	Time t1;
	t1.nhap();
	t1.operator ++(1);
	t1.chuanhoa().xuat();
	return 0;
}*/

/*class date{
	protected:
		int d,m,y;
	public:
		date(){
			d = 0;
			m = 0;
			y = 0;
		}
		date(int d1,int m1,int y1){
			d = d1;
			m = m1;
			y = y1;
		}
		~date(){
			d = 0;
			m = 0;
			y = 0;
		}
		int getDay(){
			return d;
		}
		int getMonth(){
			return m;
		}
		int getYear(){
			return y;
		}
		void nhap();
		void xuat();
		date operator ++ (int);	
};
	date date::operator ++(int) {	
     // Luu tr? giá tr? hi?n t?i
    d++; // Tang ngày
    if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) {
        d = 1;
        m++;
    } else if (m == 2) {
        bool isLeapYear = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
        if ((isLeapYear && d > 29) || (!isLeapYear && d > 28)) {
            d = 1;
            m++;
        }
    } else if (d > 31) {
        d = 1;
        m++;
    }
    if (m > 12) {
        m = 1;
        y++;
    }
    return *this; // Tr? v? giá tr? cu
}

	void date::nhap(){
		do{
		cout << "Nhap ngay:";
		cin >> d;
		}	
		while(d <  0 || d > 31);
		do{
		cout << "Nhap thang:";
		cin >> m;
		}while(m < 0 || m > 12);
		do{
		cout << "Nhap nam:";
		cin >> y;
		}
		while(y < 0 || y > 9999);
	}

	void date::xuat(){
		cout << d << "/" << m << "/" << y << endl;
	}
	

int main(){
	date d1;
	d1.nhap();
	d1.xuat();
	d1++;
	d1.xuat();
	
	
	return 0;
}
/*
//matrix
class matrix{
	protected:
		int **x;
		int n,m;
	public:
		matrix(){
			n = 0;
			m = 0;
		}
		int getN(){
			return n;
		}
		int getM(){
			return m;
		}
		int **getX(){
			return x;
		}
		/*
		matrix(int n1,int m1) : n(n1),m(m1)
		{
			x = new int *[n];
			for(int i = 0;i < n;i++)
			{
				x[i] = new int[m]{0};
			}
		}
		*/
	/*	matrix(int n1,int m1) : n(n1),m(m1)
		{
			x = new int *[n];//tao ra 1 mang con tro tuong ung n dong moi con tro tro den 1 cot   
			for(int i = 0;i < n;i++)
			{
				x[i] = new int[m]{0};//cap phat tung cot khoi tao gia tri ban dau bang 0 
			}
		}
		void nhap(){
			for(int i = 0;i < n;i++){
				for(int j = 0;j < m;j++){
					cout << "a[" << i << "," << j << "]:";
					cin >> x[i][j];
				}
			}
		}
		
		void xuat(){
			for(int i = 0;i < n;i++){
				for(int j = 0;j < m;j++){
					cout << x[i][j] << " "; 
				}
				cout << endl; 
			}
		}
		friend matrix operator + (matrix a,matrix b);
		friend matrix operator - (matrix a,matrix b);
};
	matrix operator +(matrix a,matrix b){
		if(a.n != b.n || a.m != b.m){
			cout << "Khong cong duoc vi hai ma tran khong cung cap";
			matrix tong(0,0);
			return tong;
		}else{
			matrix tong(0,0);
			tong.n = a.n;
			tong.m = a.m;
			for(int i = 0;i < a.n;i++){
				for(int j = 0;j < a.m;j++){
					tong.x[i][j] = a.x[i][j] + b.x[i][j];
				}
			}
			return tong;
		}
		
	}

class matrixvuong : public matrix {
public:
    matrixvuong(int n1) {
        n = n1;
        m = n1;
        x = new int *[n]; // C?p phát m?ng 2 chi?u
        for (int i = 0; i < n; i++) {
            x[i] = new int[n]{0}; // M?i dòng c?p phát m?ng ch?a n ph?n t?
        }
    }

    ~matrixvuong() {
        // Gi?i phóng b? nh? khi d?i tu?ng b? h?y
        for (int i = 0; i < n; i++) {
            delete[] x[i];
        }
        delete[] x;
    }

    int dcc() {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += x[i][i]; // T?ng du?ng chéo chính
        }
        return sum;
    }

    int dcp() {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += x[i][n - 1 - i]; // T?ng du?ng chéo ph?
        }
        return sum;
    }
};

int main() {
    int n;
    cout << "Nhap cap ma tran vuong n: ";
    cin >> n;

    matrixvuong a(n); // Kh?i t?o d?i tu?ng ma tr?n vuông kích thu?c n x n
    a.nhap(); // Nh?p giá tr? cho ma tr?n vuông
    a.xuat(); // Xu?t ma tr?n ra màn hình

    // Tính t?ng các du?ng chéo
    cout << "Tong duong cheo chinh: " << a.dcc() << endl;
    cout << "Tong duong cheo phu: " << a.dcp() << endl;

    return 0;
}*/
/*class ThiSinh {
private:
    string maThiSinh;
    string hoTen;
    float diemToan, diemLy, diemHoa;

public:
    
    void nhap() {
        cout << "Nhap ma thi sinh: ";
        cin >> maThiSinh;
        cin.ignore();
        cout << "Nhap ho tên thi sinh: ";
        getline(cin, hoTen);
        cout << "Nhap diemm Toan: ";
        cin >> diemToan;
        cout << "Nhap diemm Ly: ";
        cin >> diemLy;
        cout << "Nhap diem Hóa: ";
        cin >> diemHoa;
    }

    
    void xuat() const {
        cout << "Ma thí sinh: " << maThiSinh << endl;
        cout << "Ho tên: " << hoTen << endl;
        cout << "Ðiem Toán: " << diemToan << endl;
        cout << "Ðiem Ly: " << diemLy << endl;
        cout << "Ðiem Hóa: " << diemHoa << endl;
        cout << "Tong diem: " << tinhTongDiem() << endl;
    }


    float tinhTongDiem() const {
        return diemToan + diemLy + diemHoa;
    }

    bool dieuKienDiem() const {
        return tinhTongDiem() >= 21 && diemToan >= 2 && diemLy >= 2 && diemHoa >= 2;
    }
};

int main() {
    int n;
    cout << "Nhap so luong thi sinh";
    cin >> n;

    // Cap phat dong thi sinh
    ThiSinh* dsThiSinh = new ThiSinh[n];

    
    for (int i = 0; i < n; ++i) {
        cout << "\nNhap thong tin thi sinh thu " << i + 1 << ":" << endl;
        dsThiSinh[i].nhap();
    }

    // Tim thi sinh co tong diem cao nhat
    int viTriMax = 0;
    for (int i = 1; i < n; ++i) {
        if (dsThiSinh[i].tinhTongDiem() > dsThiSinh[viTriMax].tinhTongDiem()) {
            viTriMax = i;
        }
    }

    cout << "\nThi sinh co tong diem cao nhat la:\n";
    dsThiSinh[viTriMax].xuat();

    // in cac thi sinh thoa man dieu kien
    cout << "\ncac thi sinh co tong diem tu 21 tro len va khong co mon nao duoi 2\n";
    bool coThiSinhThoaMan = false;
    for (int i = 0; i < n; ++i) {
        if (dsThiSinh[i].dieuKienDiem()) {
            dsThiSinh[i].xuat();
            coThiSinhThoaMan = true;
        }
    }

    if (!coThiSinhThoaMan) {
        cout << "Không co thi sinh nao thoa man dieu kien\n";
    }

    // giai phong bo nho
    delete[] dsThiSinh;

    return 0;
}
*/



