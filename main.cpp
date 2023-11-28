#define CHARS_IN_PAGE 84000

#include <cstdlib>
#include <iostream>
#include <array>
#include <random>

std::array<char, 29> chars = {'a','b','c','d','e','f','g','h','i','j','k','l','m',
                              'n','o','p','q','r','s','t','u','v','w','x','y','z',
                              '.',',',' '};

int main(){
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist29(1,29);
    std::string page = "";
    do {
        int ran = dist29(rng);
        page += chars[ran];
    } while (page.length() < CHARS_IN_PAGE);

    std::cout << page << std::endl;
}
