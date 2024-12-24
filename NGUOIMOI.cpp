#include<bits/stdc++.h>

using namespace std;

class Nguoi{
	protected:
		string hoten;
		int namsinh;
	public:
		string getHoten(){
			return hoten;
		}
		void nhap();
		void xuat();	
};

void Nguoi::nhap(){
	cout << "Nhap ho ten:";
	cin.ignore();
	getline(cin,hoten);
	cout << "Nhap nam sinh:";
	cin >> namsinh;
	cin.ignore();
}

void Nguoi::xuat(){
	cout << "Ho ten:" << hoten << " " << "Nam sinh:" << namsinh << endl;
}

class SinhVien : public Nguoi{
	private:
		string masv;
		float dtb;
	public:
		string getMSV(){
			return masv;
		}
		float getDtb(){
			return dtb;
		}
		void nhap();
		void xuat();	
};

void SinhVien::nhap(){
	Nguoi::nhap();
	cout << "Nhap ma sinh vien:";
	cin >> masv;
	cout << "Nhap diem trung binh:";
	cin >> dtb;
	cin.ignore();
}

void SinhVien::xuat(){
	Nguoi::xuat();
	cout << "Ma sinh vien:" << masv << " " << "Diem trung binh" << dtb << endl;
}

int main(){
	int n; 
	cout << "Nhap so luong sinh vien:";
	cin >> n;
	
	SinhVien *sv = new SinhVien[n];
    for(int i = 0;i < n;i++){
    	sv[i].nhap();
	}
	for(int i = 0;i < n;i++){
		for(int j = i + 1;j < n;j++){
			if(sv[i].getDtb() > sv[j].getDtb()){
				swap(sv[i],sv[j]);
			}
		}
	}
	cout << "Danh sach sinh vien sau khi sap xep";
	for(int i = 0;i < n;i++){
    	sv[i].xuat();
	}
	cout << "Nhap ten hoac ma sinh vien de tim sinh vien:";
	string seach;
	getline(cin,seach);
	for(int i = 0;i < n;i++){
		if(sv[i].getHoten() == seach || sv[i].getMSV() == seach){
			cout << "Sinh vien ban muon tim:" << endl;
			sv[i].xuat();
			break;
		}
	}
	delete[] sv;
	return 0;
}



