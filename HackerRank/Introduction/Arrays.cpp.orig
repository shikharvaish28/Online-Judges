#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>

int main() {
    std::cin.ignore(256, '\n');
    std::vector<int> v;
    std::copy(std::istream_iterator<int> (std::cin), std::istream_iterator<int> (), back_inserter(v));
    std::copy(v.rbegin(), v.rend(), std::ostream_iterator<int> (std::cout, " "));

    return 0;
}