#ifndef _ADDABLE_H_
#define _ADDABLE_H_

template<typename Derived>
struct Addable
{
    friend Derived operator+(Derived const& a, Derived const& b)
    {
        return Derived(a.get() + b.get());
    }
};

#endif