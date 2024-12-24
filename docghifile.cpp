#include<iostream>
#include<fstream>
using namespace std;
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream outFile("D:\\output.txt");  // M? t?p d? ghi (n?u t?p không t?n t?i, nó s? du?c t?o m?i)
    
    // Ki?m tra n?u t?p dã m? thành công
    if (outFile.is_open()) {
        outFile << "Chao mung den voi C++!\n";  // Ghi m?t dòng vào t?p
        outFile << "Ghi du lieu vao t?p thanh cong.\n";  // Ghi thêm m?t dòng
        outFile.close();  // Ðóng t?p sau khi ghi xong
        cout << "Du lieu da duoc ghi vao file.\n";
    } else {
        cout << "Khong the mo file de ghi.\n";  // N?u không th? m? t?p, thông báo l?i
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
