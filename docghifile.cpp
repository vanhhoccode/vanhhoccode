#include<iostream>
#include<fstream>
using namespace std;
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream outFile("D:\\output.txt");  // M? t?p d? ghi (n?u t?p kh�ng t?n t?i, n� s? du?c t?o m?i)
    
    // Ki?m tra n?u t?p d� m? th�nh c�ng
    if (outFile.is_open()) {
        outFile << "Chao mung den voi C++!\n";  // Ghi m?t d�ng v�o t?p
        outFile << "Ghi du lieu vao t?p thanh cong.\n";  // Ghi th�m m?t d�ng
        outFile.close();  // ��ng t?p sau khi ghi xong
        cout << "Du lieu da duoc ghi vao file.\n";
    } else {
        cout << "Khong the mo file de ghi.\n";  // N?u kh�ng th? m? t?p, th�ng b�o l?i
    }
    
    return 0;
}

/*
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
	return 0;*/
}
