#include <chrono>

extern "C" uint64_t getNowMicroseconds() {
    return std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
}
