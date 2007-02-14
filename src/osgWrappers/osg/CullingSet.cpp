// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/BoundingBox>
#include <osg/BoundingSphere>
#include <osg/CullingSet>
#include <osg/Matrix>
#include <osg/Node>
#include <osg/Polytope>
#include <osg/ShadowVolumeOccluder>
#include <osg/StateSet>
#include <osg/Vec3>
#include <osg/Vec4>
#include <osg/Viewport>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::pair< osg::ref_ptr< osg::StateSet > COMMA  osg::Polytope >, osg::CullingSet::StateFrustumPair);

TYPE_NAME_ALIAS(std::vector< osg::CullingSet::StateFrustumPair >, osg::CullingSet::StateFrustumList);

TYPE_NAME_ALIAS(std::vector< osg::ShadowVolumeOccluder >, osg::CullingSet::OccluderList);

TYPE_NAME_ALIAS(unsigned int, osg::CullingSet::Mask);

BEGIN_ENUM_REFLECTOR(osg::CullingSet::MaskValues)
	I_EnumLabel(osg::CullingSet::NO_CULLING);
	I_EnumLabel(osg::CullingSet::VIEW_FRUSTUM_SIDES_CULLING);
	I_EnumLabel(osg::CullingSet::NEAR_PLANE_CULLING);
	I_EnumLabel(osg::CullingSet::FAR_PLANE_CULLING);
	I_EnumLabel(osg::CullingSet::VIEW_FRUSTUM_CULLING);
	I_EnumLabel(osg::CullingSet::SMALL_FEATURE_CULLING);
	I_EnumLabel(osg::CullingSet::SHADOW_OCCLUSION_CULLING);
	I_EnumLabel(osg::CullingSet::DEFAULT_CULLING);
	I_EnumLabel(osg::CullingSet::ENABLE_ALL_CULLING);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::CullingSet)
	I_BaseType(osg::Referenced);
	I_Constructor0(____CullingSet,
	               "",
	               "");
	I_Constructor1(IN, const osg::CullingSet &, cs,
	               Properties::NON_EXPLICIT,
	               ____CullingSet__C5_CullingSet_R1,
	               "",
	               "");
	I_Constructor3(IN, const osg::CullingSet &, cs, IN, const osg::Matrix &, matrix, IN, const osg::Vec4 &, pixelSizeVector,
	               ____CullingSet__C5_CullingSet_R1__C5_Matrix_R1__C5_Vec4_R1,
	               "",
	               "");
	I_Method1(void, set, IN, const osg::CullingSet &, cs,
	          Properties::NON_VIRTUAL,
	          __void__set__C5_CullingSet_R1,
	          "",
	          "");
	I_Method3(void, set, IN, const osg::CullingSet &, cs, IN, const osg::Matrix &, matrix, IN, const osg::Vec4 &, pixelSizeVector,
	          Properties::NON_VIRTUAL,
	          __void__set__C5_CullingSet_R1__C5_Matrix_R1__C5_Vec4_R1,
	          "",
	          "");
	I_Method1(void, setCullingMask, IN, osg::CullingSet::Mask, mask,
	          Properties::NON_VIRTUAL,
	          __void__setCullingMask__Mask,
	          "",
	          "");
	I_Method0(osg::CullingSet::Mask, getCullingMask,
	          Properties::NON_VIRTUAL,
	          __Mask__getCullingMask,
	          "",
	          "");
	I_Method1(void, setFrustum, IN, osg::Polytope &, cv,
	          Properties::NON_VIRTUAL,
	          __void__setFrustum__Polytope_R1,
	          "",
	          "");
	I_Method0(osg::Polytope &, getFrustum,
	          Properties::NON_VIRTUAL,
	          __Polytope_R1__getFrustum,
	          "",
	          "");
	I_Method0(const osg::Polytope &, getFrustum,
	          Properties::NON_VIRTUAL,
	          __C5_Polytope_R1__getFrustum,
	          "",
	          "");
	I_Method2(void, addStateFrustum, IN, osg::StateSet *, stateset, IN, osg::Polytope &, polytope,
	          Properties::NON_VIRTUAL,
	          __void__addStateFrustum__StateSet_P1__Polytope_R1,
	          "",
	          "");
	I_Method1(void, getStateFrustumList, IN, osg::CullingSet::StateFrustumList &, sfl,
	          Properties::NON_VIRTUAL,
	          __void__getStateFrustumList__StateFrustumList_R1,
	          "",
	          "");
	I_Method0(osg::CullingSet::StateFrustumList &, getStateFrustumList,
	          Properties::NON_VIRTUAL,
	          __StateFrustumList_R1__getStateFrustumList,
	          "",
	          "");
	I_Method1(void, addOccluder, IN, osg::ShadowVolumeOccluder &, cv,
	          Properties::NON_VIRTUAL,
	          __void__addOccluder__ShadowVolumeOccluder_R1,
	          "",
	          "");
	I_Method1(void, setPixelSizeVector, IN, const osg::Vec4 &, v,
	          Properties::NON_VIRTUAL,
	          __void__setPixelSizeVector__C5_Vec4_R1,
	          "",
	          "");
	I_Method0(osg::Vec4 &, getPixelSizeVector,
	          Properties::NON_VIRTUAL,
	          __Vec4_R1__getPixelSizeVector,
	          "",
	          "");
	I_Method0(const osg::Vec4 &, getPixelSizeVector,
	          Properties::NON_VIRTUAL,
	          __C5_Vec4_R1__getPixelSizeVector,
	          "",
	          "");
	I_Method1(void, setSmallFeatureCullingPixelSize, IN, float, value,
	          Properties::NON_VIRTUAL,
	          __void__setSmallFeatureCullingPixelSize__float,
	          "",
	          "");
	I_Method0(float &, getSmallFeatureCullingPixelSize,
	          Properties::NON_VIRTUAL,
	          __float_R1__getSmallFeatureCullingPixelSize,
	          "",
	          "");
	I_Method0(float, getSmallFeatureCullingPixelSize,
	          Properties::NON_VIRTUAL,
	          __float__getSmallFeatureCullingPixelSize,
	          "",
	          "");
	I_Method2(float, pixelSize, IN, const osg::Vec3 &, v, IN, float, radius,
	          Properties::NON_VIRTUAL,
	          __float__pixelSize__C5_Vec3_R1__float,
	          "Compute the pixel of an object at position v, with specified radius. ",
	          "");
	I_Method1(float, pixelSize, IN, const osg::BoundingSphere &, bs,
	          Properties::NON_VIRTUAL,
	          __float__pixelSize__C5_BoundingSphere_R1,
	          "Compute the pixel of a bounding sphere. ",
	          "");
	I_Method2(float, clampedPixelSize, IN, const osg::Vec3 &, v, IN, float, radius,
	          Properties::NON_VIRTUAL,
	          __float__clampedPixelSize__C5_Vec3_R1__float,
	          "Compute the pixel of an object at position v, with specified radius. ",
	          "fabs()ed to always be positive. ");
	I_Method1(float, clampedPixelSize, IN, const osg::BoundingSphere &, bs,
	          Properties::NON_VIRTUAL,
	          __float__clampedPixelSize__C5_BoundingSphere_R1,
	          "Compute the pixel of a bounding sphere. ",
	          "fabs()ed to always be positive. ");
	I_Method1(bool, isCulled, IN, const std::vector< osg::Vec3 > &, vertices,
	          Properties::NON_VIRTUAL,
	          __bool__isCulled__C5_std_vectorT1_Vec3__R1,
	          "",
	          "");
	I_Method1(bool, isCulled, IN, const osg::BoundingBox &, bb,
	          Properties::NON_VIRTUAL,
	          __bool__isCulled__C5_BoundingBox_R1,
	          "",
	          "");
	I_Method1(bool, isCulled, IN, const osg::BoundingSphere &, bs,
	          Properties::NON_VIRTUAL,
	          __bool__isCulled__C5_BoundingSphere_R1,
	          "",
	          "");
	I_Method0(void, pushCurrentMask,
	          Properties::NON_VIRTUAL,
	          __void__pushCurrentMask,
	          "",
	          "");
	I_Method0(void, popCurrentMask,
	          Properties::NON_VIRTUAL,
	          __void__popCurrentMask,
	          "",
	          "");
	I_Method1(void, disableAndPushOccludersCurrentMask, IN, osg::NodePath &, nodePath,
	          Properties::NON_VIRTUAL,
	          __void__disableAndPushOccludersCurrentMask__NodePath_R1,
	          "",
	          "");
	I_Method1(void, popOccludersCurrentMask, IN, osg::NodePath &, nodePath,
	          Properties::NON_VIRTUAL,
	          __void__popOccludersCurrentMask__NodePath_R1,
	          "",
	          "");
	I_StaticMethod3(osg::Vec4, computePixelSizeVector, IN, const osg::Viewport &, W, IN, const osg::Matrix &, P, IN, const osg::Matrix &, M,
	                __osg_Vec4__computePixelSizeVector__C5_Viewport_R1__C5_Matrix_R1__C5_Matrix_R1_S,
	                "",
	                "");
	I_SimpleProperty(osg::CullingSet::Mask, CullingMask, 
	                 __Mask__getCullingMask, 
	                 __void__setCullingMask__Mask);
	I_SimpleProperty(osg::Polytope &, Frustum, 
	                 __Polytope_R1__getFrustum, 
	                 __void__setFrustum__Polytope_R1);
	I_SimpleProperty(const osg::Vec4 &, PixelSizeVector, 
	                 __C5_Vec4_R1__getPixelSizeVector, 
	                 __void__setPixelSizeVector__C5_Vec4_R1);
	I_SimpleProperty(float, SmallFeatureCullingPixelSize, 
	                 __float__getSmallFeatureCullingPixelSize, 
	                 __void__setSmallFeatureCullingPixelSize__float);
	I_SimpleProperty(osg::CullingSet::StateFrustumList &, StateFrustumList, 
	                 __StateFrustumList_R1__getStateFrustumList, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osg::StateSet >)
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osg::StateSet *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osg::StateSet > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osg::StateSet *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osg::StateSet *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osg::StateSet > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osg::StateSet *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_PAIR_REFLECTOR(std::pair< osg::ref_ptr< osg::StateSet > COMMA  osg::Polytope >);

STD_VECTOR_REFLECTOR(std::vector< osg::CullingSet::StateFrustumPair >);

