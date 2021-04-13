checkerStruct = '''
namespace SumAndSubstraction {
    
    int substraction(int first, int second) {

        return first - second;

    }

};\n
'''

with open('index.h', 'w') as f:
    f.write(checkerStruct)
