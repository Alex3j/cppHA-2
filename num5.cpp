#include <iostream>

double plus(double num0, double num1){
    return num0 + num1;
}

double minus(double num0, double num1){
    return num0 - num1;
}

double multiplication(double num0, double num1){
    return num0 * num1;
}

double division(double num0, double num1){
    return num0 / num1;
}

double calc(double (*PtrOperator)(double num0, double num1), double num0, double num1) {
    double res = PtrOperator(num0, num1);
    return res;
}

int main() {
    double num0, num1;
    char sign = 0;
    while (sign != ' '){
        std::cin >> num0;
        std::cin.get(sign);
        std::cin >> num1;
        switch(sign){
            case '+':
                std::cout << calc(plus, num0, num1) << std::endl;
                break;
            case '-':
                std::cout << calc(minus, num0, num1) << std::endl;
                break;
            case '*':
                std::cout << calc(multiplication, num0, num1) << std::endl;
                break;
            case '/':
                std::cout << calc(division, num0, num1) << std::endl;
                break;
            case ' ':
                std::cout << "Finish";
                break;
        }
    }
    return 0;
}
