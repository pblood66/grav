#include "grav/core.hpp"
#include "grav/core.hpp"

namespace grav
{
    Vec3::Vec3() : x(0), y(0), z(0)
    {
    }

    Vec3::Vec3(const real m_x, const real m_y, const real m_z) : x(m_x), y(m_y), z(m_z)
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
    void Vec3::operator+=(const Vec3 &other)
    {
        x += other.x;
        y += other.y;
        z += other.z;
    }
    Vec3 Vec3::operator+(const Vec3 &other) const
    {
        return Vec3(x + other.x, y + other.y, z + other.z);
    }
    void Vec3::operator-=(const Vec3 &other)
    {
        x -= other.x;
        y -= other.y;
        z -= other.z;
    }
    Vec3 Vec3::operator-(const Vec3 &other) const
    {
        return Vec3(x - other.x, y - other.y, z - other.z);
    }
    void Vec3::addScaledVector(const Vec3 &other, real scale)
    {
        x += other.x * scale;
        y += other.y * scale;
        z += other.z * scale;
    }
    Vec3 Vec3::componentProduct(const Vec3 &other) const
    {
        return Vec3(x * other.x, y * other.y, z * other.z);
    }
    void Vec3::componentProductUpdate(const Vec3 &other)
    {
        x *= other.x;
        y *= other.y;
        z *= other.z;
    }
    real Vec3::dot(const Vec3 &other)
    {
        return x * other.x + y * other.y + z * other.z;
    }
    real Vec3::operator*(const Vec3 &other)
    {
        return x * other.x + y * other.y + z * other.z;
    }
    Vec3 Vec3::cross(const Vec3 &other) const
    {
        return Vec3(
            y * other.z - z * other.y,
            z * other.x - x * other.z, 
            x * other.y - y * other.x
        );
    }
    void Vec3::operator%=(const Vec3 &other)
    {
        (*this) = cross(other);
    }
    Vec3 Vec3::operator%(const Vec3 &other) const
    {
        return Vec3(
            y * other.z - z * other.y,
            z * other.x - x * other.z, 
            x * other.y - y * other.x
        );
    }
}
 