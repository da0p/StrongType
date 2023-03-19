#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>
#include "Printable.h"
#include "StrongType.h"

using Surname = StrongType<std::string, struct SurnameTag, Printable>;

using Firstname = StrongType<std::string, struct FirstnameTag, Printable>;

#endif
