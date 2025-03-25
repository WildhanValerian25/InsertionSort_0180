   #include <iostream>
   using namespace std;

   int arr[20]; // Membuat Array dengan panjang data 20
   int n;       // Membuat Variable inputan n

   void input()
   { // procedure Input
       while (true)
       {
           cout << "Masukkan Jumlah Data pada Array (maksimal 20): ";
           cin >> n;

           if (n <= 20)
           { // Membuat Kondisi n tidak lebih dari 20
               break;
           }
           else
           {
             cout << "/nArray yang anda masukkan maksimal 20 elemen./n"; // Menampilkan pesan jika data lebih dari 20
           }
       }

       cout << endl;
       cout << "=====================" << endl;
       cout << "Masukkan Element Array" << endl;
       cout << "=====================" <<endl;

       for (int i = 0; i < n; i++)
       {
         cout << "Data ke-" << (i + 1) << ": ";
         cin >> arr[i];
       }
   }