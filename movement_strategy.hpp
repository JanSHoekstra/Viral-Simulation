#pragma once

class MovementStrategy{
public:
    //virtual ~MovementStrategy();
    virtual void set_x(double x) = 0;
    virtual void set_y(double y) = 0;
    virtual void set_dx(double dx) = 0;
    virtual void set_dy(double dy) = 0;
    virtual double x() = 0;
    virtual double y() = 0;
    virtual double dx() = 0;
    virtual double dy() = 0;
};

class RegularMovementStrategy : public MovementStrategy {
public:
    ~RegularMovementStrategy();
    RegularMovementStrategy(int x,int y) : _x(x),_y(y){};
    void set_x(double x);
    void set_y(double y);
    void set_dx(double dx);
    void set_dy(double dy);
    double x(){return _x;};
    double y(){return _y;};
    double dx(){return _dx;};
    double dy(){return _dy;};
private:
    double _x = 0, _y = 0, _dx = 0, _dy = 0;
};


class LockdownMovementStrategy : public MovementStrategy {
public:
    ~LockdownMovementStrategy();
    LockdownMovementStrategy(int x,int y) : _x(x),_y(y){};
    void set_x(double x);
    void set_y(double y);
    void set_dx(double dx);
    void set_dy(double dy);
    double x(){return _x;};
    double y(){return _y;};
    double dx(){return _dx;};
    double dy(){return _dy;};
private:
    double _x = 0, _y = 0, _dx = 0, _dy = 0;
};
