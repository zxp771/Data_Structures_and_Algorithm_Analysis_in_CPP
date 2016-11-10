//
// Created by 涂金戈 on 09/11/2016.
//

#include <iostream>
#include "QuadraticProbingHashTable.h"
#include "Employee.h"

int main() {
    Employee e1("Adam");
    Employee e2("Bob");
    Employee e3("Cathy");
    Employee e4("Donne");

    QuadraticProbingHashTable<Employee> qbh;
    qbh.insert(e1);
    qbh.insert(e2);

    if (!qbh.contains(e3))
        std::cout << e3.getName() << " is not here.\n";
    else
        std::cout << e3.getName() << " is here.\n";

    qbh.insert(e3);

    if (!qbh.contains(e3))
        std::cout << e3.getName() << " is not here.\n";
    else
        std::cout << e3.getName() << " is here.\n";

    if (!qbh.contains(Employee("Cauchy")))
        std::cout << "Cauchy is not here.\n";
    else
        std::cout << "Cauchy is here.\n";

    qbh.insert(e4);

    qbh.makeEmpty();

    if (!qbh.contains(e3))
        std::cout << e3.getName() << " is not here.\n";
    else
        std::cout << e3.getName() << " is here.\n";

    return 0;
}