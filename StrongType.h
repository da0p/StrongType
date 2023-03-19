#ifndef _STRONG_TYPE_H_
#define _STRONG_TYPE_H_

#include <utility>
#include <iostream>

template<typename T, typename Tag, template<typename> class... Skills>
struct StrongType : private Skills<StrongType<T, Tag, Skills...>>...
{
public:
    explicit StrongType( T const& value ) : value_( value ) {}

    T& get() {return value_;}
    T const& get() const { return value_; }

private:
    T value_;
};

#endif