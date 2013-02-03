#ifndef _UMLBASEDEPLOYMENT_H
#define _UMLBASEDEPLOYMENT_H


#include "UmlItem.h"
#include <WrapperStr.h>

//  Manage the deployments
class UmlBaseDeployment : public UmlItem
{
protected:
    UmlBaseDeployment(void * id, WrapperStr n) : UmlItem(id, n) {};

};

#endif
