#include<iostream>

class complex {
    private:
        int real;
        int imaginary;

    public:
        complex();
        complex(int real, int imaginary);
        complex(complex &obj);
        void printValue();
        complex operator+(complex obj);
};

int main() {
    complex c1(10,10), c2(5,5), c3;
    c3 = c1 + c2;
    c3.printValue();
}

complex::complex(){};

complex::complex(int real, int imaginary) {
    this->real = real;
    this->imaginary = imaginary;
}

complex::complex(complex &obj) {
    real = obj.real;
    imaginary = obj.imaginary;
}

void complex::printValue() {
    std::cout << real << " + " << imaginary << "i \n";
}

complex complex::operator+(complex obj) {
    complex temp;
    temp.real = real + obj.real;
    temp.imaginary = imaginary + obj.imaginary;
    return temp;
}