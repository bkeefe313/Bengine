#include "Bengine.hpp"

void Bengine::init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);     // set the clear color to black
}

void Bengine::run() {
    //main loop!
    while (!glfwWindowShouldClose(window)) {  // check if the window was instructed to be closed
        glClear(GL_COLOR_BUFFER_BIT); // clear the current color contents in the window


        // Get the size of our framebuffer.  Ideally this should be the same dimensions as our window, but
        // when using a Retina display the actual window can be larger than the requested window.  Therefore
        // query what the actual size of the window we are rendering to is.
        GLint framebufferWidth, framebufferHeight;
        glfwGetFramebufferSize(window, &framebufferWidth, &framebufferHeight);

        // update the viewport - tell OpenGL we want to render to the whole window
        glViewport(0, 0, framebufferWidth, framebufferHeight);           

        //swap between front and back buffer
        glfwSwapBuffers(window);
        // flush the OpenGL commands and make sure they get rendered!
        glfwPollEvents();
    }
}