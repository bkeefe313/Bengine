/*

This class describes the main components of the Bengine. It contains primary GL/GLFW components and handles most of the heavylifting of the engine's operations.

*/

#include <iostream>
#include <windows.h>
#include <GLFW/glfw3.h>

class Bengine {
public:
    GLFWwindow *window;
    GLuint width, height;
    char* title;

    //// Outlined below is the general structure of the engine pipeline from inputs and assets to scene rendering
    //// At each level are todos for important classes that together will comprise the entire engine
    //// By no means is this structure finalized or *correct*
    //// This serves as a checklist of necessary components and the likely form they will take after being well encapsulated and organized
    //// Good luck

    //// ######################################################### INPUT HANDLING ######################################################### ////

    //// \todo - IO RECEIVER            -      live, dynamic inputs. take in orderly fashion and pass it on
    //// \todo - STATIC IO LOADER       -      game asset loader, delivers to asset warehouse

    //// ######################################################## SETUP AND STORAGE ####################################################### ////

    //// \todo - LOGIC CENTER           -      brains! where we turn IO into useful information and store shorthand useful CPU functions
        //// \todo - MATH BITS          -      a place to store useful math functions that are often utilized
        //// \todo - IO INTERPRETER     -      converts raw IO to useful packets of info for engine
        //// \todo - COMPUTE SHADER     -      describes a shader program meant for arbitrary calculations we don't wanna do on CPU
    //// \todo - ASSET WAREHOUSE        -      sends out neatly packaged assets for whoever asks
        //// \todo - MODELS             -      model data stored in a compact and useful form for the engine
        //// \todo - MATERIALS          -      datatype applicable to models that affects their appearance at render time
        //// \todo - IMAGES             -      image data converted into a more relevant structure for the engine
        //// \todo - ANIMATIONS         -      animation data organized for optimal engine use
        //// \todo - SOUNDS             -      sound data stored usefully for engine

    //// ####################################################### SCENE CONSTRUCTION ####################################################### ////

    //// \todo - SCENE HIERARCHY        -      blueprints scene
        //// \todo - OBJECT(s)          -      keeps track of an individual in-use object in the scene
            //// \todo - ANIMATOR       -      attachable class for objects that handles animations
            //// \todo - SHADER         -      attachable (and necessary) class that hooks an object up to the relevant shader
            //// \todo - ATTRIBUTES     -      whatever interesting things an object may do outside of moving and looking a certain way (sounds, interactablility, etc)
        //// \todo - CAMERA             -      camera template for scene
        //// \todo - LIGHT              -      light template for scene
        //// \todo - ZONE               -      level design tool for keeping track of backend scene information
        //// \todo - UI                 -      all purpose template for UI elements
        //// \todo - ENVIRONMENT        -      class containing information about attributes generalized to the entire scene, mostly physics constants and properties

    //// ##################################################### SCENE FINAL CALCULATIONS #################################################### ////

    //// \todo - PRE-PHYS OPTIMIZER     -      make sure we only make calculations for things we have to
    //// \todo - PHYSICS                -      take scene and compute interactions with each other and environment, then update scene accordingly
    //// \todo - POST-PHYS OPTIMIZER    -      try and reduce amount of work sent to GPU for rendering after having done physics calculations
    //// \todo - SOUND ENGINE           -      make sure everything sounds good, happens on cue, and makes sense to player

    //// ############################################################# RENDER ############################################################# ////

    //// \todo - SCENE RENDERER         -      where the magic happens! render scene to screen



    void run();

    Bengine(GLuint initWidth, GLuint initHeight, char* initTitle) {
    width = initWidth;
    height = initHeight;
    title = initTitle;
    window = glfwCreateWindow(width, height, title, NULL, NULL);
    if (window == NULL)
        std::cerr << "error: window creation failed." << std::endl;
    init();
}

private:
    void init();

};