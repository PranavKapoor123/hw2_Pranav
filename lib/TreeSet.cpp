#ifndef TREE_SET_CPP
#define TREE_SET_CPP

#include "TreeSet.hpp"

template <typename T>
TreeSet<T>::TreeSet() : _root(nullptr), _size(0) {
    _comparator = [](T left, T right) {
        if (left < right)
        {
            return -1;
        }
        else if (left > right)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    };
}


// TODO: Implement all methods defined in TreeSet.hpp here


#endif
