#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int A[5];
    for(int C=0;C<5;C++){
        cout<<"A["<<C<<"]=";
        cin>>A[C];
    }
    cout<<"Menampilkan nilai dalam elemen array "<<endl;
    for(int j=0;j<5;j++){
    cout<<"Nilai elemen array ke-"<<j+1<<" adalah "<<A[j]<<endl;
    }
    cin.get();
    getchar();
    return 0;
}
