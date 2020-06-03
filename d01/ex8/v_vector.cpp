#include "v_vector.hpp"
#include <cassert>
#include <cstdlib>

// template <class T>
// v_vector<T>::v_vector() {
//     _size = 0;
//     capacity = block;
//     v_arr = (T *)malloc(sizeof(T) * block);
// }

// template <class T>
// v_vector<T>::~v_vector() {
//     free(v_arr);
// }

// template <class T>
// void v_vector<T>::push_back(T t) {
//     _size++;
//     if(_size == capacity) {
//         capacity += block;
//         v_arr = (T *)realloc(v_arr, capacity);
//     }
//     v_arr[_size - 1] = t;
// }

// template <class T>
// size_t v_vector<T>::size() {
//     return _size;
// }

// template <class T>
// T& v_vector<T>::operator[] (size_t i) {
//     assert(i >= 0 && i < _size);
//     return v_arr[i];
// }
