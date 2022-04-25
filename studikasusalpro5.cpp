#include <iostream>
using namespace std;

class sks{
	public:
		void input();
		int matakuliah(int x);
		int proses();
		void cetak();
	private:
		string nama,nim,namamatkul;
		int jumlah, biaya, total, pembayaran, bayar, diskon1, diskon2,matkul;
};

int sks::matakuliah(int x){
	{
        if (0 == x)
        {
            return total;
        }
        cout<<"Mata kuliah\t-> ";
        cin>>namamatkul;
        cout<<"Jumlah sks : "; cin>>jumlah;
        total=total+jumlah;
        matakuliah(x - 1);
    }
}

void sks::input(){
	cout<<"PROGRAM MENGHITUNG TOTAL PEMBAYARAN"<<endl;
	cout<<"==================================="<<endl;
	cout<<"disusun oleh : ";
	cout<<"\nM Ramadhandy N\nM Surya Anandri\nM Hery Nugraha"<<endl<<endl;
	
	cout<<"              INPUTAN              "<<endl;
	cout<<"Masukan Nama Lengkap Anda : "; getline(cin,nama);
	cout<<"Masukan NIM anda : "; cin>>nim;
	cout<<"Masukan Jumlah Matkul : "; cin>>matkul;
	matakuliah(matkul);
}


int sks::proses(){
	pembayaran=total*120000;
	diskon1=pembayaran-pembayaran*0.10;
	diskon2=diskon1-diskon1*0.05;
	bayar=diskon2;
	return bayar;
}

void sks::cetak(){
	cout<<"              OUTPUTAN              "<<endl;
	cout<<"Total biaya SKS    : "<<pembayaran<<endl;
	cout<<"Dikenai Diskon 10% : "<<diskon1<<endl;
	cout<<"Dikenai Diskon 5%  : "<<diskon2<<endl;
	cout<<"Total biaya yang harus dibayar : "<<bayar<<endl;
}

int main(){
	sks mhs;
	mhs.input();
	mhs.proses();
	mhs.cetak();
	
	return 0;
}

