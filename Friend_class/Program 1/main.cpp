

#include"Friend.cpp"

int main()
{
    sphere s(5);box b(10,23,3);cone c(20);
    s.compute_volume();
    b.compute_volume();
    c.compute_volume();
    compare(s,b);
    printf("--------------\n");
    c.compare(s);
    return 0;
}
