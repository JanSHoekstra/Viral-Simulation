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
	return this->_infection > 0;
    }

    bool Subject::immune()
    {
	return this->_immune > 0;
    }

    void Subject::getVirus()
    {
	if(!_immune)
	    this->_infection = INFECTION;
    }

    double Subject::angle()
    {
	return atan2(dy(),dx());
    }

    double Subject::speed()
    {
	return sqrt(dx() * dx() + dy() * dy());
    }

    void Subject::tick()
    {
	if(_immune > 0) {
	    --_immune;
	}

	if(_infection > 1){
	    --_infection;
	}

	if(_infection == 1){
	    --_infection;
	    _immune = IMMUNITY;
	}
    }
}
