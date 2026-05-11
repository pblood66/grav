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

        void operator*=(const real &x);
        Vec3 operator*(const real &x) const;
        void operator+=(const Vec3 &other);
        Vec3 operator+(const Vec3 &other) const;
        void operator-=(const Vec3 &other);
        Vec3 operator-(const Vec3 &other) const;
        void addScaledVector(const Vec3 &other, real scale);
        Vec3 componentProduct(const Vec3 &other) const;
        void componentProductUpdate(const Vec3 &other);
        real dot(const Vec3 &other);
        // dot product operator overload
        real operator*(const Vec3 &other);
        Vec3 cross(const Vec3 &other) const;
        // cross product operator overload
        void operator%=(const Vec3 &other);
        Vec3 operator%(const Vec3 &other) const;
    };
}

#endif