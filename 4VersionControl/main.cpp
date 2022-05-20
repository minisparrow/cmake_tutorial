#include <iostream> 
#include <stdio.h> 
#include <Adder.h>
#include <GLFW/glfw3.h>
#include "config.h"

int main()
{
    using namespace std;
    cout << "hello cmake." << endl;
    cout << adder(1.2, 2.3) << endl;

    cout << "Version: "<< OLOS_VERSION_MAJOR <<"." << OLOS_VERSION_MINOR << endl;

    //glfw demo
    GLFWwindow* window;
    int width, height;

    if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
    }

    glfwWindowHint(GLFW_DEPTH_BITS, 16);
    glfwWindowHint(GLFW_TRANSPARENT_FRAMEBUFFER, GLFW_TRUE);

    window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
    }

    // Set callback functions
    glfwMakeContextCurrent(window);
    glfwSwapInterval( 1 );

    glfwGetFramebufferSize(window, &width, &height);

    // Main loop
    while( !glfwWindowShouldClose(window) )
    {
        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();

    return 0;
}