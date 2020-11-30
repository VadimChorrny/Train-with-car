#pragma once
class Array
{
    
public:
    Array(size_t size, int filler);
    Array(size_t size);
    Array() = default;
    Array(const Array& other);
    Array& operator = (const Array& other);
    Array operator + (const Array& other) const;
    int& operator [] (int index);
    void print() const;
    bool operator == (const Array& other);// this = left
    void print() const;
    Array& operator ++();// prefix
    Array operator ++(int); // postfix
    ~Array();
private:
    bool isValidIndex(size_t index) const;
    size_t size;
    int* array = nullptr;
}​​​​​​​;
inline bool Array::isValidIndex(size_t index) const
{
    return index < size;
}​​​​​​​


