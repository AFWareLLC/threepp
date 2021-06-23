// https://github.com/mrdoob/three.js/blob/r129/src/renderers/webgl/WebGLInfo.js

#ifndef THREEPP_GLINFO_HPP
#define THREEPP_GLINFO_HPP

#include "threepp/renderers/gl/GLProgram.hpp"

#include "threepp/utils/StringUtils.hpp"


#include <vector>

namespace threepp::gl {

    struct MemoryInfo {

        int geometries;
        int textures;

    };

    struct RenderInfo {

        int frame;
        int calls;
        int triangles;
        int points;
        int lines;

    };

    struct GLInfo {

        void update(int count, int mode, int instanceCount);

        void reset ();

    private:
        MemoryInfo memory;
        RenderInfo render;

        bool autoReset = true;

        std::vector<GLProgram> programs;

    };

}

#endif//THREEPP_GLINFO_HPP
