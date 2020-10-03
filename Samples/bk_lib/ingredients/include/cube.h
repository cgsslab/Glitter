#pragma once

#include "drawable.h"
#include "trianglemesh.h"

namespace ogl4slc3rd {
    class Cube : public TriangleMesh
    {
    public:
        Cube(GLfloat size = 1.0f);
    };
}
