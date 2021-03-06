#pragma once

#include <Common/Base/hkBase.h>
#include <Common/Base/Object/hkReferencedObject.h>

class hkbDetectCloseToGroundModifierInternalState : public hkReferencedObject
{
public:
   HK_DECLARE_CLASS_ALLOCATOR( HK_MEMORY_CLASS_BEHAVIOR_RUNTIME );
   HK_DECLARE_REFLECTION();

public:
   HK_FORCE_INLINE hkbDetectCloseToGroundModifierInternalState(void) {}
   HK_FORCE_INLINE hkbDetectCloseToGroundModifierInternalState( hkFinishLoadedObjectFlag flag ) : hkReferencedObject(flag) 
      {}
   // Properties
   hkBool m_isCloseToGround;
};
extern const hkClass hkbDetectCloseToGroundModifierInternalStateClass;

