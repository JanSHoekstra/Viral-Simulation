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

#pragma once 
#include "movement_strategy.hpp"

//INFECTION lasts a certain amount of ticks.
constexpr int INFECTION = 100;
//Immunity lasts a certain amount of ticks.
constexpr int IMMUNITY = 200;

namespace corsim
{
    
/**
 * A subject is an entity within the simulation. It is modeled as a
 * circle in 2D and can be infected.
 */
class Subject
{
public:
    Subject(int radius, int infected, MovementStrategy* mvStrat):
	mvStrat(mvStrat), _infection(infected), _radius(radius){};
    double x();
    double y();
    void set_x(double x);
    void set_y(double y);
    double dx(); //Speed on x axis
    double dy(); //Speed on y axis
    int radius(); //Radius needed for collisions
    void set_dx(double dx);
    void set_dy(double dy);
    bool infected();
    bool immune();
    void getVirus();
    double angle();
    double speed();
    
    MovementStrategy* mvStrat = new RegularMovementStrategy(0,0);
private:
    int _infection = INFECTION;
    int _immune = 0;
    int _radius = 0;
};

};
