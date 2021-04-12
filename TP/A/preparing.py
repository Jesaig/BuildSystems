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

with open('index.h', 'w') as f:
    f.write(checkerStruct)
