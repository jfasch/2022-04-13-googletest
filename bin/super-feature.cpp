#include <feature1.h>

#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    if (argc != 3) {
        std::cerr << argv[0] << " <lhs> rhs>" << std::endl;
        return 1;
    }

    int lhs = std::stoi(argv[1]);
    int rhs = std::stoi(argv[2]);

    std::cout << super_feature(lhs, rhs) << std::endl;
    return 0;
}
