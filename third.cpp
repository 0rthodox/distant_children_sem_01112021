#include <iostream>

void decr(int* px) { // 1.5 Принимаем указатель
    *px -= 1; // 2. Разыменовываем адрес
}

void decr(int& x) { // Ссылка -- обёртка над указателем
    x -= 1;
}

int main() {
    int x = 5;
    decr(x);
    decr(&x); // 1. Берём адрес и передаём
    std::cout << x << std::endl;
}