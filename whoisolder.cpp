#include <iostream>
#include <string>
#include <string_view>
std::string getName(const int person) {
    std::cout << "Enter the name of person #" << person << ": ";
    std::string res{};
    std::getline(std::cin >> std::ws, res);
    return res;
}
int getAge(const std::string_view name) {
    std::cout << "Enter the age of " << name << ": ";
    int res{};
    std::cin >> res;
    return res;
}
void older(const std::string_view name1, const std::string_view name2, const int age1, const int age2) {
    if (age1 > age2) std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 << ").";
    else if (age1 < age2) std::cout << name2 << " (age " << age2 << ") is older than " << name1 << " (age " << age1 << ").";
    else std::cout << name1 << " (age " << age1 << ") is the same age as " << name2 << " (age " << age2 << ").";
}
int main()
{
    const std::string name1{getName(1)};
    const int age1{ getAge(name1) };
    const std::string name2{getName(2)};
    const int age2{ getAge(name2) };
    older(name1, name2, age1, age2);
    return 0;
}