#include<iostream>
#include<fstream>
using namespace std;
#include<iostream>
#include<fstream>
using namespace std;
class NGUOI {
	public:
		string hoten;
		int namsinh;
		
};

class SINHVIEN : public NGUOI{
	public:
	string masv;
	float dtb;
	public:
		void nhap();
		void xuat();		
};

void SINHVIEN::nhap(){
	cin.ignore();
	cout << "Nhap ma sv:"; 
	cin  >>  masv;
	cin.ignore();
	cout << "Nhap ho ten:";
	 getline(cin,hoten);
	//cin.ignore();
	cout << "Nhap nam sinh:";
	 cin >> namsinh;
	 //cin.ignore();
	cout << "Nhap dtb"; cin >> dtb;
}

void SINHVIEN::xuat()
{
	cout << "Ma Sinh Vien:" << masv << " " << "Ho ten:" << hoten << endl;
	cout << "Nam sinh:" << namsinh << " " << "DTB:" << dtb;
}

void quickSort(SINHVIEN a[10], int l, int r){
	float p = a[(l+r)/2].dtb; 
	int i = l, j = r;
	while (i < j){
		while (a[i].dtb < p){
			i++;
		}
		while (a[j].dtb > p){
			j--;
		}
		if (i <= j){
			SINHVIEN temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	if (i < r){
		quickSort(a, i, r);
	}
	if (l < j){
		quickSort(a, l, j);
	}
}

void timsv(SINHVIEN a[10],int n)
{
	string ma;
	int i,tt = 0;
	cout << "\n nhap masv:"; cin >> ma;
	cin.ignore();
	for(int i = 0;i < n;i++){
		if(a[i].masv == ma)
		{
			cout << "Tim thay sinh vien trong danh sach:";
			tt = 1;
			break;
		}
	}
	if(!tt){
		cout << "Khong tim thay sinh vien trong danh sach:";
	}
}
ostream& operator<<(ostream& out, const SINHVIEN& sv) {
    out << "Ma Sinh Vien: " << sv.masv << ", Ho Ten: " << sv.hoten 
        << ", Nam Sinh: " << sv.namsinh << ", DTB: " << sv.dtb;
    return out;
}
/*int main() {
	SINHVIEN sv[3];
    ofstream outFile("D:\\nhan_vien.txt");  // M? t?p d? ghi (n?u t?p không t?n t?i, nó s? du?c t?o m?i)
    for(int i = 0;i < 3;i++){
    	sv[i].nhap();
	}
    // Ki?m tra n?u t?p dã m? thành công
    if (outFile.is_open()) {
        /*outFile << "Chao mung den voi C++!\n";  // Ghi m?t dòng vào t?p
        outFile << "Ghi du lieu vao t?p thanh cong.\n";  // Ghi thêm m?t dòng
        //outFile.close();  // Ðóng t?p sau khi ghi xong
        //cout << "Du lieu da duoc ghi vao file.\n";
    } else {
        cout << "Khong the mo file de ghi.\n";  // N?u không th? m? t?p, thông báo l?i
    }
    for(int i = 0;i < 3;i++){
    	outFile << sv[i];
	}
    
    return 0;
}*/


int main(){
	ifstream ip("D:\\nhan_vien.txt");
    if(ip.is_open()){
    	string line;
    	while(getline(ip,line)){
    		cout << line << endl;
		}
		ip.close();
	}else
	{
		cout << "Khong the mo file:";
	}
	return 0;
}

