#include <iostream>

namespace Avg {
    float Calculate(float x, float y) {
        return (x + y) / 2;
    }
}

namespace Basic {
    float Calculate(float x, float y) {
        return x + y;
    }
}

namespace Sort {
    void Quicksort() {

    }

    void Insertionsort() {

    }

    void Mergesort() {

    }

    void Less() {

    }

    void Greater() {

    }
}

int main() {
    Avg::Calculate(3.9f, 8.2f);
    Basic::Calculate(5.5f, 52.0f);
    return 0;
}
