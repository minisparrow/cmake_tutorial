#include <iostream> 
#include <stdio.h> 
#include <config.h>

int main()
{
    using namespace std;
    cout << "hello cmake." << endl;
    #ifdef USE_ADDER_ON
        cout << "use adder lib:" << adder(1.2, 2.3) << endl;
    #else
        cout << "not use adder lib:" << 1.2 + 2.3 << endl;
    #endif
    

    cout << "Version: "<< OLOS_VERSION_MAJOR <<"." << OLOS_VERSION_MINOR << endl;

    return 0;
}