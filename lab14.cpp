// COMSC-210 | lab14 |Seoyeon An
#include <iostream>
using namespace std;

class Color {
private:
    int red;
    int green;
    int blue;

public:
    // getter
    int getRed() const { return red; }
    int getGreen() const { return green;}
    int getBlue() const { return blue; }

    // setter
    void setRed(int r) { red = r; }
    void setGreen(int g) { green = g; }
    void setBlue(int b) { blue = b; }
};



int main() {
    cout << "Color Assignment";
    return 0;
}