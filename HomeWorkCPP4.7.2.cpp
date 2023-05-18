#include <iostream>
#include <vector>
#include <list>
#include <set>

template<class T> void print_container(T& print) {
    std::cout << "Print: ";
    for (auto const& i : print) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container<std::set<std::string>>(test_set);

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container<std::list<std::string>>(test_list);

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container<std::vector<std::string>>(test_vector);
}