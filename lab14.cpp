// COMSC-210 | lab14 |Seoyeon An
#include <iostream>
#include <iomanip>
using namespace std;

class Color {
private:
    int red;
    int green;
    int blue;

public:
    Color() : red(0), green(0), blue(0) {}
    
    // getter
    int getRed() const { return red; }
    int getGreen() const { return green;}
    int getBlue() const { return blue; }

    // setter
    void setRed(int r) { red = r; }
    void setGreen(int g) { green = g; }
    void setBlue(int b) { blue = b; }

    void print() const {
        cout << left
             << setw(6) << "R:" << red
             << setw(6) << "G:" << green
             << setw(6) << "B:" << blue
             << endl;
    }
};



int main() {
    cout << "Color Assignment";
    cout << "---------------------\n";

    Color c1;
    c1.setRed(255);
    c1.setGreen(0);
    c1.setBlue(0);

    Color c2;
    c2.setRed(0);
    c2.setGreen(255);
    c2.setBlue(0);

    Color c3;
    c3.setRed(0);
    c3.setGreen(0);
    c3.setBlue(255);

    cout << "c1"; c1.print() ;
    cout << "c2"; c2.print() ;
    cout << "c3"; c3.print();

    return 0;
}