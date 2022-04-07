// Homework5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

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
    void Print() {

    }
};

int main()
{
    Complex* Alpha = new Complex(5.0, 11.0);
    Complex* Beta = new Complex(1.0, 2.0);
    Alpha->Sum(*Beta);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
