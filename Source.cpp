using namespace std;
#include <iostream>

class Calculator
{
    int a;  // первое число
    int b; // второе число
public:
    Calculator()  // конструктор по умолчанию
    {
        a = 0;
        b = 0;
    }
    void set_A(int value_1) 
    { 
        a = value_1; 
    }   // установка значени€ дл€ первого числа

    void set_B(int value_2)   // установка значени€ дл€ второго числа
    {
        if (value_2 == 0)   // если переданное значение равно нулю, то оставл€ем значение по умолчанию
            return;
        b = value_2;
    }
    int get_A() 
    { 
        return a; 
    }    // возвращение значени€ первого числа

    int get_B() 
    { 
        return b; 
    }    // возвращение значени€ второго числа

    int sum() 
    { 
        return a + b; 
    }   // сумма чисел

    int sub() 
    { 
        return a - b; 
    }   // разница чисел

    int mult() 
    { 
        return a * b; 
    }   // произведение чисел

    float div() 
    { 
        return a / b; 
    }   // частное чисел
};


class Calculator_2 : public Calculator
{
public:
    int mod() 
    { 
        return get_A() % get_B(); 
    }    // остаток от делени€ чисел
    int div_2() 
    { 
        return get_A() / get_B(); 
    }   // цела€ часть от делени€ чисел
};


int main()
{
    int a, b;
    cout << "ѕервое число: ";
    cin >> a;
    cout << "¬торое число: ";
    cin >> b;
    Calculator_2 calk;
    calk.set_A(a);
    calk.set_B(b);
    cout << "—умма: " << calk.sum()<<"\n";
    cout << "–азность: " << calk.sub() << "\n";
    cout << "ѕроизведение: " << calk.mult() << "\n";
    cout << "„астное: " << calk.div() << "\n";
    cout << "÷ела€ часть от делени€: " << calk.div_2() << "\n";
    cout<< "ќстаток от делени€: " << calk.mod() << endl;
    return 0;
}