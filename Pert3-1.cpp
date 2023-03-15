#include <iostream>
using namespace std;

int main(){
    double NilMath, NilBhs, rerata;
    string status;

    cout << "Masukkan Nilai Matematika : ";
    cin >> NilMath;
    cout << "Masukkan Nilai Bahasa : ";
    cin >> NilBhs;

    rerata = (NilMath + NilBhs)/2;

    if (rerata >= 60){
        status = "Lulus";
    }else {
        status = "Tidak Lulus";
    }

    cout << "Status Kelulusan : " << status;
}