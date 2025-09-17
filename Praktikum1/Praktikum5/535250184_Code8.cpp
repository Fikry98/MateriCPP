//Program untuk mengurutkan bilangan
#include<iostream>
#include<algorithm> // Diperlukan untuk std::swap

using namespace std;

// Fungsi untuk mencetak array
void printArray (float arr[], int size)
{
    int i;
    for (i=0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

//Fungsi Selection sort Ascending
void selectionSortAsc(float arr[], int n)
{
    int i, j, min_idx;
    // Satu demi satu memindahkan batas subarray yang tidak disortir
    for (i=0; i < n-1; i++) {
        // Mencari elemen minimum dalam array yang tidak disortir
        min_idx = i;
        for (j=i+1; j<n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx =j;
        }
        // Tukar elemen minimum yang ditemukan dengan elemen pertama
        if (min_idx !=i)
            swap(arr[min_idx], arr[i]);
    }
}

//Fungsi Selection sort Descending
void selectionSortDesc(float arr[], int n)
{
    int i, j, max_idx;
    // Satu demi satu memindahkan batas subarray yang tidak disortir
    for (i=0; i < n-1; i++) {
        // Mencari elemen maximum dalam array yang tidak disortir
        max_idx = i;
        for (j=i+1; j<n; j++) {
            if (arr[j] > arr[max_idx])
                max_idx = j;
        }
        // Tukar elemen maximum yang ditemukan dengan elemen pertama
        if (max_idx != i)
            swap(arr[max_idx], arr[i]);
    }
}

//fungsi utama
int main()
{
    float data [500];
    int N, a;
    cout<<"Ketikkan jumlah angka yang akan diurutkan: ";
    cin>>N;

    cout<<"Ketikkan data "<<endl;
    for(a=0; a<N; a++)
    {
        cout<<"Data ke "<<a+1<<":";
        cin>>data[a];
    }

    //Memanggil fungsi printArray untuk mencetak data
    cout<<"Data asli: "<<endl;
    printArray(data, N);

    //Memanggil fungsi selectionSortAsc dan printArray untuk mengurutkan dan mencetak data
    cout<<"Data yang dirutkan secara ascending: "<<endl;
    selectionSortAsc(data, N);
    printArray (data, N);

    //Memanggil fungsi selectionSortDesc dan printArray untuk mengurutkan dan mencetak data
    cout<<"Data yang dirutkan secara descending: "<<endl;
    selectionSortDesc (data, N);
    printArray (data, N);

    return 0;
}