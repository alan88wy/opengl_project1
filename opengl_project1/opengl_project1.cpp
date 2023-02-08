#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

// Defining Window dimention
const GLint WIDTH = 800, HEIGHT = 600;

int main()
{
    // Initialize GLFW
    if (!glfwInit()) {
        std::cout << "GLFW Init failed !" << std::endl;
        glfwTerminate();
        return 1;
    }

    // Setup GLFW Window properties
    // OPENGL Version
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);





    return 0;
}
