//I WAYAN KRISNA YASA
//230030011
//BA233
//UTS PRAKTIKUM ALGORITMA DAN STRUKTUR DATA

#include <iostream> //library agar bisa melakukan proses cin dan cout
#include <stdlib.h> //library yang menyediakan fungsi-fungsi umum
using namespace std; //memberi tahu kompiler bahwa saya akan menggunakan namespace std secara keseluruhan

//fungsi mengembalikan nilai
float nasgor(float porsi){ //fungsi mengembalikan nilai untuk menu 1 yaitu nasi goreng
	return 10000*porsi; //menghitung harga yang harus dibayar dengan cara harga dikalikan porsi
}
float aygor(float porsi){ //fungsi mengembalikan nilai untuk menu 1 yaitu ayam goreng
	return 12000*porsi; //menghitung harga yang harus dibayar dengan cara harga dikalikan porsi
}
float bekgor(float porsi){ //fungsi mengembalikan nilai untuk menu 1 yaitu bebek goreng
	return 13000*porsi; //menghitung harga yang harus dibayar dengan cara harga dikalikan porsi
}
float migor(float porsi){ //fungsi mengembalikan nilai untuk menu 1 yaitu mie goreng
	return 11000*porsi; //menghitung harga yang harus dibayar dengan cara harga dikalikan porsi
}
float igor(float porsi){ //fungsi mengembalikan nilai untuk menu 1 yaitu ikan goreng
	return 15000*porsi; //menghitung harga yang harus dibayar dengan cara harga dikalikan porsi
}
//fungsi tidak menampilkan nilai untuk menampilkan judul program
void judul (){  //fungsi tidak menampilkan nilai untuk menampilkan judul program
    cout<<"- Program Kasir Sederhana - "<<endl; //untuk menampilkan tulisan judul
    cout<<"-------------------------------------"<<endl; //untuk menampilkan garis pembatas agar rapi
}
void penutup(){ //fungsi tidak menampilkan nilai untuk memberi kata penutup seperti dibawah ini
    cout<<"-------------------------------------"<<endl; //untuk menampilkan garis pembatas agar rapi
    cout <<"Terima Kasih Atas Kunjungan Anda !!!"<<endl; //untuk menampilkan tulisan terima kasih atas kunjungan anda ke layar
}
int main(){ //sebagai fungsi utama dari sebuah kode bahasa C++

	float porsi, bayar, kembali; //variabel porsi, bayar, dan kembali dengan tipe data float
	int pilihan; //variabel pilihan menu dengan tipe data int
	string ulang; //variabel ulang untuk proses perulangan dengan tipe data string

    do { //perulangan do-while selama user mengetik y atau Y maka akan melakukan pengulangan program yang ada di didalamnya

    system ("CLS"); //untuk membersihkan layar ketika user melakukan pengulangan agar program dimulai dari bagian atas layar

	judul(); //memanggil fungsi tanpa mengembalikan nilai untuk menampilkan judul

	cout<<"PILIH MENU "<<endl<<endl; //untuk menampilkan tulisan pilih menu pada layar
	cout<<"1. Nasi Goreng (Rp. 10.000)"<<endl;//untuk menampilkan tulisan menu 1 yaitu nasi goreng pada layar
    cout<<"2. Ayam Goreng (Rp. 12.000)"<<endl;//untuk menampilkan tulisan menu 2 yaitu ayam goreng pada layar
    cout<<"3. Bebek Goreng (Rp.13.000)"<<endl;//untuk menampilkan tulisan menu 3 yaitu bebek goreng pada layar
	cout<<"4. Mie Goreng  (Rp. 11.000)"<<endl;//untuk menampilkan tulisan menu 4 yaitu mie goreng pada layar
	cout<<"5. Ikan Goreng (Rp. 15.000)"<<endl;//untuk menampilkan tulisan menu 5 yaitu ikan goreng  pada layar
    cout<<"-------------------------------------"<<endl; //untuk menampilkan garis pembatas agar rapi
	cout <<"Masukkan Pilihan (1-5) : ";//untuk menampilkan tulisan masukkan pilihan pada layar
	cin>>pilihan; //untuk menerima masukkan berupa pilihan makanan dari user dari angka 1 sampai 5
	cout<<endl; //memberi jarak 1 baris

	if (pilihan>=1 && pilihan<=5){ //kondisi percabangan ketika user memasukkan angka 1 atau sampai dengan 5 maka akan menampilkan :

		cout<<"Masukkan Jumlah Porsi : "; //menampilkan tulisan masukkan jumlah porsi ke layar
		cin>>porsi; //menerima masukkan berupa jumlah porsi yang diinginkan

		cout<<endl; //memberi jarak 1 baris
		switch(pilihan){ //kondisi percabangan setelah user memasukkan pilihan makanannya dan jumlah porsi makanannya
			case 1 : //kondisi jika user memilih menu 1
                cout<<"Anda Harus Membayar : Rp. " <<nasgor(porsi); //menampilkan ke layar harga yang harus dibayar yang dihitung melalui fungsi yang telah dibuat yaitu harga menu dikalikan porsi
                cout<<endl; //memberi jarak 1 baris
                cout <<"Masukkan Jumlah Bayar : Rp. "; //menampilkan ke layar tulisan masukkan jumlah bayar
                cin>>bayar; //menerima masukkan dari user yaitu harga yang dibayar oleh user
                kembali=bayar-nasgor(porsi); // sebuah proses menghitung kembalian dengan mengurangi harga yang dibayar dengan harga yang harus dibayar
                cout <<"Kembalian Anda Adalah : Rp. "<<kembali<<endl; //menampilkan tulisan dan keterangan jumlah kembalian ke layar
                penutup(); //menampilkan kata-kata penutup dengan memanggil fungsi tanpa mengembalikan nilai yang telah dibuat sebelumnya
            break; // untuk menghentikan eksekusi kode setelah suatu kasus (case) terpenuhi
			case 2 : //kondisi jika user memilih menu 2
                cout<<"Anda Harus Membayar : Rp. " <<aygor(porsi); //menampilkan ke layar harga yang harus dibayar yang dihitung melalui fungsi yang telah dibuat yaitu harga menu dikalikan porsi
                cout<<endl; //memberi jarak 1 baris
                cout <<"Masukkan Jumlah Bayar : Rp. "; //menampilkan ke layar tulisan masukkan jumlah bayar
                cin>>bayar; //menerima masukkan dari user yaitu harga yang dibayar oleh user
                kembali=bayar-aygor(porsi); // sebuah proses menghitung kembalian dengan mengurangi harga yang dibayar dengan harga yang harus dibayar
                cout <<"Kembalian Anda Adalah : Rp. "<<kembali<<endl; //menampilkan tulisan dan keterangan jumlah kembalian ke layar
                penutup(); //menampilkan kata-kata penutup dengan memanggil fungsi tanpa mengembalikan nilai yang telah dibuat sebelumnya
            break; // untuk menghentikan eksekusi kode setelah suatu kasus (case) terpenuhi
			case 3 : //kondisi jika user memilih menu 3
                cout<<"Anda Harus Membayar : Rp. " <<bekgor(porsi); //menampilkan ke layar harga yang harus dibayar yang dihitung melalui fungsi yang telah dibuat yaitu harga menu dikalikan porsi
                cout<<endl; //memberi jarak 1 baris
                cout <<"Masukkan Jumlah Bayar : Rp. "; //menampilkan ke layar tulisan masukkan jumlah bayar
                cin>>bayar; //menerima masukkan dari user yaitu harga yang dibayar oleh user
                kembali=bayar-bekgor(porsi); // sebuah proses menghitung kembalian dengan mengurangi harga yang dibayar dengan harga yang harus dibayar
                cout <<"Kembalian Anda Adalah : Rp. "<<kembali<<endl; //menampilkan tulisan dan keterangan jumlah kembalian ke layar
                penutup(); //menampilkan kata-kata penutup dengan memanggil fungsi tanpa mengembalikan nilai yang telah dibuat sebelumnya
            break; // untuk menghentikan eksekusi kode setelah suatu kasus (case) terpenuhi
            case 4 : //kondisi jika user memilih menu 4
                cout<<"Anda Harus Membayar : Rp. " <<migor(porsi); //menampilkan ke layar harga yang harus dibayar yang dihitung melalui fungsi yang telah dibuat yaitu harga menu dikalikan porsi
                cout<<endl; //memberi jarak 1 baris
                cout <<"Masukkan Jumlah Bayar : Rp. "; //menampilkan ke layar tulisan masukkan jumlah bayar
                cin>>bayar; //menerima masukkan dari user yaitu harga yang dibayar oleh user
                kembali=bayar-migor(porsi); // sebuah proses menghitung kembalian dengan mengurangi harga yang dibayar dengan harga yang harus dibayar
                cout <<"Kembalian Anda Adalah : Rp. "<<kembali<<endl; //menampilkan tulisan dan keterangan jumlah kembalian ke layar
                penutup(); //menampilkan kata-kata penutup dengan memanggil fungsi tanpa mengembalikan nilai yang telah dibuat sebelumnya
            break; // untuk menghentikan eksekusi kode setelah suatu kasus (case) terpenuhi
			case 5 : //kondisi jika user memilih menu 5
                cout<<"Anda Harus Membayar : Rp. " <<igor(porsi); //menampilkan ke layar harga yang harus dibayar yang dihitung melalui fungsi yang telah dibuat yaitu harga menu dikalikan porsi
                cout<<endl; //memberi jarak 1 baris
                cout <<"Masukkan Jumlah Bayar : Rp. "; //menampilkan ke layar tulisan masukkan jumlah bayar
                cin>>bayar; //menerima masukkan dari user yaitu harga yang dibayar oleh user
                kembali=bayar-igor(porsi); // sebuah proses menghitung kembalian dengan mengurangi harga yang dibayar dengan harga yang harus dibayar
                cout <<"Kembalian Anda Adalah : Rp. "<<kembali<<endl; //menampilkan tulisan dan keterangan jumlah kembalian ke layar
                penutup(); //menampilkan kata-kata penutup dengan memanggil fungsi tanpa mengembalikan nilai yang telah dibuat sebelumnya
            break; // untuk menghentikan eksekusi kode setelah suatu kasus (case) terpenuhi
		}
        cout <<endl
        << "Ingin Mengulangi Lagi? y/t" << endl; //menampilkan tulisan ingin mengulangi lagi ke layar
        cin >> ulang; //menerima masukkan dari user apakah akan mengulang atau tidak
	}
	else { //kondisi percabangan saat user memilih makanan dengan inputan selain 1 sampai 5
		cout<<"Pilihan Tidak Tersedia"<<endl; //menampilkan tulisan pilihan tidak tersedia ke layar
        cout <<endl
        << "Ingin Mengulangi Lagi? y/t" << endl;//menampilkan tulisan ingin mengulangi lagi ke layar
        cin >> ulang;//menerima masukkan dari user apakah akan mengulang atau tidak
	}
	}
	while (ulang == "y" || ulang == "Y"); //perulangan do-while yang berfungsi ketika user mengetik y atau Y maka program akan melakukan perulangan sesuai dengan apa yang terjadi di dalam do
    return 0; //untuk memberikan nilai kembali (return value) kepada sistem operasi yang menjalankan program.
}
