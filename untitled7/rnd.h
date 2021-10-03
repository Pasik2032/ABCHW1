#ifndef __rnd__
#define __rnd__

#include <cstdlib>

//------------------------------------------------------------------------------
// rnd.h - содержит генератор случайных чисел в диапазоне от 1 до указаного параметра
//------------------------------------------------------------------------------

inline int Random(int num) {
    return rand() % num + 1;
}

inline int Random(int max, int min) {
    return rand() % (max - min + 1) + min;
}

#endif //__rnd__
