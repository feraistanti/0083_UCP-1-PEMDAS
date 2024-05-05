// float, char, integer

// Prosedur dan fungsi:
// #include <iostream>
//  using namespace std;
//  int main(){
//    char pilihan;
//     do{
//       input();
//       Display();
//       cout << "Apakah ingin membeli kembali ? ";
//       cin >> pilihan;
//        } while (pilihan == 'y' || pilihan == 'Y');
//  }

// Implementasi dari Looping.
//  using namespace std;

//  int main() {
//    char pilihan;


//    do {
//        cout << "Berangkat ambil takjil" << endl;
//        cout << "Antri Takjil" << endl;
//        cout << "ambil takjil" << endl;
//        cout << " Apakah mau antri kembali ?" << endl;
//        cin >> pilihan;
//    } while (pilihan == 'y' || pilihan == 'Y');
//	}

//  Impementasi dari conditional statement
//  int TotalHarga() {
//   return (nXpander * hXpander) + (nPorsche * nPorsche) + (nAvanza * nAvanza) + (nBrio * nBrio) + (nLamborghini * nLamborghini);
//  }

// Implementasi dari struct
// void Display(){
//	cout << "Total Harganya : " << TotalHarga() << endl;
//	}

#include <iostream>
using namespace std;
int bilSatu, bilDua;

void input()
{
	cout << "Jumlah ambang batas yang ditetapkan" = ";
		cin >> bilSatu;
	cout << "Masukan Bilangan kedua = ";
	cin >> bilDua;
}

float penjumlahan()