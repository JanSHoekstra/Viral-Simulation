// Corona Simulation - basic simulation of a human transmissable virus
// Copyright (C) 2020  wbrinksma

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "subject.h"
#include <math.h>

namespace corsim
{
    double Subject::x()
    {
	return this->mvStrat->x();
    }

    double Subject::y()
    {
	return this->mvStrat->y();
    }

    void Subject::set_x(double x)
    {
	this->mvStrat->set_x(x);
    }

    void Subject::set_y(double y)
    {
	this->mvStrat->set_y(y);
    }

    double Subject::dx()
    {
	return this->mvStrat->dx();
    }

    double Subject::dy()
    {
	return this->mvStrat->dy();
    }

    void Subject::set_dx(double dx)
    {
	this->mvStrat->set_dx(dx);
    }

    void Subject::set_dy(double dy)
    {
	this->mvStrat->set_dy(dy);
    }

    int Subject::radius()
    {
	return this->_radius;
    }

    bool Subject::infected()
    {
	return this->_infected;
    }

    void Subject::getVirus()
    {
	this->_infected = true;
    }

    double Subject::angle()
    {
	return atan2(_dy,_dx);
    }

double Subject::speed()
{
    return sqrt(_dx * _dx + _dy * _dy);
}

}
