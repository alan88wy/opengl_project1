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

    // Allow forward compatibility
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    GLFWwindow* mainWindow = glfwCreateWindow(WIDTH, HEIGHT, "Test Window", NULL, NULL);

    if (!mainWindow) {
        std::cout << "GLFW Window Creation failed !" << std::endl;
        glfwTerminate();
        return 1;
    }

    // Get buffer size information
    int bufferWidth, bufferHeight;

    glfwGetFramebufferSize(mainWindow, &bufferWidth, &bufferHeight);

    // Set the context for GLEW to use
    glfwMakeContextCurrent(mainWindow);

    // Allow modern extension feature
    glewExperimental = GL_TRUE;

    if (glewInit() != GLEW_OK) {
     
        std::cout << "GLEW Initialization failed !" << std::endl;
        glfwDestroyWindow(mainWindow);
        glfwTerminate();
        return 1;
 
    }

    // Setup Viewport size
    glViewport(0, 0, bufferWidth, bufferHeight);


    // loop until window closed
    while (!glfwWindowShouldClose(mainWindow)) {
        // Get and Handle user input event
        glfwPollEvents();

        // clear window - rgb color between 0-1, if you want 112, divide 112 by 256 
        glClearColor(1.0f,0.0f,0.0f,1);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(mainWindow);
    }




    return 0;
}
