#include <cstdint>
#include <cstdio>

enum class Side : std::uint8_t { Buy, Sell };

struct A { Side side; std::int64_t id; std::int32_t qty; std::int64_t price; };
struct B { std::int64_t id; std::int64_t price; std::int32_t qty; Side side; };

int main() {
    std::printf("sizeof(A)=%zu alignof(A)=%zu\n", sizeof(A), alignof(A));
    std::printf("sizeof(B)=%zu alignof(B)=%zu\n", sizeof(B), alignof(B));
}
