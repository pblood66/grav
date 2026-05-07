#include "grav/core.hpp"

grav::Vec3::Vec3() : x(0), y(0), z(0)
{
}

grav::Vec3::Vec3(const grav::real, const grav::real y, const grav::real z) : x(x), y(y), z(z)
{
}

void grav::Vec3::invert()
{
    x = -x;
    y = -y;
    z = -z;
}
