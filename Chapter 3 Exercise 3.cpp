#include <iostream>
#include <iomanip>

int main() {
    double rent, phones, internet, utilities, cable;

    std::cout << "Enter monthly rent or mortgage payment: $";
    std::cin >> rent;

    std::cout << "Enter monthly phones cost: $";
    std::cin >> phones;

    std::cout << "Enter monthly Internet service cost: $";
    std::cin >> internet;

    std::cout << "Enter monthly utilities cost: $";
    std::cin >> utilities;

    std::cout << "Enter monthly cable cost: $";
    std::cin >> cable;

    double totalMonthly = rent + phones + internet + utilities + cable;
    double totalAnnual = totalMonthly * 12;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n--- Housing Costs Summary ---\n";
    std::cout << "Total Monthly Cost: $" << totalMonthly << std::endl;
    std::cout << "Total Annual Cost:  $" << totalAnnual << std::endl;

    return 0;
}