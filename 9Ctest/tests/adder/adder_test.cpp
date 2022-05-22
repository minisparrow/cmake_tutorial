#include <iostream>
#include <Adder.h>
#include <cstdlib>

int main(int argc, char* argv[]) 
{
    using namespace std;
    float value = adder(atof(argv[1]), atof(argv[2]));
    float exp_value = atof(argv[1]) + atof(argv[2]);
    bool is_equal = (value == exp_value);
    int ret = is_equal ? EXIT_SUCCESS : EXIT_FAILURE;
    return ret;
}