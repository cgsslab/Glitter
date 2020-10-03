#pragma once

#include "trianglemesh.h"
#include "cookbookogl.h"
namespace ogl4slc3rd {

    class Torus : public TriangleMesh
    {
    public:
        Torus(GLfloat outerRadius, GLfloat innerRadius, GLuint nsides, GLuint nrings);
    };
}
