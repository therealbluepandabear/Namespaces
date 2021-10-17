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

    namespace Comparison {
        void Less() {

        }

        void Greater() {

        }
    }
}

namespace {
    void InternalFunction() {

    }
}

int main() {
    Sort::Comparison::Less();
    return 0;
}
