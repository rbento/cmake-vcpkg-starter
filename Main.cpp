
#define EASTL_EXCEPTIONS_ENABLED 0

#include <gl/glew.h>
#include <glfw/glfw3.h>
#include <glm/glm.hpp>
#include <eastl/vector.h>

int main(void)
{
    if (!glfwInit())
    {
        return -1;
    }

    GLFWwindow* Window = glfwCreateWindow(640, 480, "OpenGL", nullptr, nullptr);

    if (!Window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(Window);

    if (glewInit() != GLEW_OK)
    {
        return -1;
    }

    while (!glfwWindowShouldClose(Window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(Window);

        glfwPollEvents();
    }
 
    glfwDestroyWindow(Window); 	
    glfwTerminate();

    glm::vec2 TestGLM = glm::vec2(1, 1);
    eastl::vector<int> TestEASTL;

    return 0;
}