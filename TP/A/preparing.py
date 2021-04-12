include = '#include <string>\n'

checkerStruct = '''
struct Checker {
    bool color;
    bool isKing;

    Checker(bool color, bool isKing) {
        this->color = color;
        this->isKing = isKing;
    }
};\n
'''

coordinatesStruct = '''
struct Coordinates {
    int x;
    int y;

    Coordinates(int x, int y) {
        this->x = x;
        this->y = y;
    }

    Coordinates(const std::string& position) {
        if (position[0] >= 'a' && position[0] <= 'z') {
            x = position[0] - 'a';
        } else {
            x = position[0] - 'A';
        }
        y = position[1] - '1';
    }
};\n
'''

with open('index.h', 'w') as f:
    f.write(include + checkerStruct + coordinatesStruct)
