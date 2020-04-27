//hello
#include "movement_strategy.hpp"

void RegularMovementStrategy::set_x(double x){this->_x = x;};
void RegularMovementStrategy::set_y(double y){this->_y = y;};
void RegularMovementStrategy::set_dx(double x){this->_dx = x;};
void RegularMovementStrategy::set_dy(double y){this->_dy = y;};

void LockdownMovementStrategy::set_x(double x){};
void LockdownMovementStrategy::set_y(double y){};
void LockdownMovementStrategy::set_dx(double x){};
void LockdownMovementStrategy::set_dy(double y){};
