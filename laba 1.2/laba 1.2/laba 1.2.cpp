#include <iostream>
#include <vector>

int main() {
    // Введення розміру масиву
    int N;
    std::cout << "vvedit rozmir massivu: ";
    std::cin >> N;

    // Введення елементів масиву
    std::vector<int> A(N);
    std::cout << "vvedit element massivu:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "A[" << i << "]: ";
        std::cin >> A[i];
    }

    // Введення значення T
    int T;
    std::cout << "vvedit znacenua T: ";
    std::cin >> T;

    // Знаходження номера першого елемента, рівного T
    int index_T = -1;
    for (int i = 0; i < N; ++i) {
        if (A[i] == T) {
            index_T = i;
            break;
        }
    }

    // Знаходження номера першого максимального від'ємного елемента до T
    int max_negative_index = -1;
    for (int i = 0; i < index_T; ++i) {
        if (A[i] < 0 && (max_negative_index == -1 || A[i] > A[max_negative_index])) {
            max_negative_index = i;
        }
    }

    // Виведення результату
    if (max_negative_index != -1) {
        std::cout << "nomer 1 videmnogo elementy do  T: " << max_negative_index << std::endl;
    }
    else {
        std::cout << "macsumalnogo elementy do t nema" << std::endl;
    }

    return 0;
}
