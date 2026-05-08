#include "grav/core.hpp"
#include "core.hpp"

namespace grav
{
    Vec3::Vec3() : x(0), y(0), z(0)
    {
    }

    Vec3::Vec3(const real, const real y, const real z) : x(x), y(y), z(z)
    {
    }

    void Vec3::invert()
    {
        x = -x;
        y = -y;
        z = -z;
    }

    real Vec3::magnitude() const
    {
        return real_sqrt(x * x + y * y + z * z);
    }

    real Vec3::squareMagnitude() const
    {
        return x * x + y * y + z * z;
    }

    void Vec3::normalize()
    {
        real length = magnitude();

        if (length > 0)
        {
            real unit_length = ((real)1) / length;
            *this *= unit_length;
        }
    }

    void Vec3::operator*=(const real &x)
    {
        this->x *= x;
        this->y *= x;
        this->z *= x;
    }

    Vec3 Vec3::operator*(const real &x) const
    {
        return Vec3(this->x * x, this->y * x, this->z * x);
    }
}
