#include <stdio.h>
#include <string.h>

class meo
{
private:
    /* data */
public:
    meo(/* args */);
    ~meo();
    void meomeo();
};

meo::meo(/* args */) {}

meo::~meo() {}

void meo::meomeo() {
    printf("meomeo\n");
}


// class tho thua ke nhung gi meo public
class tho: public meo
{
private:
    /* data */
public:
    tho(/* args */);
    ~tho();
};

tho::tho(/* args */)
{
}

tho::~tho()
{
}


int main () {
    meo a;
    a.meomeo();
    tho b;
    b.meomeo();

    return 0;
}