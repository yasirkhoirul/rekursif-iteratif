#include <iostream>
using namespace std;

class Proses{
	friend istream& operator>>(istream&, Proses&);
  	public :
    
    void proses();
  	private :
  	int saku,tkeluar,tab;
  	int keluar[13];
};

void Proses::proses(){
  	tab=0;
  	tkeluar=0;
  	for(int i=1;i<=12;i++){
    tkeluar+=keluar[i];
    tab+=saku;
  }
	tab-=tkeluar;
  	cout << endl;
  	cout << "=========================================" << endl;
  	for(int i=1;i<=12;i++){
    cout << "Pengeluaran tiap bulan "<<i<<" = "<< keluar[i] << endl;
  }
  cout << "Total pengeluaran : " <<tkeluar << endl;
  cout << "Uang tabungan : " << tab << endl; 
};

	istream& operator>>(istream& cin, Proses& masukkan){
  	cout<<"masukkan uang perbulan = ";cin>>masukkan.saku;
  	for(int i=1;i<=12;i++){
    cout<<"Uang keluar di tiap bulan ke-"<<i<<": ";
    cin>> masukkan.keluar[i];
    }
  	return cin;
}

int main() 
{
  Proses run;
  cin>>run;
  run.proses();
  return 0;
}
