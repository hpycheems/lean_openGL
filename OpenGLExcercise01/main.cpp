#include <iostream>

#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main() {
	glfwInit();//初始化函数库
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);//提示 主版本号
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);//提示 次版本号
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);//提示 使用的流水线

	return 0;
}

