#include "Distances.h"
#include "Person.h"
#include <cstdlib>

int main()
{
    auto const m1 = Meter<long>{ 120L };
    auto const m2 = Meter<long>{ 50L };
    auto const m3 = m1 + m2;
    auto const km = Kilometer<long>{ 30L };
    auto const surname = Surname{ "Dao" };
    auto const firstname = Firstname{ "Phuong" };

    std::cout << m3 << std::endl;
    std::cout << firstname << std::endl;

    return EXIT_SUCCESS;
}