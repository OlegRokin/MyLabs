#ifndef ARRAYSEQUENCE_H
#define ARRAYSEQUENCE_H

#include "sequence.h"
#include "dynamicarray.h"
#include "dynamicarray.cpp"
#include <iostream>

template <class T>
class ArraySequence: public Sequence<T>
{

private:
    DynamicArray<T> *_array;

public:
    ArraySequence();
    ArraySequence(T* data, int count);
    ArraySequence(const ArraySequence<T>& array);

    T& GetFirst();
    T& GetLast();
    T& Get(int index);
    T& operator [] (const int index);
    Sequence<T>* GetSubSequence(int start_index, int end_index) const;
    int GetLength() const;
    void DelByIndex(int index);

    void Append(const T& value);
    void Prepend(const T& value);
    void InsertAt(const T& value, int index);
    void Set(int index, const T &value);
    Sequence<T>* Concat(Sequence <T> *seq) const;

    ~ArraySequence();
};


#endif // ARRAYSEQUENCE_H
