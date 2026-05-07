#ifndef CORE_HPP
#define CORE_HPP
#include "grav/precision.hpp"

namespace grav
{
    class Vec3
    {
    public:
        grav::real x;
        grav::real y;
        grav::real z;

        Vec3();
        Vec3(const grav::real, const grav::real y, const grav::real z);
        void invert();
    };
}

#endif