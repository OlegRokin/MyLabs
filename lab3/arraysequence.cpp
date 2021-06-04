#include "arraysequence.h"

template<class T>
ArraySequence<T>::ArraySequence(): _array(new DynamicArray <T>()) {}

template<class T>
ArraySequence<T>::ArraySequence(T* data, int count) {
    _array = new DynamicArray<T>(data, count);
}

template<class T>
ArraySequence<T>::ArraySequence(const ArraySequence<T> &array) {
    _array = new DynamicArray<T>(array.GetLength());
    for (int i = 0; i < _array->GetLength(); ++i) {
        _array->Set(i, array.Get(i));
    }
}

template<class T>
T &ArraySequence<T>::GetFirst() {
    if (_array->GetLength() <= 0)
        throw std::out_of_range("1");
    return _array->Get(0);
}

template<class T>
T &ArraySequence<T>::GetLast() {
    if (_array->GetLength() <= 0)
        throw std::out_of_range("2");
    return _array->Get(this->GetLength());
}

template<class T>
T &ArraySequence<T>::Get(int index) {
    if (index < 0 || index >= _array->GetLength())
        throw std::out_of_range("3");
    return _array->Get(index);
}

template<class T>
T &ArraySequence<T>::operator[](const int index) {
    if (index < 0 || index >= _array->GetLength())
        throw std::out_of_range("4");
    return this->Get(index);
}

template<class T>
Sequence<T> *ArraySequence<T>::GetSubSequence(int start_index, int end_index) const {
    try {
        if (start_index > end_index || start_index < 0 || end_index < 0 || start_index >= this->GetLength()
                || end_index > this->GetLength())
            throw "Invalid index!";
        Sequence<T> *array = (Sequence<T> *) new DynamicArray<T>(end_index - start_index);
        for (int i = start_index; i < end_index; ++i)
            array->Set(i - start_index, _array->Get(i));
        return array;
    }  catch (const char *error) {
        std::cout << error << std::endl;
    }
    return 0;
}

template<class T>
int ArraySequence<T>::GetLength() const {
    return _array->GetLength();
}

template<class T>
void ArraySequence<T>::DelByIndex(int index) {
    try {
        if (index < 0 || index >= _array->GetLength())
            throw "Index is out of range!";
        _array->DelByIndex(index);
    }  catch (const char *error) {
        std::cout << error << std::endl;
    }
}

template<class T>
void ArraySequence<T>::Append(const T &value){
    _array->Resize(this->GetLength() + 1);
    _array->Set(this->GetLength() - 1, value);
}

template<class T>
void ArraySequence<T>::Prepend(const T &value) {
    _array->Resize(this->GetLength()+1);
    for (int i = this->GetLength() - 1; i > 0; --i)
        _array->Set(i, this->Get(i - 1));
    _array->Set(0, value);
}

template<class T>
void ArraySequence<T>::InsertAt(const T &value, int index) {
    if (index == this->GetLength()) {
        this->Append(value);
        return;
    }
    if (index > this->GetLength()) {
        _array->Resize(index);
        this->Append(value);
        return;
    }
    _array->Resize(this->GetLength() + 1);
    for (int i = this->GetLength() - 1; i > index; --i)
        _array->Set(i, this->Get(i - 1));
    _array->Set(index, value);
}

template<class T>
void ArraySequence<T>::Set(int index, const T &value) {
    if (index >= this->GetLength())
        throw std::out_of_range("8");
    _array->Set(index, value);
}

template<class T>
Sequence<T> *ArraySequence<T>::Concat(Sequence<T> *seq) const {
    try {
        if (seq == nullptr)
            throw "There is no sequence to contact!";
        Sequence<T> *array = (Sequence<T> *) new ArraySequence<T>();
        for (int i = 0; i < _array->GetLength(); ++i)
            array->Append(_array->Get(i));
        for (int i = 0; i < seq->GetLength(); ++i)
            array->Append(seq->Get(i));
        return array;
    }  catch (const char *error) {
        std::cout << error << std::endl;
    }
    return 0;
}

template<class T>
ArraySequence<T>::~ArraySequence() {
    _array->~DynamicArray<T>();
    delete _array;
}
