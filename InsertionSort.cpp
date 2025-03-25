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
             cout << "/nArray yang anda masukkan maksimal 20 elemen./n"; 
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

   void insertionSort()
   { // procedure InsertionSort 
      int temp, j; // Membuat variable data temporer dan index j

      for (int i = 1; i < n; i++)
      { // Step 1
          temp = arr[i]; // Step 2
          j = i - 1;     // Step 3

          while (j >= 0 && arr [j] >temp)
          {                      // Step 4
            arr[j + 1] = arr[j]; // Step 4a
            j--;                 // Step 4b
          }
         
        arr[j + 1] = temp; // Step 5
        }
   }

   void display()
   {
      cout << endl;
      cout << "================================" << endl;
      cout << " Total pass = " << n - 1 << endl;
      cout << "================================" << endl;
      cout << "Element Array yang telah tersusun" << endl;
      cout << "================================" << endl;

      for (int j = 0; j < n; j++)
      {
        cout << arr[j] << " ";
      }
      cout << endl;
   }

   