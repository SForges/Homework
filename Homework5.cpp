#include <iostream>
using namespace std;
class Complex {
public:
    double real;
    double image;
public:
    Complex() {
        real = 0;
        image = 0;
    }
    Complex(double Real, double Image) {
        real = Real;
        image = Image;
    }
    Complex Sum(Complex A) {
        return Complex(real + A.real, image + A.image);
    }
    Complex Diffr(Complex A) {
        return Complex(real - A.real, image - A.image);
    }
    Complex Mult(Complex A) {
        return Complex(real * A.real - image * A.image, real * A.image + A.real * image);
    }
    Complex Div(Complex A) {
        return Complex((real * A.real + image * A.image) / (A.real * A.real + A.image * A.image), (A.real * image - real * A.image) / (A.real * A.real + A.image * A.image));
    }
    void Print() {
        cout << real << "+" << image << "i" << endl;
    }
};

int main()
{
    Complex* Alpha = new Complex(5.0, 11.0);
    Complex* Beta = new Complex(1.0, 2.0);
    Alpha->Sum(*Beta).Print();
    Alpha->Diffr(*Beta).Print();
    Alpha->Mult(*Beta).Print();
    Alpha->Div(*Beta).Print();

}
