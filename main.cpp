#include <iostream>

/*Задача 4. Барберы (необязательная).

В небольшом городке проживает 18 000 взрослых человек: 9 000 мужчин и 9 000 женщин. Согласно традиции этого городка все мужчины обязаны носить бороду.
 Один предприимчивый житель открыл сеть барбершопов, чтобы помочь мужчинам ухаживать за их бородами. Однако он никак не может посчитать сколько всего специалистов-барберов для этого нужно.
 Вам нужно написать программу которая будет рассчитывать сколько мужчин можно постричь во всех барбершопах исходя из следующих данных:

* каждый из 9000 мужчин посещает барбершоп раз в месяц (30 дней)

* один барбер способен обслужить одного клиента за 1 час

* смена барбера — 8 часов
и посчитать сколько барберов нужно, и если их недостаточно — выдать сообщение об этом.
 Если барберов достаточно — сказать и об этом.

 */

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

}
