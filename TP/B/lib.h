#pragma once

#include <string>

struct Coordinates {
    int x;
    int y;

    Coordinates(int x, int y);

    Coordinates(const std::string& position);
};
