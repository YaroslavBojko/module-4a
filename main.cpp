#include <iostream>

int main() {
    int numberMen;
    std::cout << "How many men live in the city: ";
    std::cin >> numberMen;

    int numberBarbers;
    std::cout << "How many barbers are already working in all barbershops: ";
    std::cin >> numberBarbers;

    int hoursPerShift = 8;
    int days = 30;
    if ((numberBarbers * hoursPerShift * days) >= numberMen)
        std::cout << "There are enough barbers!!!" << std::endl;
    if ((numberBarbers * hoursPerShift * days) < numberMen)
        std::cout << "There aren't enough barbers!!!" << std::endl;
}
