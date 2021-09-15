//program to implement the friend concept in cpp
class cone;
class sphere;
class box
{
private:
    double length, breadth, hight, volume;                
public:
    double compute_volume();
    void ratio(sphere s);
    friend void compare(sphere s,box b);
    box();
    box(double length, double breadth, double hight);  
};

class sphere
{
private:
    double radius;double pi = 3.14,volume;
    friend class cone;  
public:
    double compute_volume();
    friend void compare(sphere s,box b);
    friend void box::ratio(sphere s);
    sphere();
    sphere(double radius);
};

class cone
{
private:
    double height,volume;friend class sphere;
public:
    double compute_volume();
    cone();
    void compare(sphere s);
    cone(double height);
};

