#include <iostream>

#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main() {
	glfwInit();//��ʼ��������
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);//��ʾ ���汾��
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);//��ʾ �ΰ汾��
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);//��ʾ ʹ�õ���ˮ��

	return 0;
}

