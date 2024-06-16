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
        friend complex operator+(complex obj1, complex obj2);
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

complex operator+(complex obj1, complex obj2) {
    complex temp;
    temp.real = obj1.real + obj2.real;
    temp.imaginary = obj1.imaginary + obj2.imaginary;
    return temp;
}