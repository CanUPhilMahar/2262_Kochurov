#include <iostream>
#include <vector>

#define forc(i, from, to) { int __i = from, __n = to; for(const int &i = __i; i < __n; __i++) {
#define endfor } }

int main() {
    std::cout << "--- 1. Демонстрация защиты счетчика ---\n";
    
    std::cout << "Стандартный for (можно менять i):\n";
    for (int i = 0; i < 5; i++) {
        std::cout << i << " ";
        i++; // изменяем счетчик изнутри
    }
    std::cout << "\n(Вывело 0 2 4, так как мы пропускали четные числа)\n\n";

    std::cout << "forc (i менять нельзя):\n";
    forc(i, 0, 5) {
        std::cout << i << " ";
        // i++; ошибка компиляции: "expression must be a modifiable lvalue"
    } endfor
    std::cout << "\n(i - константа, изменить её не получится)\n\n";


    std::cout << "--- 2. Демонстрация защиты границ ---\n";
    
    std::vector<int> v(5, 1);

    std::cout << "forc (граница зафиксирована):\n";
    forc(i, 0, v.size()) {
        std::cout << i << " ";
        v.push_back(1); // добавляем элементы, v.size() растет
    } endfor
    std::cout << "\nРазмер вектора после forc: " << v.size() << "\n";
    std::cout << "(Цикл отработал ровно 5 раз, так как __n запомнил изначальный размер)\n\n";

    /* 
       Если раскомментировать код ниже, программа застрянет в бесконечном цикле,
       потому что v.size() будет расти быстрее, чем i.
       
       std::cout << "Стандартный for с изменением границы "<< "\n";
       std::vector<int> v2(5, 1);
       for (int i = 0; i < v2.size(); i++) {
           std::cout << i << " ";
           v2.push_back(1); // увеличиваем размер вектора
       }
    */

    return 0;
}
