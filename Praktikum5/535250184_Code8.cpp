// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include<iostream>

using namespace std;

void printArray (float arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void selectionSortAsc(float arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx =j;
        }
        if (min_idx !=i)
            swap(arr[min_idx], arr[i]);
    }
}

void selectionSortDesc(float arr[], int n)
{
    int i, j, max_idx;
    for (i = 0; i < n-1; i++) {
        max_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] > arr[max_idx])
                max_idx = j;
        }
        if (max_idx != i)
            swap(arr[max_idx], arr[i]);
    }
}

int main()
{
    float data[500];
    int N, a;

    cout<<"Ketikkan jumlah angka yang akan diurutkan: ";
    cin>>N;

    cout<<"Ketikkan data "<<endl;
    for(a = 0; a < N; a++)
    {
        cout<<"Data ke "<<a+1<<" : ";
        cin>>data[a];
    }

    cout<<"Data asli: "<<endl;
    printArray(data, N);

    cout<<"Data yang dirutkan secara ascending: "<<endl;
    selectionSortAsc(data, N);
    printArray (data, N);

    cout<<"Data yang dirutkan secara descending: "<<endl;
    selectionSortDesc (data, N);
    printArray (data, N);

    return 0;
}