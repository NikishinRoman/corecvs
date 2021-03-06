#ifndef SPATIALGRADIENT_H_
#define SPATIALGRADIENT_H_

/**
 * \file spatialGradient.h
 * \brief Add Comment Here
 *
 * \ingroup cppcorefiles
 * \date Sep 22, 2010
 * \author alexander
 */

#include "core/utils/global.h"

#include "core/buffers/g12Buffer.h"
#include "core/buffers/abstractBuffer.h"
#include "core/math/vector/vector3d.h"
#include "core/buffers/integralBuffer.h"
namespace corecvs {

/**
 * This class holds the spatial gradient matrix square elements
 *
 * \f{eqnarray*}
 * V_1 &=&  \left( \frac {\delta A(x,y)} {\delta x} \right)^2 \\
 * V_2 &=&  \left( \frac {\delta A(x,y)} {\delta y} \right)^2 \\
 * V_3 &=& \frac {\delta A(x,y)} {\delta x} \frac {\delta A(x,y)} {\delta y}
 * \f}
 *
 * TODO: Use mapper
 *
 **/
class SpatialGradient : public AbstractBuffer<Vector3dd, uint32_t>
{
public:

    SpatialGradient(int h, int w) : AbstractBuffer<Vector3dd, uint32_t>(h, w) {}
    SpatialGradient(G12Buffer *input);

    G12Buffer* findCornerPoints(double scaler = G12Buffer::BUFFER_MAX_VALUE, int apperture = 5);
};

typedef IntegralBuffer<Vector3dd, Vector3dd, uint32_t>  SpatialGradientIntegralBuffer;


} //namespace corecvs
#endif /* SPATIALGRADIENT_H_ */

