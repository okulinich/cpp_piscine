#pragma once
#include <iostream>
#include <cassert>

/*
    The following code is forbidden by piscine rules, but i wanted to try
    to create own vector class. Without it, task is not difficulte.
*/

#define block 4

template <class T>
class v_vector {
    private:
        size_t _size;
        size_t capacity;
        T *v_arr;
    public:
        v_vector() {
            _size = 0;
            capacity = block;
            v_arr = (T *)malloc(sizeof(T) * block);
        }

        ~v_vector() {
            free(v_arr);
        }

        void push_back(T t) {
            v_arr[_size] = t;
            _size++;
            if(_size == capacity) {
                capacity += block;
                v_arr = (T *)realloc(v_arr, capacity * sizeof(T));
            }
        }

        size_t size() {
            return _size;
        }

        T& operator[] (size_t i) {
            assert(i >= 0 && i < _size);
            return v_arr[i];
        }

};
