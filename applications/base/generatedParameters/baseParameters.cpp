/**
 * \file baseParameters.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

#include <vector>
#include <stddef.h>
#include "baseParameters.h"

/**
 *  Looks extremely unsafe because it depends on the order of static initialization.
 *  Should check standard if this is ok
 *
 *  Also it's not clear why removing "= Reflection()" breaks the code;
 **/

namespace corecvs {
template<>
Reflection BaseReflection<BaseParameters>::reflection = Reflection();
template<>
int BaseReflection<BaseParameters>::dummy = BaseParameters::staticInit();
} // namespace corecvs 

SUPPRESS_OFFSET_WARNING_BEGIN


using namespace corecvs;

int BaseParameters::staticInit()
{

    ReflectionNaming &nameing = naming();
    nameing = ReflectionNaming(
        "Base Parameters",
        "Base parameters",
        ""
    );

     getReflection()->objectSize = sizeof(BaseParameters);
     

    EnumField* field0 = new EnumField
        (
          BaseParameters::ROTATION_ID,
          offsetof(BaseParameters, mRotation),
          0,
          "rotation",
          "rotation",
          "rotation",
          new EnumReflection(4
          , new EnumOption(0,"No rotation")
          , new EnumOption(1,"Clockwise 90deg")
          , new EnumOption(2,"Clockwise 180deg")
          , new EnumOption(3,"Clockwise 270deg")
          )
        );
    field0->widgetHint=BaseField::COMBO_BOX;
    fields().push_back(field0);
    /*  */ 
    BoolField* field1 = new BoolField
        (
          BaseParameters::MIRROR_ID,
          offsetof(BaseParameters, mMirror),
          false,
          "mirror",
          "mirror",
          "mirror"
        );
    field1->widgetHint=BaseField::CHECK_BOX;
    fields().push_back(field1);
    /*  */ 
    BoolField* field2 = new BoolField
        (
          BaseParameters::SWAPCAMERAS_ID,
          offsetof(BaseParameters, mSwapCameras),
          false,
          "swapCameras",
          "swapCameras",
          "swapCameras"
        );
    field2->widgetHint=BaseField::RADIO_BUTTON;
    fields().push_back(field2);
    /*  */ 
    BoolField* field3 = new BoolField
        (
          BaseParameters::FILTERLOCK_ID,
          offsetof(BaseParameters, mFilterLock),
          false,
          "filterLock",
          "filterLock",
          "filterLock"
        );
    field3->widgetHint=BaseField::RADIO_BUTTON;
    fields().push_back(field3);
    /*  */ 
    BoolField* field4 = new BoolField
        (
          BaseParameters::ENABLEFILTERGRAPH_ID,
          offsetof(BaseParameters, mEnableFilterGraph),
          false,
          "enableFilterGraph",
          "enableFilterGraph",
          "enableFilterGraph"
        );
    field4->widgetHint=BaseField::CHECK_BOX;
    fields().push_back(field4);
    /*  */ 
    DoubleField* field5 = new DoubleField
        (
          BaseParameters::DOWNSAMPLE_ID,
          offsetof(BaseParameters, mDownsample),
          1,
          "downsample",
          "downsample",
          "Prescale coefficient for input image",
          true,
         0.5,
         16
        );
    field5->widgetHint=BaseField::SPIN_BOX;
    field5->precision=2;
    fields().push_back(field5);
    /*  */ 
    IntField* field6 = new IntField
        (
          BaseParameters::H_ID,
          offsetof(BaseParameters, mH),
          640,
          "h",
          "h",
          "Input crop height",
          true,
         0,
         2024
        );
    fields().push_back(field6);
    /*  */ 
    IntField* field7 = new IntField
        (
          BaseParameters::W_ID,
          offsetof(BaseParameters, mW),
          480,
          "w",
          "w",
          "Input crop width",
          true,
         0,
         4096
        );
    fields().push_back(field7);
    /*  */ 
    BoolField* field8 = new BoolField
        (
          BaseParameters::AUTOH_ID,
          offsetof(BaseParameters, mAutoH),
          true,
          "autoH",
          "autoH",
          "Select crop height so that full image will fit"
        );
    field8->widgetHint=BaseField::CHECK_BOX;
    fields().push_back(field8);
    /*  */ 
    BoolField* field9 = new BoolField
        (
          BaseParameters::AUTOW_ID,
          offsetof(BaseParameters, mAutoW),
          true,
          "autoW",
          "autoW",
          "Select crop width so that full image will fit"
        );
    field9->widgetHint=BaseField::CHECK_BOX;
    fields().push_back(field9);
    /*  */ 
    IntField* field10 = new IntField
        (
          BaseParameters::X_ID,
          offsetof(BaseParameters, mX),
          0,
          "x",
          "x",
          "Scaled image horizonal shift before crop",
          true,
         0,
         1024
        );
    fields().push_back(field10);
    /*  */ 
    IntField* field11 = new IntField
        (
          BaseParameters::Y_ID,
          offsetof(BaseParameters, mY),
          0,
          "y",
          "y",
          "Scaled image vertical shift before crop",
          true,
         0,
         2048
        );
    fields().push_back(field11);
    /*  */ 
    EnumField* field12 = new EnumField
        (
          BaseParameters::INTERPOLATIONTYPE_ID,
          offsetof(BaseParameters, mInterpolationType),
          2,
          "InterpolationType",
          "InterpolationType",
          "InterpolationType",
          new EnumReflection(4
          , new EnumOption(0,"Nearest")
          , new EnumOption(1,"Bilinear")
          , new EnumOption(2,"Bilinear Fixed8")
          , new EnumOption(3,"Hardware")
          )
        );
    field12->widgetHint=BaseField::COMBO_BOX;
    fields().push_back(field12);
    /*  */ 
    ReflectionDirectory &directory = *ReflectionDirectoryHolder::getReflectionDirectory();
    directory[std::string("Base Parameters")]= &reflection;
   return 0;
}
int BaseParameters::relinkCompositeFields()
{
   return 0;
}

SUPPRESS_OFFSET_WARNING_END


