#include <iostream>
#include <cmath>
using namespace std;

// Fungsi untuk menghitung jarak antara dua titik
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Fungsi menghitung jari-jari lingkaran
double radius(double x1, double y1, double x2, double y2) {
    return distance(x1, y1, x2, y2);
}

// Fungsi menghitung keliling lingkaran
double circumference(double r) {
    const double PI = 3.1416;
    return 2 * PI * r;
}

// Fungsi menghitung luas lingkaran
double area(double r) {
    const double PI = 3.1416;
    return PI * r * r;
}

int main() {
    // Nilai tetap (hardcoded)
    double x1 = 8, y1 = 7;   // pusat lingkaran
    double x2 = 17, y2 = 20; // titik pada lingkaran

    cout << "Pusat lingkaran (x1, y1): (" << x1 << ", " << y1 << ")" << endl;
    cout << "Titik pada lingkaran (x2, y2): (" << x2 << ", " << y2 << ")" << endl;

    double r = radius(x1, y1, x2, y2);
    double d = 2 * r;
    double c = circumference(r);
    double a = area(r);

    cout << "\n=== HASIL PERHITUNGAN LINGKARAN ===\n";
    cout << "Jari-jari (radius)      : " << r << endl;
    cout << "Diameter                : " << d << endl;
    cout << "Keliling (circumference): " << c << endl;
    cout << "Luas (area)             : " << a << endl;

    return 0;
}
