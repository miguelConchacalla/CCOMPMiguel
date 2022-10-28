#ifndef __DYNPTRARR__H__
#define __DYNPTRARR__H__
#include "Point.h"
class DynPtrArr {
    int size;
    point* data;
    public:
    DynPtrArr();
    DynPtrArr(const point array[], int size);
    DynPtrArr(const DynPtrArr &o);

};
#endif