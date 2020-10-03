#pragma once

#include "trianglemesh.h"
#include "cookbookogl.h"

namespace ogl4slc3rd {

    class Sphere : public TriangleMesh
    {
    public:
        Sphere(float rad, GLuint sl, GLuint st);
    };
}
