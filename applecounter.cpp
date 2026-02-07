#include <iostream>
#include <string_view>
#include <string>

// Write the function getQuantityPhrase() here
constexpr std::string_view getQuantityPhrase(const int apples) {
    using namespace std::string_view_literals;
    if (apples < 0) return "negative"sv;
    else if (apples == 0) return "no"sv;
    else if (apples == 1) return "a single"sv;
    else if (apples == 2) return "a couple of"sv;
    else if (apples == 3) return "a few"sv;
    else return "many"sv;
}
// Write the function getApplesPluralized() here

constexpr std::string_view getApplesPluralized(const int apples) {
    using namespace std::string_view_literals;
    return (apples == 1) ? "apple"sv : "apples"sv;
}
int main()
{
    constexpr int maryApples{ 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}