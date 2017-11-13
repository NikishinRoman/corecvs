#ifndef BIT_SELECTOR_PARAMETERS_H_
#define BIT_SELECTOR_PARAMETERS_H_
/**
 * \file bitSelectorParameters.h
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

/**
 * \brief Bit Selector Parameters 
 * Bit Selector Parameters 
 **/
class BitSelectorParameters : public BaseReflection<BitSelectorParameters>
{
public:
    enum FieldId {
        SHIFT_ID,
        BIT_0_ID,
        BIT_1_ID,
        BIT_2_ID,
        BIT_3_ID,
        BIT_4_ID,
        BIT_5_ID,
        BIT_6_ID,
        BIT_7_ID,
        BIT_8_ID,
        BIT_9_ID,
        BIT_10_ID,
        BIT_11_ID,
        BIT_12_ID,
        BIT_13_ID,
        BIT_14_ID,
        BIT_15_ID,
        BIT_SELECTOR_PARAMETERS_FIELD_ID_NUM
    };

    /** Section with variables */

    /** 
     * \brief shift 
     * shift 
     */
    int mShift;

    /** 
     * \brief bit 0 
     * bit 0 
     */
    bool mBit0;

    /** 
     * \brief bit 1 
     * bit 1 
     */
    bool mBit1;

    /** 
     * \brief bit 2 
     * bit 2 
     */
    bool mBit2;

    /** 
     * \brief bit 3 
     * bit 3 
     */
    bool mBit3;

    /** 
     * \brief bit 4 
     * bit 4 
     */
    bool mBit4;

    /** 
     * \brief bit 5 
     * bit 5 
     */
    bool mBit5;

    /** 
     * \brief bit 6 
     * bit 6 
     */
    bool mBit6;

    /** 
     * \brief bit 7 
     * bit 7 
     */
    bool mBit7;

    /** 
     * \brief bit 8 
     * bit 8 
     */
    bool mBit8;

    /** 
     * \brief bit 9 
     * bit 9 
     */
    bool mBit9;

    /** 
     * \brief bit 10 
     * bit 10 
     */
    bool mBit10;

    /** 
     * \brief bit 11 
     * bit 11 
     */
    bool mBit11;

    /** 
     * \brief bit 12 
     * bit 12 
     */
    bool mBit12;

    /** 
     * \brief bit 13 
     * bit 13 
     */
    bool mBit13;

    /** 
     * \brief bit 14 
     * bit 14 
     */
    bool mBit14;

    /** 
     * \brief bit 15 
     * bit 15 
     */
    bool mBit15;

    /** Static fields init function, this is used for "dynamic" field initialization */ 
    static int staticInit();

    /** Section with getters */
    const void *getPtrById(int fieldId) const
    {
        return (const unsigned char *)(this) + fields()[fieldId]->offset;
    }
    int shift() const
    {
        return mShift;
    }

    bool bit0() const
    {
        return mBit0;
    }

    bool bit1() const
    {
        return mBit1;
    }

    bool bit2() const
    {
        return mBit2;
    }

    bool bit3() const
    {
        return mBit3;
    }

    bool bit4() const
    {
        return mBit4;
    }

    bool bit5() const
    {
        return mBit5;
    }

    bool bit6() const
    {
        return mBit6;
    }

    bool bit7() const
    {
        return mBit7;
    }

    bool bit8() const
    {
        return mBit8;
    }

    bool bit9() const
    {
        return mBit9;
    }

    bool bit10() const
    {
        return mBit10;
    }

    bool bit11() const
    {
        return mBit11;
    }

    bool bit12() const
    {
        return mBit12;
    }

    bool bit13() const
    {
        return mBit13;
    }

    bool bit14() const
    {
        return mBit14;
    }

    bool bit15() const
    {
        return mBit15;
    }

    /* Section with setters */
    void setShift(int shift)
    {
        mShift = shift;
    }

    void setBit0(bool bit0)
    {
        mBit0 = bit0;
    }

    void setBit1(bool bit1)
    {
        mBit1 = bit1;
    }

    void setBit2(bool bit2)
    {
        mBit2 = bit2;
    }

    void setBit3(bool bit3)
    {
        mBit3 = bit3;
    }

    void setBit4(bool bit4)
    {
        mBit4 = bit4;
    }

    void setBit5(bool bit5)
    {
        mBit5 = bit5;
    }

    void setBit6(bool bit6)
    {
        mBit6 = bit6;
    }

    void setBit7(bool bit7)
    {
        mBit7 = bit7;
    }

    void setBit8(bool bit8)
    {
        mBit8 = bit8;
    }

    void setBit9(bool bit9)
    {
        mBit9 = bit9;
    }

    void setBit10(bool bit10)
    {
        mBit10 = bit10;
    }

    void setBit11(bool bit11)
    {
        mBit11 = bit11;
    }

    void setBit12(bool bit12)
    {
        mBit12 = bit12;
    }

    void setBit13(bool bit13)
    {
        mBit13 = bit13;
    }

    void setBit14(bool bit14)
    {
        mBit14 = bit14;
    }

    void setBit15(bool bit15)
    {
        mBit15 = bit15;
    }

    /* Section with embedded classes */
    /* visitor pattern - http://en.wikipedia.org/wiki/Visitor_pattern */
template<class VisitorType>
    void accept(VisitorType &visitor)
    {
        visitor.visit(mShift,                     static_cast<const IntField *>     (fields()[SHIFT_ID]));
        visitor.visit(mBit0,                      static_cast<const BoolField *>    (fields()[BIT_0_ID]));
        visitor.visit(mBit1,                      static_cast<const BoolField *>    (fields()[BIT_1_ID]));
        visitor.visit(mBit2,                      static_cast<const BoolField *>    (fields()[BIT_2_ID]));
        visitor.visit(mBit3,                      static_cast<const BoolField *>    (fields()[BIT_3_ID]));
        visitor.visit(mBit4,                      static_cast<const BoolField *>    (fields()[BIT_4_ID]));
        visitor.visit(mBit5,                      static_cast<const BoolField *>    (fields()[BIT_5_ID]));
        visitor.visit(mBit6,                      static_cast<const BoolField *>    (fields()[BIT_6_ID]));
        visitor.visit(mBit7,                      static_cast<const BoolField *>    (fields()[BIT_7_ID]));
        visitor.visit(mBit8,                      static_cast<const BoolField *>    (fields()[BIT_8_ID]));
        visitor.visit(mBit9,                      static_cast<const BoolField *>    (fields()[BIT_9_ID]));
        visitor.visit(mBit10,                     static_cast<const BoolField *>    (fields()[BIT_10_ID]));
        visitor.visit(mBit11,                     static_cast<const BoolField *>    (fields()[BIT_11_ID]));
        visitor.visit(mBit12,                     static_cast<const BoolField *>    (fields()[BIT_12_ID]));
        visitor.visit(mBit13,                     static_cast<const BoolField *>    (fields()[BIT_13_ID]));
        visitor.visit(mBit14,                     static_cast<const BoolField *>    (fields()[BIT_14_ID]));
        visitor.visit(mBit15,                     static_cast<const BoolField *>    (fields()[BIT_15_ID]));
    }

    BitSelectorParameters()
    {
        DefaultSetter setter;
        accept(setter);
    }

    BitSelectorParameters(
          int shift
        , bool bit0
        , bool bit1
        , bool bit2
        , bool bit3
        , bool bit4
        , bool bit5
        , bool bit6
        , bool bit7
        , bool bit8
        , bool bit9
        , bool bit10
        , bool bit11
        , bool bit12
        , bool bit13
        , bool bit14
        , bool bit15
    )
    {
        mShift = shift;
        mBit0 = bit0;
        mBit1 = bit1;
        mBit2 = bit2;
        mBit3 = bit3;
        mBit4 = bit4;
        mBit5 = bit5;
        mBit6 = bit6;
        mBit7 = bit7;
        mBit8 = bit8;
        mBit9 = bit9;
        mBit10 = bit10;
        mBit11 = bit11;
        mBit12 = bit12;
        mBit13 = bit13;
        mBit14 = bit14;
        mBit15 = bit15;
    }

    friend ostream& operator << (ostream &out, BitSelectorParameters &toSave)
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
#endif  //BIT_SELECTOR_PARAMETERS_H_
