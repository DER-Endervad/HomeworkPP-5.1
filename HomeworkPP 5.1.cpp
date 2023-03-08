#include <iostream>
#include <vector>

template<class T>
T squaring(T a) {
    return a * a;
}
template<>
std::vector<int> squaring(std::vector<int> a) {
    for (int i = 0; i < a.size(); ++i) {
        a[i] = a[i] * a[i];
    }
    return a;
}

void output_vector(std::vector<int> a) {
    for (int b : a) {
        std::cout << " " << b << ",";
    }
    std::cout << std::endl;
}

int main()
{
    int one = 4;
    std::cout << "[IN]: " << one << std::endl;
    one = squaring(one);
    std::cout << "[OUT]: " << one << std::endl;

    std::vector<int> two = { -1, 4, 8 };
    std::cout << "[IN]:"; output_vector(two);
    two = squaring(two);
    std::cout << "[OUT]:"; output_vector(two);
}
