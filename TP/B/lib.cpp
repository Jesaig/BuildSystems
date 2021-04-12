#include "lib.h"
#include <string>


Coordinates::Coordinates(int x, int y) {
    this->x = x;
    this->y = y;
}

Coordinates::Coordinates(const std::string& position) {
    if (position[0] >= 'a' && position[0] <= 'z') {
        x = position[0] - 'a';
    } else {
        x = position[0] - 'A';
    }
    y = position[1] - '1';
}
