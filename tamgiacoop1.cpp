#include<bits/stdc++.h>


using namespace std;

class Diem{
	private:
		int x,y;
	public:
		Diem(){
			x = 0;
			y = 0;
		}
		Diem(int x1,int y1){
			this->x = x1;
			this->y = y1;
		}
		friend istream& operator >> (istream &is,Diem &d2);
		friend ostream& operator << (ostream &os,Diem &d2);
		float khoangcach(Diem d2);	
};

	istream& operator >> (istream &is,Diem &d2){
		cout << "Nhap x:"; is >> d2.x;
		cout << "Nhap y:"; is >> d2.y;
		return is;
	}
	ostream& operator << (ostream &os,Diem &d2){
		os << "(" << d2.x << "," << d2.y << ")" << endl;
		return os;
	}

float Diem::khoangcach(Diem d2){
	float dodai;
	dodai = sqrt(pow(d2.x - x,2) + pow(d2.y - y,2));
	return dodai;
}

class TamGiac : public Diem {
	private:
		Diem d1,d2,d3;
	public:
		void Nhapdiem();
		void Xuatdiem();
		int KtTamGiac();
		float TinhDienTich();
};
float TamGiac::TinhDienTich(){
	float c1, c2, c3, p, s;
    c1 = d1.khoangcach(d2);
    c2 = d2.khoangcach(d3);
    c3 = d1.khoangcach(d3);
	if (c1 + c2 > c3 && c2 + c3 > c1 && c1 + c3 > c2) {
        p = (c1 + c2 + c3) / 2; // N?a chu vi
        s = sqrt(p * (p - c1) * (p - c2) * (p - c3)); // Công th?c Heron
        return s;
    } else {
        return 0; // Không ph?i tam giác h?p l?
    }
}

void TamGiac::Nhapdiem(){
	cout << "Nhap diem thu nhat:";
	cin >> d1;
	cout << "Nhap diem thu hai:";
	cin >> d2;
	cout << "Nhap diem thu ba:";
	cin >> d3;
}
void TamGiac::Xuatdiem(){
	cout << d1;
	cout << d2;
	cout << d3;
}
int TamGiac::KtTamGiac(){
	float a,b,c;
	a = d1.khoangcach(d2);
	b = d2.khoangcach(d3);
	c = d1.khoangcach(d3);
	if((a + b > c) && (b + c > a) && (a + c > b) && a > 0 && b > 0 && c > 0){
		if(a == b && c == a && b == c){
			cout << "Tam giac can:";
		}else if(a == b == c){
			cout << "Tam giac deu:";
		}
		else{
			cout << "Tam giac vuong:";
			}
		return 1;		
		}
	else
	{
		cout << "Khong phai la tam giac:" << endl;
		return 0;	
	}
}


int main(){
	TamGiac tg[10];
	cout << "Nhap vao so tam giac:";
	int n;  cin >> n;
	for(int i = 0;i < n;i++){
		tg[i].Nhapdiem();
	}
	for(int i = 0;i < n;i++){
		if(tg[i].KtTamGiac() == 1){
			tg[i].Xuatdiem();
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = i + 1;j < n;j++){
			if(tg[i].TinhDienTich() > tg[j].TinhDienTich()){
				swap(tg[i],tg[j]);
			}
		}
	}
	cout << "Danh sach tam giac sau khi sap xep theo chieu tang dan dien tich:" << endl;
	for(int i = 0;i < n;i++){
		if(tg[i].KtTamGiac() == 1){
			cout << "Tam giac thu:" << i + 1 << endl;
		cout << tg[i].TinhDienTich() << endl;
	}
}
	for(int i = 0;i < n;i++){
		if(tg[i].KtTamGiac() == 1){
		cout << "Tam giac thu:" << i + 1 << endl;
		tg[i].Xuatdiem();
	}
	return 0;
	}
}

