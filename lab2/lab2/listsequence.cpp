#include "listsequence.h"

template<typename T>
ListSequence<T>::ListSequence(): _list(new LinkedList <T>()) {}

template<typename T>
ListSequence<T>::ListSequence(T *data, int count)
{
    _list = new LinkedList<T>(data, count);
}

template<typename T>
ListSequence<T>::ListSequence(const ListSequence<T> &list)
{
    _list = new LinkedList<T>(list);
}

template<typename T>
T &ListSequence<T>::GetFirst(){
    if (!_list->GetLength())
        throw std::out_of_range ("");
    return _list->front();
}

template<typename T>
T &ListSequence<T>::GetLast(){
    if (!_list->GetLength())
        throw std::out_of_range ("");
    return _list->back();
}

template<typename T>
T &ListSequence<T>::Get(int index)
{
    if (index >= _list->GetLength() || index < 0)
        throw std::out_of_range ("");
    return _list->Get(index);

}

template<class T>
T &ListSequence<T>::operator[](const int index) {
    if (index >= _list->GetLength() || index < 0)
        throw std::out_of_range ("");
    return this->Get(index);
}

template<typename T>
Sequence<T> *ListSequence<T>::GetSubSequence(int start_index, int end_index) const
{
    if (start_index < 0 || start_index >= _list->GetLength() || end_index < 0 || end_index > _list->GetLength())
        throw std::out_of_range ("");
    return (Sequence<T> *) _list->GetSubList(start_index, end_index);
}

template<typename T>
int ListSequence<T>::GetLength() const {
    return _list->GetLength();
}

template<class T>
void ListSequence<T>::DelByIndex(int index) {
    if (index < 0 || index >= this->GetLength())
        throw std::out_of_range ("");
    _list->delete_by_index(index);
}

template<typename T>
void ListSequence<T>::Append(const T &value){
    _list->push_back(value);
}

template<typename T>
void ListSequence<T>::Prepend(const T &value) {
    _list->push_front(value);
}

template<typename T>
void ListSequence<T>::InsertAt(const T &value, int index) {
    if (index < 0 || index > _list->GetLength())
        throw std::out_of_range ("");
    _list->InsertAt(value, index);
}

template<class T>
void ListSequence<T>::Set(int index, const T& item) {
    if (index < 0 || index > _list->GetLength())
        throw std::out_of_range ("");
    _list->Set(index, item);
}

template<typename T>
Sequence<T> *ListSequence<T>::Concat(Sequence<T> *seq) const
{
    if (seq == nullptr)
        throw std::out_of_range ("");
    //ListSequence<T> *seq_list = new LinkedList<T>();
    ListSequence<T> *seq_list = new ListSequence<T>();
    for (int i = 0; i < seq->GetLength(); ++i) {
        seq_list->Append(seq->Get(i));
    }
    return (Sequence<T> *) _list->Concat(seq_list->_list);
}

template<typename T>
ListSequence<T>::~ListSequence()
{
    _list->~LinkedList<T>();
    delete _list;
}

