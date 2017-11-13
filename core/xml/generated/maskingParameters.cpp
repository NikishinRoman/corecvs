/**
 * \file maskingParameters.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

#include <vector>
#include <stddef.h>
#include "core/xml/generated/maskingParameters.h"

/**
 *  Looks extremely unsafe because it depends on the order of static initialization.
 *  Should check standard if this is ok
 *
 *  Also it's not clear why removing "= Reflection()" breaks the code;
 **/

namespace corecvs {
template<>
Reflection BaseReflection<MaskingParameters>::reflection = Reflection();
template<>
int BaseReflection<MaskingParameters>::dummy = MaskingParameters::staticInit();
} // namespace corecvs 

SUPPRESS_OFFSET_WARNING_BEGIN

int MaskingParameters::staticInit()
{

    ReflectionNaming &nameing = naming();
    nameing = ReflectionNaming(
        "Masking Parameters",
        "Masking Parameters",
        ""
    );
     

    fields().push_back(
        new BoolField
        (
          MaskingParameters::INVERT_ID,
          offsetof(MaskingParameters, mInvert),
          false,
          "Invert",
          "Invert",
          "Invert"
        )
    );
   return 0;
}

SUPPRESS_OFFSET_WARNING_END


