#include <algorithm>
#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    reverse(s.begin(), s.end());
    std::cout << s << std::endl;
    return 0;
}
