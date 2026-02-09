#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };

    // Place all lines of code for the following quiz here
    // set viewed
    myArticleFlags |= option_viewed;
    // check if article is deleted
    std::cout << "Is the article deleted? " << std::boolalpha << static_cast<bool>(myArticleFlags & option_deleted) << '\n';
    // clear article as favorite
    myArticleFlags &= ~option_favorited;
    std::cout << std::bitset<8>{ myArticleFlags } << '\n';
    // extra credit: demorgan's law expands the not to the brackets and flips the operator for an equivalent statement. they have the same truth table
    return 0;
}