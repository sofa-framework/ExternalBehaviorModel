/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, development version     *
*                (c) 2006-2018 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This program is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This program is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this program. If not, see <http://www.gnu.org/licenses/>.        *
*******************************************************************************
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#define SOFA_EXTERNALBEHAVIORMODEL_FEMGRIDBEHAVIORMODEL_CPP

#include "FEMGridBehaviorModel.inl"
#include <sofa/defaulttype/Vec3Types.h>
#include <sofa/core/ObjectFactory.h>


namespace sofa
{

namespace externalBehaviorModel
{

using namespace sofa::defaulttype;


// Register in the Factory (XML read/write...)
int FEMGridBehaviorModelModelClass = core::RegisterObject("FEMGridBehaviorModel Example")
#ifndef SOFA_FLOAT
        .add< FEMGridBehaviorModel<Vec3dTypes> >()
#endif
#ifndef SOFA_DOUBLE
        .add< FEMGridBehaviorModel<Vec3fTypes> >()
#endif
        ;

#ifndef SOFA_FLOAT
template class SOFA_ExternalBehaviorModel_API FEMGridBehaviorModel<Vec3dTypes>;
#endif
#ifndef SOFA_DOUBLE
template class SOFA_ExternalBehaviorModel_API FEMGridBehaviorModel<Vec3fTypes>;
#endif


} // namespace externalBehaviorModel

} // namespace sofa

