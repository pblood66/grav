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
        grav::real magnitude() const;
        grav::real squareMagnitude() const;
        void normalize();

        void operator*=(const real& x);
        Vec3 operator*(const real& x) const;
    
    };
}

#endif