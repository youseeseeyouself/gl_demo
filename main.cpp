#include <iostream>

#include "glad/glad.h"
#include "GLFW/glfw3.h"

int main() {
  glfwInit();
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  auto *window = glfwCreateWindow(800, 600, "gl_demo", nullptr, nullptr);
  if (window == nullptr) {
    std::cout << "create window failed" << errno << std::endl;
    glfwTerminate();
    exit(errno);
  }
  glfwMakeContextCurrent(window);
  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
  {
    std::cout << "Failed to initialize GLAD" << std::endl;
    return -1;
  }
  glViewport(0, 0, 800, 600);
  return 0;
}
