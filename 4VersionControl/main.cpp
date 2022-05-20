#include <iostream> 
#include <stdio.h> 
#include <Adder.h>
#include <config.h>

int main()
{
    using namespace std;
    cout << "hello cmake." << endl;
    cout << adder(1.2, 2.3) << endl;

    cout << "Version: "<< OLOS_VERSION_MAJOR <<"." << OLOS_VERSION_MINOR << endl;

    return 0;
}