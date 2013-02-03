#ifndef _FLOWBEHAVIOR_H
#define _FLOWBEHAVIOR_H


#include <WrapperStr.h>

class FlowBehavior
{
public:
    WrapperStr weight;

    WrapperStr guard;

    WrapperStr selection;

    WrapperStr transformation;

    void read();

    void unload();

};

#endif
