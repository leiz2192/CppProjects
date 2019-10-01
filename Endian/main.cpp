#include <iostream>
#include <byteswap.h>

int main() {
    std::cout << "Hello, World!" << std::endl;
    unsigned int a = 0x4;
    unsigned int b = bswap_32(a);
    unsigned int c = be32toh(a);
    float d = *(float *)&b;
    std::cout << "a=0x" << std::hex << a << "; b=0x" << std::hex << b << "; c=0x" << std::hex << c << "\n";
    std::cout << d << "\n";
    std::cout << *(int *)&a << "\n";
    std::cout << *(int *)&b << "\n";

    uint64_t e = 0x123456;
    uint64_t f = be64toh(e);
    double g = *(double *)&f;
    std::cout << "e=0x" << std::hex << e << "; f=0x" << std::hex << f << "\n";
    std::cout << g << "\n";

    return 0;
}