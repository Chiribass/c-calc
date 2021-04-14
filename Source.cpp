using namespace std;
#include <iostream>

class Calculator
{
    int a; 
    int b; 
public:
    Calculator()  
    {
        a = 0;
        b = 0;
    }
    void set_A(int value_1) 
    { 
        a = value_1; 
    }  

    void set_B(int value_2)   
    {
        if (value_2 == 0)   
            return;
        b = value_2;
    }
    int get_A() 
    { 
        return a; 
    }   

    int get_B() 
    { 
        return b; 
    }    

    int sum() 
    { 
        return a + b; 
    } 

    int sub() 
    { 
        return a - b; 
    }  

    int mult() 
    { 
        return a * b; 
    }   

    float div() 
    { 
        return a / b; 
    }  
};


class Calculator_2 : public Calculator
{
public:
    int mod() 
    { 
        return get_A() % get_B(); 
    }   
    int div_2() 
    { 
        return get_A() / get_B(); 
    }   
};


int main()
{
    int a, b;
    cout << "Первое число: ";
    cin >> a;
    cout << "Второе число: ";
    cin >> b;
    Calculator_2 calk;
    calk.set_A(a);
    calk.set_B(b);
    cout << "Сумма: " << calk.sum()<<"\n";
    cout << "Разность: " << calk.sub() << "\n";
    cout << "Произведение: " << calk.mult() << "\n";
    cout << "Частное: " << calk.div() << "\n";
    cout << "Целая часть от деления: " << calk.div_2() << "\n";
    cout<< "Остаток от деления: " << calk.mod() << endl;
    return 0;
}