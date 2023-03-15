<<<<<<< HEAD
#include <iostream>
using namespace std;

double rerata(double a, double b){
    return (a+b)/2;
}

string status(double r){
    if (r >= 60){
        return "lulus";
    }else {
        return "gagal";
    }
}

string status2(double r, double n){
    if (r >= 60 && n >=70){
        return "lulus";
    }else {
        return "gagal";
    }
}

string status3(double r, double n){
    if (r >= 60 || n >=70){
        return "lulus";
    }else {
        return "gagal";
    }
}

int main(){
    double NilMath, NilBIndo;

    cout << "Masukkan Nilai Matematika : ";
    cin >> NilMath;
    cout << "Masukkan Nilai Bahasa Indonesia ";
    cin >> NilBIndo;

    cout << "Nilai rata-ratanya : " << rerata(NilMath, NilBIndo);
    cout << "\n Status Kelulusan : " << status(rerata(NilMath, NilBIndo));
    cout << "\n Status Kelulusan : " << status2(rerata(NilMath, NilBIndo), NilMath);
    cout << "\n Status Kelulusan : " << status3(rerata(NilMath, NilBIndo), NilMath);
}

=======
#include <iostream>
using namespace std;

double rerata(double a, double b){
    return (a+b)/2;
}

string status(double r){
    if (r >= 60){
        return "lulus";
    }else {
        return "gagal";
    }
}

string status2(double r, double n){
    if (r >= 60 && n >=70){
        return "lulus";
    }else {
        return "gagal";
    }
}

string status3(double r, double n){
    if (r >= 60 || n >=70){
        return "lulus";
    }else {
        return "gagal";
    }
}

int main(){
    double NilMath, NilBIndo;

    cout << "Masukkan Nilai Matematika : ";
    cin >> NilMath;
    cout << "Masukkan Nilai Bahasa Indonesia ";
    cin >> NilBIndo;

    cout << "Nilai rata-ratanya : " << rerata(NilMath, NilBIndo);
    cout << "\n Status Kelulusan : " << status(rerata(NilMath, NilBIndo));
    cout << "\n Status Kelulusan : " << status2(rerata(NilMath, NilBIndo), NilMath);
     cout << "\n Status Kelulusan : " << status3(rerata(NilMath, NilBIndo), NilMath);
}

>>>>>>> 3d803f2894870bcafd56f94fc9ed18e4ee0cfa31
