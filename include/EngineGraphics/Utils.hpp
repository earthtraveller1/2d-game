#ifndef INCLUDED_EngineGraphics_Utils_h
#define INCLUDED_EngineGraphics_Utils_h

#include <glad/glad.h>

#include <iostream>

#define glCall(x)\
x;\
EngineGraphics::printErrors(__FILE__, #x, __LINE__)

namespace EngineGraphics {
    // Prints out all of the errors generated by OpenGL, if any
    void printErrors(std::string_view file, std::string_view line, int lineNum);
}

#endif
