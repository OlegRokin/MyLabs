#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H


template <class T>
class DynamicArray
{
    T *_data;
    int _length;

public:
    DynamicArray();
    DynamicArray(T *data, int index);
    DynamicArray(int length);
    DynamicArray(const DynamicArray<T>& array);

    T& Get(int index);
    void DelByIndex(int index);
    int GetLength() const;

    void Set(int index, T value);
    void Resize(int length);

    ~DynamicArray();
};

#endif // DYNAMICARRAY_H
