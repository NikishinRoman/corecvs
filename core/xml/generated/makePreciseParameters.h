#ifndef MAKE_PRECISE_PARAMETERS_H_
#define MAKE_PRECISE_PARAMETERS_H_
/**
 * \file makePreciseParameters.h
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

#include "core/reflection/reflection.h"
#include "core/reflection/defaultSetter.h"
#include "core/reflection/printerVisitor.h"

/*
 *  Embed includes.
 */
/*
 *  Additional includes for Composite Types.
 */

using namespace corecvs;

/*
 *  Additional includes for Pointer Types.
 */

namespace corecvs {
}
/*
 *  Additional includes for enum section.
 */
#include "core/xml/generated/makePreciseAlgorithm.h"
#include "core/xml/generated/preciseInterpolationType.h"

/**
 * \brief Make Precise Parameters 
 * Make Precise Parameters 
 **/
class MakePreciseParameters : public BaseReflection<MakePreciseParameters>
{
public:
    enum FieldId {
        SHOULD_MAKE_PRECISE_ID,
        ALGORITHM_ID,
        INTERPOLATION_ID,
        KLT_ITERATIONS_ID,
        KLT_RADIUS_H_ID,
        KLT_RADIUS_W_ID,
        KLT_THRESHOLD_ID,
        MAKE_PRECISE_PARAMETERS_FIELD_ID_NUM
    };

    /** Section with variables */

    /** 
     * \brief Should Make Precise 
     * Should Make Precise 
     */
    bool mShouldMakePrecise;

    /** 
     * \brief Algorithm 
     * Algorithm 
     */
    int mAlgorithm;

    /** 
     * \brief Interpolation 
     * Interpolation 
     */
    int mInterpolation;

    /** 
     * \brief KLT iterations 
     * KLT iterations 
     */
    int mKLTIterations;

    /** 
     * \brief KLT Radius H 
     * KLT Radius H 
     */
    int mKLTRadiusH;

    /** 
     * \brief KLT Radius W 
     * KLT Radius W 
     */
    int mKLTRadiusW;

    /** 
     * \brief KLT Threshold 
     * KLT Threshold 
     */
    double mKLTThreshold;

    /** Static fields init function, this is used for "dynamic" field initialization */ 
    static int staticInit();

    /** Section with getters */
    const void *getPtrById(int fieldId) const
    {
        return (const unsigned char *)(this) + fields()[fieldId]->offset;
    }
    bool shouldMakePrecise() const
    {
        return mShouldMakePrecise;
    }

    MakePreciseAlgorithm::MakePreciseAlgorithm algorithm() const
    {
        return static_cast<MakePreciseAlgorithm::MakePreciseAlgorithm>(mAlgorithm);
    }

    PreciseInterpolationType::PreciseInterpolationType interpolation() const
    {
        return static_cast<PreciseInterpolationType::PreciseInterpolationType>(mInterpolation);
    }

    int kLTIterations() const
    {
        return mKLTIterations;
    }

    int kLTRadiusH() const
    {
        return mKLTRadiusH;
    }

    int kLTRadiusW() const
    {
        return mKLTRadiusW;
    }

    double kLTThreshold() const
    {
        return mKLTThreshold;
    }

    /* Section with setters */
    void setShouldMakePrecise(bool shouldMakePrecise)
    {
        mShouldMakePrecise = shouldMakePrecise;
    }

    void setAlgorithm(MakePreciseAlgorithm::MakePreciseAlgorithm algorithm)
    {
        mAlgorithm = algorithm;
    }

    void setInterpolation(PreciseInterpolationType::PreciseInterpolationType interpolation)
    {
        mInterpolation = interpolation;
    }

    void setKLTIterations(int kLTIterations)
    {
        mKLTIterations = kLTIterations;
    }

    void setKLTRadiusH(int kLTRadiusH)
    {
        mKLTRadiusH = kLTRadiusH;
    }

    void setKLTRadiusW(int kLTRadiusW)
    {
        mKLTRadiusW = kLTRadiusW;
    }

    void setKLTThreshold(double kLTThreshold)
    {
        mKLTThreshold = kLTThreshold;
    }

    /* Section with embedded classes */
    /* visitor pattern - http://en.wikipedia.org/wiki/Visitor_pattern */
template<class VisitorType>
    void accept(VisitorType &visitor)
    {
        visitor.visit(mShouldMakePrecise,         static_cast<const BoolField *>    (fields()[SHOULD_MAKE_PRECISE_ID]));
        visitor.visit((int &)mAlgorithm,          static_cast<const EnumField *>    (fields()[ALGORITHM_ID]));
        visitor.visit((int &)mInterpolation,      static_cast<const EnumField *>    (fields()[INTERPOLATION_ID]));
        visitor.visit(mKLTIterations,             static_cast<const IntField *>     (fields()[KLT_ITERATIONS_ID]));
        visitor.visit(mKLTRadiusH,                static_cast<const IntField *>     (fields()[KLT_RADIUS_H_ID]));
        visitor.visit(mKLTRadiusW,                static_cast<const IntField *>     (fields()[KLT_RADIUS_W_ID]));
        visitor.visit(mKLTThreshold,              static_cast<const DoubleField *>  (fields()[KLT_THRESHOLD_ID]));
    }

    MakePreciseParameters()
    {
        DefaultSetter setter;
        accept(setter);
    }

    MakePreciseParameters(
          bool shouldMakePrecise
        , MakePreciseAlgorithm::MakePreciseAlgorithm algorithm
        , PreciseInterpolationType::PreciseInterpolationType interpolation
        , int kLTIterations
        , int kLTRadiusH
        , int kLTRadiusW
        , double kLTThreshold
    )
    {
        mShouldMakePrecise = shouldMakePrecise;
        mAlgorithm = algorithm;
        mInterpolation = interpolation;
        mKLTIterations = kLTIterations;
        mKLTRadiusH = kLTRadiusH;
        mKLTRadiusW = kLTRadiusW;
        mKLTThreshold = kLTThreshold;
    }

    friend ostream& operator << (ostream &out, MakePreciseParameters &toSave)
    {
        PrinterVisitor printer(out);
        toSave.accept<PrinterVisitor>(printer);
        return out;
    }

    void print ()
    {
        cout << *this;
    }
};
#endif  //MAKE_PRECISE_PARAMETERS_H_
