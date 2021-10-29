#include <iostream>
#include <string>


int main() {
    auto reverseString = [&](const std::string& str,auto&& reverseString) {

        if (str.empty()) {
            std::string tmp;
            return tmp;
        }

        return reverseString(str.substr(1), reverseString) + str[0];

    };


    std::string str = "Hello World";

    std::string revStr = reverseString(str, reverseString);

    std::cout << revStr << std::endl;




    return 0;
}
