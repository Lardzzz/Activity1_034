#include <iostream>
using namespace std;

int main(){
    double NilMath, NilBhsIndo, rerata;
    string status;

    cout << "Masukkan Nilai Matematika : ";
    cin >> NilMath;
    cout << "Masukkan Nilai Bahasa : ";
    cin >> NilBhsIndo;

    rerata = (NilMath + NilBhsIndo)/2;

    if (rerata >= 60){
        status = "Lulus";
    }else {
        status = "Tidak Lulus";
    }

    cout << "Status Kelulusan : " << status;
}