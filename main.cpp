/*
This is the main file for Iteration 1 of "Bengine" (name is a work in progress), a 2D focused game engine written using OpenGL.
*/

#include <iostream>

#include <windows.h>
#include <gl/GL.h>
#include <glm/glm.hpp>
#include <GLFW/glfw3.h>
#include "Bengine.cpp"

Bengine *engine;

int main() {
    if (glfwInit() == NULL) {
        std::cerr << "error: glfw initialization failed." << std::endl;
        return 1;
    }

    engine = new Bengine(512, 512, "Bengine");

    engine->run();

    return 0;
}