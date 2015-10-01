
#include <emscripten.h>

class ConcreteContactResultCallback : public btCollisionWorld::ContactResultCallback {
public:
  float addSingleResult(btManifoldPoint& arg0, const btCollisionObjectWrapper* arg1, int arg2, int arg3, const btCollisionObjectWrapper* arg4, int arg5, int arg6) {
    return EM_ASM_DOUBLE({
      var self = Module['getCache'](Module['ConcreteContactResultCallback'])[$0];
      if (!self.hasOwnProperty('addSingleResult')) throw 'a JSImplementation must implement all functions, you forgot ConcreteContactResultCallback::addSingleResult.';
      return self['addSingleResult']($1,$2,$3,$4,$5,$6,$7);
    }, (int)this, (int)&arg0, (int)arg1, arg2, arg3, (int)arg4, arg5, arg6);
  }
  void __destroy__() {
    EM_ASM_INT({
      var self = Module['getCache'](Module['ConcreteContactResultCallback'])[$0];
      if (!self.hasOwnProperty('__destroy__')) throw 'a JSImplementation must implement all functions, you forgot ConcreteContactResultCallback::__destroy__.';
      self['__destroy__']();
    }, (int)this);
  }
};

extern "C" {

// Not using size_t for array indices as the values used by the javascript code are signed.
void array_bounds_check(const int array_size, const int array_idx) {
  if (array_idx < 0 || array_idx >= array_size) {
    EM_ASM_INT({
      throw 'Array index ' + $0 + ' out of bounds: [0,' + $1 + ')';
    }, array_idx, array_size);
  }
}

// btCollisionShape

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionShape_setLocalScaling_1(btCollisionShape* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionShape_calculateLocalInertia_2(btCollisionShape* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionShape___destroy___0(btCollisionShape* self) {
  delete self;
}

// btCollisionObject

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_setAnisotropicFriction_2(btCollisionObject* self, btVector3* arg0, int arg1) {
  self->setAnisotropicFriction(*arg0, arg1);
}

btCollisionShape* EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_getCollisionShape_0(btCollisionObject* self) {
  return self->getCollisionShape();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_setContactProcessingThreshold_1(btCollisionObject* self, float arg0) {
  self->setContactProcessingThreshold(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_setActivationState_1(btCollisionObject* self, int arg0) {
  self->setActivationState(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_forceActivationState_1(btCollisionObject* self, int arg0) {
  self->forceActivationState(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_activate_0(btCollisionObject* self) {
  self->activate();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_activate_1(btCollisionObject* self, bool arg0) {
  self->activate(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_isActive_0(btCollisionObject* self) {
  return self->isActive();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_isKinematicObject_0(btCollisionObject* self) {
  return self->isKinematicObject();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_setRestitution_1(btCollisionObject* self, float arg0) {
  self->setRestitution(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_setFriction_1(btCollisionObject* self, float arg0) {
  self->setFriction(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_setRollingFriction_1(btCollisionObject* self, float arg0) {
  self->setRollingFriction(arg0);
}

btTransform* EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_getWorldTransform_0(btCollisionObject* self) {
  return &self->getWorldTransform();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_getCollisionFlags_0(btCollisionObject* self) {
  return self->getCollisionFlags();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_setCollisionFlags_1(btCollisionObject* self, int arg0) {
  self->setCollisionFlags(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_setWorldTransform_1(btCollisionObject* self, btTransform* arg0) {
  self->setWorldTransform(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_setCollisionShape_1(btCollisionObject* self, btCollisionShape* arg0) {
  self->setCollisionShape(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_setCcdMotionThreshold_1(btCollisionObject* self, float arg0) {
  self->setCcdMotionThreshold(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject_setCcdSweptSphereRadius_1(btCollisionObject* self, float arg0) {
  self->setCcdSweptSphereRadius(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionObject___destroy___0(btCollisionObject* self) {
  delete self;
}

// btConcaveShape

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConcaveShape_setLocalScaling_1(btConcaveShape* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConcaveShape_calculateLocalInertia_2(btConcaveShape* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConcaveShape___destroy___0(btConcaveShape* self) {
  delete self;
}

// btCollisionWorld

btDispatcher* EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionWorld_getDispatcher_0(btCollisionWorld* self) {
  return self->getDispatcher();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionWorld_rayTest_3(btCollisionWorld* self, btVector3* arg0, btVector3* arg1, btCollisionWorld::RayResultCallback* arg2) {
  self->rayTest(*arg0, *arg1, *arg2);
}

btOverlappingPairCache* EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionWorld_getPairCache_0(btCollisionWorld* self) {
  return self->getPairCache();
}

btDispatcherInfo* EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionWorld_getDispatchInfo_0(btCollisionWorld* self) {
  return &self->getDispatchInfo();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionWorld_addCollisionObject_1(btCollisionWorld* self, btCollisionObject* arg0) {
  self->addCollisionObject(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionWorld_addCollisionObject_2(btCollisionWorld* self, btCollisionObject* arg0, short arg1) {
  self->addCollisionObject(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionWorld_addCollisionObject_3(btCollisionWorld* self, btCollisionObject* arg0, short arg1, short arg2) {
  self->addCollisionObject(arg0, arg1, arg2);
}

const btBroadphaseInterface* EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionWorld_getBroadphase_0(btCollisionWorld* self) {
  return self->getBroadphase();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionWorld_convexSweepTest_5(btCollisionWorld* self, btConvexShape* arg0, btTransform* arg1, btTransform* arg2, btCollisionWorld::ConvexResultCallback* arg3, float arg4) {
  self->convexSweepTest(arg0, *arg1, *arg2, *arg3, arg4);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionWorld_contactPairTest_3(btCollisionWorld* self, btCollisionObject* arg0, btCollisionObject* arg1, btCollisionWorld::ContactResultCallback* arg2) {
  self->contactPairTest(arg0, arg1, *arg2);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionWorld___destroy___0(btCollisionWorld* self) {
  delete self;
}

// btTypedConstraint

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btTypedConstraint_enableFeedback_1(btTypedConstraint* self, bool arg0) {
  self->enableFeedback(arg0);
}

const float EMSCRIPTEN_KEEPALIVE emscripten_bind_btTypedConstraint_getBreakingImpulseThreshold_0(btTypedConstraint* self) {
  return self->getBreakingImpulseThreshold();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btTypedConstraint_setBreakingImpulseThreshold_1(btTypedConstraint* self, float arg0) {
  self->setBreakingImpulseThreshold(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btTypedConstraint___destroy___0(btTypedConstraint* self) {
  delete self;
}

// btCapsuleShape

btCapsuleShape* EMSCRIPTEN_KEEPALIVE emscripten_bind_btCapsuleShape_btCapsuleShape_2(float arg0, float arg1) {
  return new btCapsuleShape(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCapsuleShape_setMargin_1(btCapsuleShape* self, float arg0) {
  self->setMargin(arg0);
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btCapsuleShape_getMargin_0(btCapsuleShape* self) {
  return self->getMargin();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCapsuleShape_setLocalScaling_1(btCapsuleShape* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCapsuleShape_calculateLocalInertia_2(btCapsuleShape* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCapsuleShape___destroy___0(btCapsuleShape* self) {
  delete self;
}

// btGeneric6DofConstraint

btGeneric6DofConstraint* EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofConstraint_btGeneric6DofConstraint_3(btRigidBody* arg0, btTransform* arg1, bool arg2) {
  return new btGeneric6DofConstraint(*arg0, *arg1, arg2);
}

btGeneric6DofConstraint* EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofConstraint_btGeneric6DofConstraint_5(btRigidBody* arg0, btRigidBody* arg1, btTransform* arg2, btTransform* arg3, bool arg4) {
  return new btGeneric6DofConstraint(*arg0, *arg1, *arg2, *arg3, arg4);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofConstraint_setLinearLowerLimit_1(btGeneric6DofConstraint* self, btVector3* arg0) {
  self->setLinearLowerLimit(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofConstraint_setLinearUpperLimit_1(btGeneric6DofConstraint* self, btVector3* arg0) {
  self->setLinearUpperLimit(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofConstraint_setAngularLowerLimit_1(btGeneric6DofConstraint* self, btVector3* arg0) {
  self->setAngularLowerLimit(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofConstraint_setAngularUpperLimit_1(btGeneric6DofConstraint* self, btVector3* arg0) {
  self->setAngularUpperLimit(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofConstraint_enableFeedback_1(btGeneric6DofConstraint* self, bool arg0) {
  self->enableFeedback(arg0);
}

const float EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofConstraint_getBreakingImpulseThreshold_0(btGeneric6DofConstraint* self) {
  return self->getBreakingImpulseThreshold();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofConstraint_setBreakingImpulseThreshold_1(btGeneric6DofConstraint* self, float arg0) {
  self->setBreakingImpulseThreshold(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofConstraint___destroy___0(btGeneric6DofConstraint* self) {
  delete self;
}

// btStridingMeshInterface

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btStridingMeshInterface___destroy___0(btStridingMeshInterface* self) {
  delete self;
}

// ConvexResultCallback

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ConvexResultCallback_hasHit_0(btCollisionWorld::ConvexResultCallback* self) {
  return self->hasHit();
}

short EMSCRIPTEN_KEEPALIVE emscripten_bind_ConvexResultCallback_get_m_collisionFilterGroup_0(btCollisionWorld::ConvexResultCallback* self) {
  return self->m_collisionFilterGroup;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ConvexResultCallback_set_m_collisionFilterGroup_1(btCollisionWorld::ConvexResultCallback* self, short arg0) {
  self->m_collisionFilterGroup = arg0;
}

short EMSCRIPTEN_KEEPALIVE emscripten_bind_ConvexResultCallback_get_m_collisionFilterMask_0(btCollisionWorld::ConvexResultCallback* self) {
  return self->m_collisionFilterMask;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ConvexResultCallback_set_m_collisionFilterMask_1(btCollisionWorld::ConvexResultCallback* self, short arg0) {
  self->m_collisionFilterMask = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_ConvexResultCallback_get_m_closestHitFraction_0(btCollisionWorld::ConvexResultCallback* self) {
  return self->m_closestHitFraction;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ConvexResultCallback_set_m_closestHitFraction_1(btCollisionWorld::ConvexResultCallback* self, float arg0) {
  self->m_closestHitFraction = arg0;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ConvexResultCallback___destroy___0(btCollisionWorld::ConvexResultCallback* self) {
  delete self;
}

// btMotionState

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btMotionState_getWorldTransform_1(btMotionState* self, btTransform* arg0) {
  self->getWorldTransform(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btMotionState_setWorldTransform_1(btMotionState* self, btTransform* arg0) {
  self->setWorldTransform(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btMotionState___destroy___0(btMotionState* self) {
  delete self;
}

// btConeShape

btConeShape* EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeShape_btConeShape_2(float arg0, float arg1) {
  return new btConeShape(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeShape_setLocalScaling_1(btConeShape* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeShape_calculateLocalInertia_2(btConeShape* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeShape___destroy___0(btConeShape* self) {
  delete self;
}

// btConvexShape

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConvexShape_setLocalScaling_1(btConvexShape* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConvexShape_calculateLocalInertia_2(btConvexShape* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConvexShape___destroy___0(btConvexShape* self) {
  delete self;
}

// ContactResultCallback

float EMSCRIPTEN_KEEPALIVE emscripten_bind_ContactResultCallback_addSingleResult_7(btCollisionWorld::ContactResultCallback* self, btManifoldPoint* arg0, btCollisionObjectWrapper* arg1, int arg2, int arg3, btCollisionObjectWrapper* arg4, int arg5, int arg6) {
  return self->addSingleResult(*arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ContactResultCallback___destroy___0(btCollisionWorld::ContactResultCallback* self) {
  delete self;
}

// btTriangleMeshShape

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btTriangleMeshShape_setLocalScaling_1(btTriangleMeshShape* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btTriangleMeshShape_calculateLocalInertia_2(btTriangleMeshShape* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btTriangleMeshShape___destroy___0(btTriangleMeshShape* self) {
  delete self;
}

// btDispatcher

int EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcher_getNumManifolds_0(btDispatcher* self) {
  return self->getNumManifolds();
}

btPersistentManifold* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcher_getManifoldByIndexInternal_1(btDispatcher* self, int arg0) {
  return self->getManifoldByIndexInternal(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcher___destroy___0(btDispatcher* self) {
  delete self;
}

// btDynamicsWorld

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDynamicsWorld_addAction_1(btDynamicsWorld* self, btActionInterface* arg0) {
  self->addAction(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDynamicsWorld_removeAction_1(btDynamicsWorld* self, btActionInterface* arg0) {
  self->removeAction(arg0);
}

btContactSolverInfo* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDynamicsWorld_getSolverInfo_0(btDynamicsWorld* self) {
  static btContactSolverInfo temp;
  return (temp = self->getSolverInfo(), &temp);
}

btDispatcher* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDynamicsWorld_getDispatcher_0(btDynamicsWorld* self) {
  return self->getDispatcher();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDynamicsWorld_rayTest_3(btDynamicsWorld* self, btVector3* arg0, btVector3* arg1, btCollisionWorld::RayResultCallback* arg2) {
  self->rayTest(*arg0, *arg1, *arg2);
}

btOverlappingPairCache* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDynamicsWorld_getPairCache_0(btDynamicsWorld* self) {
  return self->getPairCache();
}

btDispatcherInfo* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDynamicsWorld_getDispatchInfo_0(btDynamicsWorld* self) {
  return &self->getDispatchInfo();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDynamicsWorld_addCollisionObject_1(btDynamicsWorld* self, btCollisionObject* arg0) {
  self->addCollisionObject(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDynamicsWorld_addCollisionObject_2(btDynamicsWorld* self, btCollisionObject* arg0, short arg1) {
  self->addCollisionObject(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDynamicsWorld_addCollisionObject_3(btDynamicsWorld* self, btCollisionObject* arg0, short arg1, short arg2) {
  self->addCollisionObject(arg0, arg1, arg2);
}

const btBroadphaseInterface* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDynamicsWorld_getBroadphase_0(btDynamicsWorld* self) {
  return self->getBroadphase();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDynamicsWorld_convexSweepTest_5(btDynamicsWorld* self, btConvexShape* arg0, btTransform* arg1, btTransform* arg2, btCollisionWorld::ConvexResultCallback* arg3, float arg4) {
  self->convexSweepTest(arg0, *arg1, *arg2, *arg3, arg4);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDynamicsWorld_contactPairTest_3(btDynamicsWorld* self, btCollisionObject* arg0, btCollisionObject* arg1, btCollisionWorld::ContactResultCallback* arg2) {
  self->contactPairTest(arg0, arg1, *arg2);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDynamicsWorld___destroy___0(btDynamicsWorld* self) {
  delete self;
}

// RayResultCallback

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_RayResultCallback_hasHit_0(btCollisionWorld::RayResultCallback* self) {
  return self->hasHit();
}

short EMSCRIPTEN_KEEPALIVE emscripten_bind_RayResultCallback_get_m_collisionFilterGroup_0(btCollisionWorld::RayResultCallback* self) {
  return self->m_collisionFilterGroup;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RayResultCallback_set_m_collisionFilterGroup_1(btCollisionWorld::RayResultCallback* self, short arg0) {
  self->m_collisionFilterGroup = arg0;
}

short EMSCRIPTEN_KEEPALIVE emscripten_bind_RayResultCallback_get_m_collisionFilterMask_0(btCollisionWorld::RayResultCallback* self) {
  return self->m_collisionFilterMask;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RayResultCallback_set_m_collisionFilterMask_1(btCollisionWorld::RayResultCallback* self, short arg0) {
  self->m_collisionFilterMask = arg0;
}

const btCollisionObject* EMSCRIPTEN_KEEPALIVE emscripten_bind_RayResultCallback_get_m_collisionObject_0(btCollisionWorld::RayResultCallback* self) {
  return self->m_collisionObject;
}

const void EMSCRIPTEN_KEEPALIVE emscripten_bind_RayResultCallback_set_m_collisionObject_1(btCollisionWorld::RayResultCallback* self, btCollisionObject* arg0) {
  self->m_collisionObject = arg0;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RayResultCallback___destroy___0(btCollisionWorld::RayResultCallback* self) {
  delete self;
}

// btVector3

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector3_btVector3_0() {
  return new btVector3();
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector3_btVector3_3(float arg0, float arg1, float arg2) {
  return new btVector3(arg0, arg1, arg2);
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector3_length_0(btVector3* self) {
  return self->length();
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector3_x_0(btVector3* self) {
  return self->x();
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector3_y_0(btVector3* self) {
  return self->y();
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector3_z_0(btVector3* self) {
  return self->z();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector3_setX_1(btVector3* self, float arg0) {
  self->setX(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector3_setY_1(btVector3* self, float arg0) {
  self->setY(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector3_setZ_1(btVector3* self, float arg0) {
  self->setZ(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector3_setValue_3(btVector3* self, float arg0, float arg1, float arg2) {
  self->setValue(arg0, arg1, arg2);
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector3_op_mul_1(btVector3* self, float arg0) {
  return &(*self *= arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector3___destroy___0(btVector3* self) {
  delete self;
}

// btVehicleRaycaster

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btVehicleRaycaster___destroy___0(btVehicleRaycaster* self) {
  delete self;
}

// btGhostObject

btGhostObject* EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_btGhostObject_0() {
  return new btGhostObject();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_getNumOverlappingObjects_0(btGhostObject* self) {
  return self->getNumOverlappingObjects();
}

btCollisionObject* EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_getOverlappingObject_1(btGhostObject* self, int arg0) {
  return self->getOverlappingObject(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_setAnisotropicFriction_2(btGhostObject* self, btVector3* arg0, int arg1) {
  self->setAnisotropicFriction(*arg0, arg1);
}

btCollisionShape* EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_getCollisionShape_0(btGhostObject* self) {
  return self->getCollisionShape();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_setContactProcessingThreshold_1(btGhostObject* self, float arg0) {
  self->setContactProcessingThreshold(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_setActivationState_1(btGhostObject* self, int arg0) {
  self->setActivationState(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_forceActivationState_1(btGhostObject* self, int arg0) {
  self->forceActivationState(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_activate_0(btGhostObject* self) {
  self->activate();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_activate_1(btGhostObject* self, bool arg0) {
  self->activate(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_isActive_0(btGhostObject* self) {
  return self->isActive();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_isKinematicObject_0(btGhostObject* self) {
  return self->isKinematicObject();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_setRestitution_1(btGhostObject* self, float arg0) {
  self->setRestitution(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_setFriction_1(btGhostObject* self, float arg0) {
  self->setFriction(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_setRollingFriction_1(btGhostObject* self, float arg0) {
  self->setRollingFriction(arg0);
}

btTransform* EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_getWorldTransform_0(btGhostObject* self) {
  return &self->getWorldTransform();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_getCollisionFlags_0(btGhostObject* self) {
  return self->getCollisionFlags();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_setCollisionFlags_1(btGhostObject* self, int arg0) {
  self->setCollisionFlags(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_setWorldTransform_1(btGhostObject* self, btTransform* arg0) {
  self->setWorldTransform(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_setCollisionShape_1(btGhostObject* self, btCollisionShape* arg0) {
  self->setCollisionShape(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_setCcdMotionThreshold_1(btGhostObject* self, float arg0) {
  self->setCcdMotionThreshold(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject_setCcdSweptSphereRadius_1(btGhostObject* self, float arg0) {
  self->setCcdSweptSphereRadius(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostObject___destroy___0(btGhostObject* self) {
  delete self;
}

// btQuadWord

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuadWord_x_0(btQuadWord* self) {
  return self->x();
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuadWord_y_0(btQuadWord* self) {
  return self->y();
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuadWord_z_0(btQuadWord* self) {
  return self->z();
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuadWord_w_0(btQuadWord* self) {
  return self->w();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuadWord_setX_1(btQuadWord* self, float arg0) {
  self->setX(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuadWord_setY_1(btQuadWord* self, float arg0) {
  self->setY(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuadWord_setZ_1(btQuadWord* self, float arg0) {
  self->setZ(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuadWord_setW_1(btQuadWord* self, float arg0) {
  self->setW(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuadWord___destroy___0(btQuadWord* self) {
  delete self;
}

// btCylinderShape

btCylinderShape* EMSCRIPTEN_KEEPALIVE emscripten_bind_btCylinderShape_btCylinderShape_1(btVector3* arg0) {
  return new btCylinderShape(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCylinderShape_setMargin_1(btCylinderShape* self, float arg0) {
  self->setMargin(arg0);
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btCylinderShape_getMargin_0(btCylinderShape* self) {
  return self->getMargin();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCylinderShape_setLocalScaling_1(btCylinderShape* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCylinderShape_calculateLocalInertia_2(btCylinderShape* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCylinderShape___destroy___0(btCylinderShape* self) {
  delete self;
}

// btActionInterface

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btActionInterface___destroy___0(btActionInterface* self) {
  delete self;
}

// btMatrix3x3

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btMatrix3x3_setEulerZYX_3(btMatrix3x3* self, float arg0, float arg1, float arg2) {
  self->setEulerZYX(arg0, arg1, arg2);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btMatrix3x3_getRotation_1(btMatrix3x3* self, btQuaternion* arg0) {
  self->getRotation(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btMatrix3x3___destroy___0(btMatrix3x3* self) {
  delete self;
}

// ConcreteContactResultCallback

ConcreteContactResultCallback* EMSCRIPTEN_KEEPALIVE emscripten_bind_ConcreteContactResultCallback_ConcreteContactResultCallback_0() {
  return new ConcreteContactResultCallback();
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_ConcreteContactResultCallback_addSingleResult_7(ConcreteContactResultCallback* self, btManifoldPoint* arg0, btCollisionObjectWrapper* arg1, int arg2, int arg3, btCollisionObjectWrapper* arg4, int arg5, int arg6) {
  return self->addSingleResult(*arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ConcreteContactResultCallback___destroy___0(ConcreteContactResultCallback* self) {
  delete self;
}

// btBvhTriangleMeshShape

btBvhTriangleMeshShape* EMSCRIPTEN_KEEPALIVE emscripten_bind_btBvhTriangleMeshShape_btBvhTriangleMeshShape_2(btStridingMeshInterface* arg0, bool arg1) {
  return new btBvhTriangleMeshShape(arg0, arg1);
}

btBvhTriangleMeshShape* EMSCRIPTEN_KEEPALIVE emscripten_bind_btBvhTriangleMeshShape_btBvhTriangleMeshShape_3(btStridingMeshInterface* arg0, bool arg1, bool arg2) {
  return new btBvhTriangleMeshShape(arg0, arg1, arg2);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btBvhTriangleMeshShape_setLocalScaling_1(btBvhTriangleMeshShape* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btBvhTriangleMeshShape_calculateLocalInertia_2(btBvhTriangleMeshShape* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btBvhTriangleMeshShape___destroy___0(btBvhTriangleMeshShape* self) {
  delete self;
}

// btDbvtBroadphase

btDbvtBroadphase* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDbvtBroadphase_btDbvtBroadphase_0() {
  return new btDbvtBroadphase();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDbvtBroadphase___destroy___0(btDbvtBroadphase* self) {
  delete self;
}

// VoidPtr

void EMSCRIPTEN_KEEPALIVE emscripten_bind_VoidPtr___destroy___0(void** self) {
  delete self;
}

// btSequentialImpulseConstraintSolver

btSequentialImpulseConstraintSolver* EMSCRIPTEN_KEEPALIVE emscripten_bind_btSequentialImpulseConstraintSolver_btSequentialImpulseConstraintSolver_0() {
  return new btSequentialImpulseConstraintSolver();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btSequentialImpulseConstraintSolver___destroy___0(btSequentialImpulseConstraintSolver* self) {
  delete self;
}

// btDispatcherInfo

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_get_m_timeStep_0(btDispatcherInfo* self) {
  return self->m_timeStep;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_set_m_timeStep_1(btDispatcherInfo* self, float arg0) {
  self->m_timeStep = arg0;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_get_m_stepCount_0(btDispatcherInfo* self) {
  return self->m_stepCount;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_set_m_stepCount_1(btDispatcherInfo* self, int arg0) {
  self->m_stepCount = arg0;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_get_m_dispatchFunc_0(btDispatcherInfo* self) {
  return self->m_dispatchFunc;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_set_m_dispatchFunc_1(btDispatcherInfo* self, int arg0) {
  self->m_dispatchFunc = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_get_m_timeOfImpact_0(btDispatcherInfo* self) {
  return self->m_timeOfImpact;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_set_m_timeOfImpact_1(btDispatcherInfo* self, float arg0) {
  self->m_timeOfImpact = arg0;
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_get_m_useContinuous_0(btDispatcherInfo* self) {
  return self->m_useContinuous;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_set_m_useContinuous_1(btDispatcherInfo* self, bool arg0) {
  self->m_useContinuous = arg0;
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_get_m_enableSatConvex_0(btDispatcherInfo* self) {
  return self->m_enableSatConvex;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_set_m_enableSatConvex_1(btDispatcherInfo* self, bool arg0) {
  self->m_enableSatConvex = arg0;
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_get_m_enableSPU_0(btDispatcherInfo* self) {
  return self->m_enableSPU;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_set_m_enableSPU_1(btDispatcherInfo* self, bool arg0) {
  self->m_enableSPU = arg0;
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_get_m_useEpa_0(btDispatcherInfo* self) {
  return self->m_useEpa;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_set_m_useEpa_1(btDispatcherInfo* self, bool arg0) {
  self->m_useEpa = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_get_m_allowedCcdPenetration_0(btDispatcherInfo* self) {
  return self->m_allowedCcdPenetration;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_set_m_allowedCcdPenetration_1(btDispatcherInfo* self, float arg0) {
  self->m_allowedCcdPenetration = arg0;
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_get_m_useConvexConservativeDistanceUtil_0(btDispatcherInfo* self) {
  return self->m_useConvexConservativeDistanceUtil;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_set_m_useConvexConservativeDistanceUtil_1(btDispatcherInfo* self, bool arg0) {
  self->m_useConvexConservativeDistanceUtil = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_get_m_convexConservativeDistanceThreshold_0(btDispatcherInfo* self) {
  return self->m_convexConservativeDistanceThreshold;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo_set_m_convexConservativeDistanceThreshold_1(btDispatcherInfo* self, float arg0) {
  self->m_convexConservativeDistanceThreshold = arg0;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDispatcherInfo___destroy___0(btDispatcherInfo* self) {
  delete self;
}

// btCollisionConfiguration

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionConfiguration___destroy___0(btCollisionConfiguration* self) {
  delete self;
}

// btAxisSweep3

btAxisSweep3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btAxisSweep3_btAxisSweep3_2(btVector3* arg0, btVector3* arg1) {
  return new btAxisSweep3(*arg0, *arg1);
}

btAxisSweep3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btAxisSweep3_btAxisSweep3_3(btVector3* arg0, btVector3* arg1, int arg2) {
  return new btAxisSweep3(*arg0, *arg1, arg2);
}

btAxisSweep3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btAxisSweep3_btAxisSweep3_4(btVector3* arg0, btVector3* arg1, int arg2, btOverlappingPairCache* arg3) {
  return new btAxisSweep3(*arg0, *arg1, arg2, arg3);
}

btAxisSweep3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btAxisSweep3_btAxisSweep3_5(btVector3* arg0, btVector3* arg1, int arg2, btOverlappingPairCache* arg3, bool arg4) {
  return new btAxisSweep3(*arg0, *arg1, arg2, arg3, arg4);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btAxisSweep3___destroy___0(btAxisSweep3* self) {
  delete self;
}

// btPairCachingGhostObject

btPairCachingGhostObject* EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_btPairCachingGhostObject_0() {
  return new btPairCachingGhostObject();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_setAnisotropicFriction_2(btPairCachingGhostObject* self, btVector3* arg0, int arg1) {
  self->setAnisotropicFriction(*arg0, arg1);
}

btCollisionShape* EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_getCollisionShape_0(btPairCachingGhostObject* self) {
  return self->getCollisionShape();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_setContactProcessingThreshold_1(btPairCachingGhostObject* self, float arg0) {
  self->setContactProcessingThreshold(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_setActivationState_1(btPairCachingGhostObject* self, int arg0) {
  self->setActivationState(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_forceActivationState_1(btPairCachingGhostObject* self, int arg0) {
  self->forceActivationState(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_activate_0(btPairCachingGhostObject* self) {
  self->activate();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_activate_1(btPairCachingGhostObject* self, bool arg0) {
  self->activate(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_isActive_0(btPairCachingGhostObject* self) {
  return self->isActive();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_isKinematicObject_0(btPairCachingGhostObject* self) {
  return self->isKinematicObject();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_setRestitution_1(btPairCachingGhostObject* self, float arg0) {
  self->setRestitution(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_setFriction_1(btPairCachingGhostObject* self, float arg0) {
  self->setFriction(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_setRollingFriction_1(btPairCachingGhostObject* self, float arg0) {
  self->setRollingFriction(arg0);
}

btTransform* EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_getWorldTransform_0(btPairCachingGhostObject* self) {
  return &self->getWorldTransform();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_getCollisionFlags_0(btPairCachingGhostObject* self) {
  return self->getCollisionFlags();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_setCollisionFlags_1(btPairCachingGhostObject* self, int arg0) {
  self->setCollisionFlags(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_setWorldTransform_1(btPairCachingGhostObject* self, btTransform* arg0) {
  self->setWorldTransform(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_setCollisionShape_1(btPairCachingGhostObject* self, btCollisionShape* arg0) {
  self->setCollisionShape(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_setCcdMotionThreshold_1(btPairCachingGhostObject* self, float arg0) {
  self->setCcdMotionThreshold(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_setCcdSweptSphereRadius_1(btPairCachingGhostObject* self, float arg0) {
  self->setCcdSweptSphereRadius(arg0);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_getNumOverlappingObjects_0(btPairCachingGhostObject* self) {
  return self->getNumOverlappingObjects();
}

btCollisionObject* EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject_getOverlappingObject_1(btPairCachingGhostObject* self, int arg0) {
  return self->getOverlappingObject(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPairCachingGhostObject___destroy___0(btPairCachingGhostObject* self) {
  delete self;
}

// btRigidBodyConstructionInfo

btRigidBody::btRigidBodyConstructionInfo* EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_btRigidBodyConstructionInfo_3(float arg0, btMotionState* arg1, btCollisionShape* arg2) {
  return new btRigidBody::btRigidBodyConstructionInfo(arg0, arg1, arg2);
}

btRigidBody::btRigidBodyConstructionInfo* EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_btRigidBodyConstructionInfo_4(float arg0, btMotionState* arg1, btCollisionShape* arg2, btVector3* arg3) {
  return new btRigidBody::btRigidBodyConstructionInfo(arg0, arg1, arg2, *arg3);
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_get_m_linearDamping_0(btRigidBody::btRigidBodyConstructionInfo* self) {
  return self->m_linearDamping;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_set_m_linearDamping_1(btRigidBody::btRigidBodyConstructionInfo* self, float arg0) {
  self->m_linearDamping = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_get_m_angularDamping_0(btRigidBody::btRigidBodyConstructionInfo* self) {
  return self->m_angularDamping;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_set_m_angularDamping_1(btRigidBody::btRigidBodyConstructionInfo* self, float arg0) {
  self->m_angularDamping = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_get_m_friction_0(btRigidBody::btRigidBodyConstructionInfo* self) {
  return self->m_friction;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_set_m_friction_1(btRigidBody::btRigidBodyConstructionInfo* self, float arg0) {
  self->m_friction = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_get_m_rollingFriction_0(btRigidBody::btRigidBodyConstructionInfo* self) {
  return self->m_rollingFriction;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_set_m_rollingFriction_1(btRigidBody::btRigidBodyConstructionInfo* self, float arg0) {
  self->m_rollingFriction = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_get_m_restitution_0(btRigidBody::btRigidBodyConstructionInfo* self) {
  return self->m_restitution;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_set_m_restitution_1(btRigidBody::btRigidBodyConstructionInfo* self, float arg0) {
  self->m_restitution = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_get_m_linearSleepingThreshold_0(btRigidBody::btRigidBodyConstructionInfo* self) {
  return self->m_linearSleepingThreshold;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_set_m_linearSleepingThreshold_1(btRigidBody::btRigidBodyConstructionInfo* self, float arg0) {
  self->m_linearSleepingThreshold = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_get_m_angularSleepingThreshold_0(btRigidBody::btRigidBodyConstructionInfo* self) {
  return self->m_angularSleepingThreshold;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_set_m_angularSleepingThreshold_1(btRigidBody::btRigidBodyConstructionInfo* self, float arg0) {
  self->m_angularSleepingThreshold = arg0;
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_get_m_additionalDamping_0(btRigidBody::btRigidBodyConstructionInfo* self) {
  return self->m_additionalDamping;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_set_m_additionalDamping_1(btRigidBody::btRigidBodyConstructionInfo* self, bool arg0) {
  self->m_additionalDamping = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_get_m_additionalDampingFactor_0(btRigidBody::btRigidBodyConstructionInfo* self) {
  return self->m_additionalDampingFactor;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_set_m_additionalDampingFactor_1(btRigidBody::btRigidBodyConstructionInfo* self, float arg0) {
  self->m_additionalDampingFactor = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_get_m_additionalLinearDampingThresholdSqr_0(btRigidBody::btRigidBodyConstructionInfo* self) {
  return self->m_additionalLinearDampingThresholdSqr;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_set_m_additionalLinearDampingThresholdSqr_1(btRigidBody::btRigidBodyConstructionInfo* self, float arg0) {
  self->m_additionalLinearDampingThresholdSqr = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_get_m_additionalAngularDampingThresholdSqr_0(btRigidBody::btRigidBodyConstructionInfo* self) {
  return self->m_additionalAngularDampingThresholdSqr;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_set_m_additionalAngularDampingThresholdSqr_1(btRigidBody::btRigidBodyConstructionInfo* self, float arg0) {
  self->m_additionalAngularDampingThresholdSqr = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_get_m_additionalAngularDampingFactor_0(btRigidBody::btRigidBodyConstructionInfo* self) {
  return self->m_additionalAngularDampingFactor;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo_set_m_additionalAngularDampingFactor_1(btRigidBody::btRigidBodyConstructionInfo* self, float arg0) {
  self->m_additionalAngularDampingFactor = arg0;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBodyConstructionInfo___destroy___0(btRigidBody::btRigidBodyConstructionInfo* self) {
  delete self;
}

// btManifoldPoint

const btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btManifoldPoint_getPositionWorldOnA_0(btManifoldPoint* self) {
  return &self->getPositionWorldOnA();
}

const btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btManifoldPoint_getPositionWorldOnB_0(btManifoldPoint* self) {
  return &self->getPositionWorldOnB();
}

const double EMSCRIPTEN_KEEPALIVE emscripten_bind_btManifoldPoint_getDistance_0(btManifoldPoint* self) {
  return self->getDistance();
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btManifoldPoint_get_m_localPointA_0(btManifoldPoint* self) {
  return &self->m_localPointA;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btManifoldPoint_set_m_localPointA_1(btManifoldPoint* self, btVector3* arg0) {
  self->m_localPointA = *arg0;
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btManifoldPoint_get_m_localPointB_0(btManifoldPoint* self) {
  return &self->m_localPointB;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btManifoldPoint_set_m_localPointB_1(btManifoldPoint* self, btVector3* arg0) {
  self->m_localPointB = *arg0;
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btManifoldPoint_get_m_positionWorldOnB_0(btManifoldPoint* self) {
  return &self->m_positionWorldOnB;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btManifoldPoint_set_m_positionWorldOnB_1(btManifoldPoint* self, btVector3* arg0) {
  self->m_positionWorldOnB = *arg0;
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btManifoldPoint_get_m_positionWorldOnA_0(btManifoldPoint* self) {
  return &self->m_positionWorldOnA;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btManifoldPoint_set_m_positionWorldOnA_1(btManifoldPoint* self, btVector3* arg0) {
  self->m_positionWorldOnA = *arg0;
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btManifoldPoint_get_m_normalWorldOnB_0(btManifoldPoint* self) {
  return &self->m_normalWorldOnB;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btManifoldPoint_set_m_normalWorldOnB_1(btManifoldPoint* self, btVector3* arg0) {
  self->m_normalWorldOnB = *arg0;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btManifoldPoint___destroy___0(btManifoldPoint* self) {
  delete self;
}

// btBroadphaseInterface

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btBroadphaseInterface___destroy___0(btBroadphaseInterface* self) {
  delete self;
}

// btDiscreteDynamicsWorld

btDiscreteDynamicsWorld* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_btDiscreteDynamicsWorld_4(btDispatcher* arg0, btBroadphaseInterface* arg1, btConstraintSolver* arg2, btCollisionConfiguration* arg3) {
  return new btDiscreteDynamicsWorld(arg0, arg1, arg2, arg3);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_setGravity_1(btDiscreteDynamicsWorld* self, btVector3* arg0) {
  self->setGravity(*arg0);
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_getGravity_0(btDiscreteDynamicsWorld* self) {
  static btVector3 temp;
  return (temp = self->getGravity(), &temp);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_addRigidBody_1(btDiscreteDynamicsWorld* self, btRigidBody* arg0) {
  self->addRigidBody(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_addRigidBody_3(btDiscreteDynamicsWorld* self, btRigidBody* arg0, short arg1, short arg2) {
  self->addRigidBody(arg0, arg1, arg2);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_removeRigidBody_1(btDiscreteDynamicsWorld* self, btRigidBody* arg0) {
  self->removeRigidBody(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_addConstraint_1(btDiscreteDynamicsWorld* self, btTypedConstraint* arg0) {
  self->addConstraint(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_addConstraint_2(btDiscreteDynamicsWorld* self, btTypedConstraint* arg0, bool arg1) {
  self->addConstraint(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_removeConstraint_1(btDiscreteDynamicsWorld* self, btTypedConstraint* arg0) {
  self->removeConstraint(arg0);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_stepSimulation_1(btDiscreteDynamicsWorld* self, float arg0) {
  return self->stepSimulation(arg0);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_stepSimulation_2(btDiscreteDynamicsWorld* self, float arg0, int arg1) {
  return self->stepSimulation(arg0, arg1);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_stepSimulation_3(btDiscreteDynamicsWorld* self, float arg0, int arg1, float arg2) {
  return self->stepSimulation(arg0, arg1, arg2);
}

btDispatcher* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_getDispatcher_0(btDiscreteDynamicsWorld* self) {
  return self->getDispatcher();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_rayTest_3(btDiscreteDynamicsWorld* self, btVector3* arg0, btVector3* arg1, btCollisionWorld::RayResultCallback* arg2) {
  self->rayTest(*arg0, *arg1, *arg2);
}

btOverlappingPairCache* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_getPairCache_0(btDiscreteDynamicsWorld* self) {
  return self->getPairCache();
}

btDispatcherInfo* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_getDispatchInfo_0(btDiscreteDynamicsWorld* self) {
  return &self->getDispatchInfo();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_addCollisionObject_1(btDiscreteDynamicsWorld* self, btCollisionObject* arg0) {
  self->addCollisionObject(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_addCollisionObject_2(btDiscreteDynamicsWorld* self, btCollisionObject* arg0, short arg1) {
  self->addCollisionObject(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_addCollisionObject_3(btDiscreteDynamicsWorld* self, btCollisionObject* arg0, short arg1, short arg2) {
  self->addCollisionObject(arg0, arg1, arg2);
}

const btBroadphaseInterface* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_getBroadphase_0(btDiscreteDynamicsWorld* self) {
  return self->getBroadphase();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_convexSweepTest_5(btDiscreteDynamicsWorld* self, btConvexShape* arg0, btTransform* arg1, btTransform* arg2, btCollisionWorld::ConvexResultCallback* arg3, float arg4) {
  self->convexSweepTest(arg0, *arg1, *arg2, *arg3, arg4);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_contactPairTest_3(btDiscreteDynamicsWorld* self, btCollisionObject* arg0, btCollisionObject* arg1, btCollisionWorld::ContactResultCallback* arg2) {
  self->contactPairTest(arg0, arg1, *arg2);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_addAction_1(btDiscreteDynamicsWorld* self, btActionInterface* arg0) {
  self->addAction(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_removeAction_1(btDiscreteDynamicsWorld* self, btActionInterface* arg0) {
  self->removeAction(arg0);
}

btContactSolverInfo* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld_getSolverInfo_0(btDiscreteDynamicsWorld* self) {
  static btContactSolverInfo temp;
  return (temp = self->getSolverInfo(), &temp);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDiscreteDynamicsWorld___destroy___0(btDiscreteDynamicsWorld* self) {
  delete self;
}

// btConvexTriangleMeshShape

btConvexTriangleMeshShape* EMSCRIPTEN_KEEPALIVE emscripten_bind_btConvexTriangleMeshShape_btConvexTriangleMeshShape_1(btStridingMeshInterface* arg0) {
  return new btConvexTriangleMeshShape(arg0);
}

btConvexTriangleMeshShape* EMSCRIPTEN_KEEPALIVE emscripten_bind_btConvexTriangleMeshShape_btConvexTriangleMeshShape_2(btStridingMeshInterface* arg0, bool arg1) {
  return new btConvexTriangleMeshShape(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConvexTriangleMeshShape_setLocalScaling_1(btConvexTriangleMeshShape* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConvexTriangleMeshShape_calculateLocalInertia_2(btConvexTriangleMeshShape* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConvexTriangleMeshShape___destroy___0(btConvexTriangleMeshShape* self) {
  delete self;
}

// btPoint2PointConstraint

btPoint2PointConstraint* EMSCRIPTEN_KEEPALIVE emscripten_bind_btPoint2PointConstraint_btPoint2PointConstraint_2(btRigidBody* arg0, btVector3* arg1) {
  return new btPoint2PointConstraint(*arg0, *arg1);
}

btPoint2PointConstraint* EMSCRIPTEN_KEEPALIVE emscripten_bind_btPoint2PointConstraint_btPoint2PointConstraint_4(btRigidBody* arg0, btRigidBody* arg1, btVector3* arg2, btVector3* arg3) {
  return new btPoint2PointConstraint(*arg0, *arg1, *arg2, *arg3);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPoint2PointConstraint_setPivotA_1(btPoint2PointConstraint* self, btVector3* arg0) {
  self->setPivotA(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPoint2PointConstraint_setPivotB_1(btPoint2PointConstraint* self, btVector3* arg0) {
  self->setPivotB(*arg0);
}

const btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btPoint2PointConstraint_getPivotInA_0(btPoint2PointConstraint* self) {
  return &self->getPivotInA();
}

const btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btPoint2PointConstraint_getPivotInB_0(btPoint2PointConstraint* self) {
  return &self->getPivotInB();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPoint2PointConstraint_enableFeedback_1(btPoint2PointConstraint* self, bool arg0) {
  self->enableFeedback(arg0);
}

const float EMSCRIPTEN_KEEPALIVE emscripten_bind_btPoint2PointConstraint_getBreakingImpulseThreshold_0(btPoint2PointConstraint* self) {
  return self->getBreakingImpulseThreshold();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPoint2PointConstraint_setBreakingImpulseThreshold_1(btPoint2PointConstraint* self, float arg0) {
  self->setBreakingImpulseThreshold(arg0);
}

btConstraintSetting* EMSCRIPTEN_KEEPALIVE emscripten_bind_btPoint2PointConstraint_get_m_setting_0(btPoint2PointConstraint* self) {
  return &self->m_setting;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPoint2PointConstraint_set_m_setting_1(btPoint2PointConstraint* self, btConstraintSetting* arg0) {
  self->m_setting = *arg0;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPoint2PointConstraint___destroy___0(btPoint2PointConstraint* self) {
  delete self;
}

// btSliderConstraint

btSliderConstraint* EMSCRIPTEN_KEEPALIVE emscripten_bind_btSliderConstraint_btSliderConstraint_3(btRigidBody* arg0, btTransform* arg1, bool arg2) {
  return new btSliderConstraint(*arg0, *arg1, arg2);
}

btSliderConstraint* EMSCRIPTEN_KEEPALIVE emscripten_bind_btSliderConstraint_btSliderConstraint_5(btRigidBody* arg0, btRigidBody* arg1, btTransform* arg2, btTransform* arg3, bool arg4) {
  return new btSliderConstraint(*arg0, *arg1, *arg2, *arg3, arg4);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btSliderConstraint_setLowerLinLimit_1(btSliderConstraint* self, float arg0) {
  self->setLowerLinLimit(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btSliderConstraint_setUpperLinLimit_1(btSliderConstraint* self, float arg0) {
  self->setUpperLinLimit(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btSliderConstraint_setLowerAngLimit_1(btSliderConstraint* self, float arg0) {
  self->setLowerAngLimit(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btSliderConstraint_setUpperAngLimit_1(btSliderConstraint* self, float arg0) {
  self->setUpperAngLimit(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btSliderConstraint_enableFeedback_1(btSliderConstraint* self, bool arg0) {
  self->enableFeedback(arg0);
}

const float EMSCRIPTEN_KEEPALIVE emscripten_bind_btSliderConstraint_getBreakingImpulseThreshold_0(btSliderConstraint* self) {
  return self->getBreakingImpulseThreshold();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btSliderConstraint_setBreakingImpulseThreshold_1(btSliderConstraint* self, float arg0) {
  self->setBreakingImpulseThreshold(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btSliderConstraint___destroy___0(btSliderConstraint* self) {
  delete self;
}

// btConeTwistConstraint

btConeTwistConstraint* EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeTwistConstraint_btConeTwistConstraint_2(btRigidBody* arg0, btTransform* arg1) {
  return new btConeTwistConstraint(*arg0, *arg1);
}

btConeTwistConstraint* EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeTwistConstraint_btConeTwistConstraint_4(btRigidBody* arg0, btRigidBody* arg1, btTransform* arg2, btTransform* arg3) {
  return new btConeTwistConstraint(*arg0, *arg1, *arg2, *arg3);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeTwistConstraint_setLimit_2(btConeTwistConstraint* self, int arg0, float arg1) {
  self->setLimit(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeTwistConstraint_setAngularOnly_1(btConeTwistConstraint* self, bool arg0) {
  self->setAngularOnly(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeTwistConstraint_setDamping_1(btConeTwistConstraint* self, float arg0) {
  self->setDamping(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeTwistConstraint_enableMotor_1(btConeTwistConstraint* self, bool arg0) {
  self->enableMotor(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeTwistConstraint_setMaxMotorImpulse_1(btConeTwistConstraint* self, float arg0) {
  self->setMaxMotorImpulse(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeTwistConstraint_setMaxMotorImpulseNormalized_1(btConeTwistConstraint* self, float arg0) {
  self->setMaxMotorImpulseNormalized(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeTwistConstraint_setMotorTarget_1(btConeTwistConstraint* self, btQuaternion* arg0) {
  self->setMotorTarget(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeTwistConstraint_setMotorTargetInConstraintSpace_1(btConeTwistConstraint* self, btQuaternion* arg0) {
  self->setMotorTargetInConstraintSpace(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeTwistConstraint_enableFeedback_1(btConeTwistConstraint* self, bool arg0) {
  self->enableFeedback(arg0);
}

const float EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeTwistConstraint_getBreakingImpulseThreshold_0(btConeTwistConstraint* self) {
  return self->getBreakingImpulseThreshold();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeTwistConstraint_setBreakingImpulseThreshold_1(btConeTwistConstraint* self, float arg0) {
  self->setBreakingImpulseThreshold(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeTwistConstraint___destroy___0(btConeTwistConstraint* self) {
  delete self;
}

// btDefaultCollisionConfiguration

btDefaultCollisionConfiguration* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDefaultCollisionConfiguration_btDefaultCollisionConfiguration_0() {
  return new btDefaultCollisionConfiguration();
}

btDefaultCollisionConfiguration* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDefaultCollisionConfiguration_btDefaultCollisionConfiguration_1(btDefaultCollisionConstructionInfo* arg0) {
  return new btDefaultCollisionConfiguration(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDefaultCollisionConfiguration___destroy___0(btDefaultCollisionConfiguration* self) {
  delete self;
}

// btConeShapeZ

btConeShapeZ* EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeShapeZ_btConeShapeZ_2(float arg0, float arg1) {
  return new btConeShapeZ(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeShapeZ_setLocalScaling_1(btConeShapeZ* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeShapeZ_calculateLocalInertia_2(btConeShapeZ* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeShapeZ___destroy___0(btConeShapeZ* self) {
  delete self;
}

// btConeShapeX

btConeShapeX* EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeShapeX_btConeShapeX_2(float arg0, float arg1) {
  return new btConeShapeX(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeShapeX_setLocalScaling_1(btConeShapeX* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeShapeX_calculateLocalInertia_2(btConeShapeX* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConeShapeX___destroy___0(btConeShapeX* self) {
  delete self;
}

// btTriangleMesh

btTriangleMesh* EMSCRIPTEN_KEEPALIVE emscripten_bind_btTriangleMesh_btTriangleMesh_0() {
  return new btTriangleMesh();
}

btTriangleMesh* EMSCRIPTEN_KEEPALIVE emscripten_bind_btTriangleMesh_btTriangleMesh_1(bool arg0) {
  return new btTriangleMesh(arg0);
}

btTriangleMesh* EMSCRIPTEN_KEEPALIVE emscripten_bind_btTriangleMesh_btTriangleMesh_2(bool arg0, bool arg1) {
  return new btTriangleMesh(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btTriangleMesh_addTriangle_3(btTriangleMesh* self, btVector3* arg0, btVector3* arg1, btVector3* arg2) {
  self->addTriangle(*arg0, *arg1, *arg2);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btTriangleMesh_addTriangle_4(btTriangleMesh* self, btVector3* arg0, btVector3* arg1, btVector3* arg2, bool arg3) {
  self->addTriangle(*arg0, *arg1, *arg2, arg3);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btTriangleMesh___destroy___0(btTriangleMesh* self) {
  delete self;
}

// btConvexHullShape

btConvexHullShape* EMSCRIPTEN_KEEPALIVE emscripten_bind_btConvexHullShape_btConvexHullShape_0() {
  return new btConvexHullShape();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConvexHullShape_addPoint_1(btConvexHullShape* self, btVector3* arg0) {
  self->addPoint(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConvexHullShape_addPoint_2(btConvexHullShape* self, btVector3* arg0, bool arg1) {
  self->addPoint(*arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConvexHullShape_setMargin_1(btConvexHullShape* self, float arg0) {
  self->setMargin(arg0);
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btConvexHullShape_getMargin_0(btConvexHullShape* self) {
  return self->getMargin();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConvexHullShape_setLocalScaling_1(btConvexHullShape* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConvexHullShape_calculateLocalInertia_2(btConvexHullShape* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConvexHullShape___destroy___0(btConvexHullShape* self) {
  delete self;
}

// btPersistentManifold

btPersistentManifold* EMSCRIPTEN_KEEPALIVE emscripten_bind_btPersistentManifold_btPersistentManifold_0() {
  return new btPersistentManifold();
}

const btCollisionObject* EMSCRIPTEN_KEEPALIVE emscripten_bind_btPersistentManifold_getBody0_0(btPersistentManifold* self) {
  return self->getBody0();
}

const btCollisionObject* EMSCRIPTEN_KEEPALIVE emscripten_bind_btPersistentManifold_getBody1_0(btPersistentManifold* self) {
  return self->getBody1();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_btPersistentManifold_getNumContacts_0(btPersistentManifold* self) {
  return self->getNumContacts();
}

btManifoldPoint* EMSCRIPTEN_KEEPALIVE emscripten_bind_btPersistentManifold_getContactPoint_1(btPersistentManifold* self, int arg0) {
  return &self->getContactPoint(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btPersistentManifold___destroy___0(btPersistentManifold* self) {
  delete self;
}

// btBoxShape

btBoxShape* EMSCRIPTEN_KEEPALIVE emscripten_bind_btBoxShape_btBoxShape_1(btVector3* arg0) {
  return new btBoxShape(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btBoxShape_setMargin_1(btBoxShape* self, float arg0) {
  self->setMargin(arg0);
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btBoxShape_getMargin_0(btBoxShape* self) {
  return self->getMargin();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btBoxShape_setLocalScaling_1(btBoxShape* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btBoxShape_calculateLocalInertia_2(btBoxShape* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btBoxShape___destroy___0(btBoxShape* self) {
  delete self;
}

// btCollisionDispatcher

btCollisionDispatcher* EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionDispatcher_btCollisionDispatcher_1(btDefaultCollisionConfiguration* arg0) {
  return new btCollisionDispatcher(arg0);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionDispatcher_getNumManifolds_0(btCollisionDispatcher* self) {
  return self->getNumManifolds();
}

btPersistentManifold* EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionDispatcher_getManifoldByIndexInternal_1(btCollisionDispatcher* self, int arg0) {
  return self->getManifoldByIndexInternal(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCollisionDispatcher___destroy___0(btCollisionDispatcher* self) {
  delete self;
}

// btVehicleTuning

btRaycastVehicle::btVehicleTuning* EMSCRIPTEN_KEEPALIVE emscripten_bind_btVehicleTuning_btVehicleTuning_0() {
  return new btRaycastVehicle::btVehicleTuning();
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btVehicleTuning_get_m_suspensionStiffness_0(btRaycastVehicle::btVehicleTuning* self) {
  return self->m_suspensionStiffness;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btVehicleTuning_set_m_suspensionStiffness_1(btRaycastVehicle::btVehicleTuning* self, float arg0) {
  self->m_suspensionStiffness = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btVehicleTuning_get_m_suspensionCompression_0(btRaycastVehicle::btVehicleTuning* self) {
  return self->m_suspensionCompression;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btVehicleTuning_set_m_suspensionCompression_1(btRaycastVehicle::btVehicleTuning* self, float arg0) {
  self->m_suspensionCompression = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btVehicleTuning_get_m_suspensionDamping_0(btRaycastVehicle::btVehicleTuning* self) {
  return self->m_suspensionDamping;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btVehicleTuning_set_m_suspensionDamping_1(btRaycastVehicle::btVehicleTuning* self, float arg0) {
  self->m_suspensionDamping = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btVehicleTuning_get_m_maxSuspensionTravelCm_0(btRaycastVehicle::btVehicleTuning* self) {
  return self->m_maxSuspensionTravelCm;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btVehicleTuning_set_m_maxSuspensionTravelCm_1(btRaycastVehicle::btVehicleTuning* self, float arg0) {
  self->m_maxSuspensionTravelCm = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btVehicleTuning_get_m_frictionSlip_0(btRaycastVehicle::btVehicleTuning* self) {
  return self->m_frictionSlip;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btVehicleTuning_set_m_frictionSlip_1(btRaycastVehicle::btVehicleTuning* self, float arg0) {
  self->m_frictionSlip = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btVehicleTuning_get_m_maxSuspensionForce_0(btRaycastVehicle::btVehicleTuning* self) {
  return self->m_maxSuspensionForce;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btVehicleTuning_set_m_maxSuspensionForce_1(btRaycastVehicle::btVehicleTuning* self, float arg0) {
  self->m_maxSuspensionForce = arg0;
}

// btCompoundShape

btCompoundShape* EMSCRIPTEN_KEEPALIVE emscripten_bind_btCompoundShape_btCompoundShape_0() {
  return new btCompoundShape();
}

btCompoundShape* EMSCRIPTEN_KEEPALIVE emscripten_bind_btCompoundShape_btCompoundShape_1(bool arg0) {
  return new btCompoundShape(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCompoundShape_addChildShape_2(btCompoundShape* self, btTransform* arg0, btCollisionShape* arg1) {
  self->addChildShape(*arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCompoundShape_removeChildShapeByIndex_1(btCompoundShape* self, int arg0) {
  self->removeChildShapeByIndex(arg0);
}

const int EMSCRIPTEN_KEEPALIVE emscripten_bind_btCompoundShape_getNumChildShapes_0(btCompoundShape* self) {
  return self->getNumChildShapes();
}

btCollisionShape* EMSCRIPTEN_KEEPALIVE emscripten_bind_btCompoundShape_getChildShape_1(btCompoundShape* self, int arg0) {
  return self->getChildShape(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCompoundShape_setMargin_1(btCompoundShape* self, float arg0) {
  self->setMargin(arg0);
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btCompoundShape_getMargin_0(btCompoundShape* self) {
  return self->getMargin();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCompoundShape_setLocalScaling_1(btCompoundShape* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCompoundShape_calculateLocalInertia_2(btCompoundShape* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCompoundShape___destroy___0(btCompoundShape* self) {
  delete self;
}

// btCollisionObjectWrapper

// ClosestConvexResultCallback

btCollisionWorld::ClosestConvexResultCallback* EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestConvexResultCallback_ClosestConvexResultCallback_2(btVector3* arg0, btVector3* arg1) {
  return new btCollisionWorld::ClosestConvexResultCallback(*arg0, *arg1);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestConvexResultCallback_hasHit_0(btCollisionWorld::ClosestConvexResultCallback* self) {
  return self->hasHit();
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestConvexResultCallback_get_m_convexFromWorld_0(btCollisionWorld::ClosestConvexResultCallback* self) {
  return &self->m_convexFromWorld;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestConvexResultCallback_set_m_convexFromWorld_1(btCollisionWorld::ClosestConvexResultCallback* self, btVector3* arg0) {
  self->m_convexFromWorld = *arg0;
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestConvexResultCallback_get_m_convexToWorld_0(btCollisionWorld::ClosestConvexResultCallback* self) {
  return &self->m_convexToWorld;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestConvexResultCallback_set_m_convexToWorld_1(btCollisionWorld::ClosestConvexResultCallback* self, btVector3* arg0) {
  self->m_convexToWorld = *arg0;
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestConvexResultCallback_get_m_hitNormalWorld_0(btCollisionWorld::ClosestConvexResultCallback* self) {
  return &self->m_hitNormalWorld;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestConvexResultCallback_set_m_hitNormalWorld_1(btCollisionWorld::ClosestConvexResultCallback* self, btVector3* arg0) {
  self->m_hitNormalWorld = *arg0;
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestConvexResultCallback_get_m_hitPointWorld_0(btCollisionWorld::ClosestConvexResultCallback* self) {
  return &self->m_hitPointWorld;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestConvexResultCallback_set_m_hitPointWorld_1(btCollisionWorld::ClosestConvexResultCallback* self, btVector3* arg0) {
  self->m_hitPointWorld = *arg0;
}

short EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestConvexResultCallback_get_m_collisionFilterGroup_0(btCollisionWorld::ClosestConvexResultCallback* self) {
  return self->m_collisionFilterGroup;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestConvexResultCallback_set_m_collisionFilterGroup_1(btCollisionWorld::ClosestConvexResultCallback* self, short arg0) {
  self->m_collisionFilterGroup = arg0;
}

short EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestConvexResultCallback_get_m_collisionFilterMask_0(btCollisionWorld::ClosestConvexResultCallback* self) {
  return self->m_collisionFilterMask;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestConvexResultCallback_set_m_collisionFilterMask_1(btCollisionWorld::ClosestConvexResultCallback* self, short arg0) {
  self->m_collisionFilterMask = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestConvexResultCallback_get_m_closestHitFraction_0(btCollisionWorld::ClosestConvexResultCallback* self) {
  return self->m_closestHitFraction;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestConvexResultCallback_set_m_closestHitFraction_1(btCollisionWorld::ClosestConvexResultCallback* self, float arg0) {
  self->m_closestHitFraction = arg0;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestConvexResultCallback___destroy___0(btCollisionWorld::ClosestConvexResultCallback* self) {
  delete self;
}

// btDefaultMotionState

btDefaultMotionState* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDefaultMotionState_btDefaultMotionState_0() {
  return new btDefaultMotionState();
}

btDefaultMotionState* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDefaultMotionState_btDefaultMotionState_1(btTransform* arg0) {
  return new btDefaultMotionState(*arg0);
}

btDefaultMotionState* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDefaultMotionState_btDefaultMotionState_2(btTransform* arg0, btTransform* arg1) {
  return new btDefaultMotionState(*arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDefaultMotionState_getWorldTransform_1(btDefaultMotionState* self, btTransform* arg0) {
  self->getWorldTransform(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDefaultMotionState_setWorldTransform_1(btDefaultMotionState* self, btTransform* arg0) {
  self->setWorldTransform(*arg0);
}

btTransform* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDefaultMotionState_get_m_graphicsWorldTrans_0(btDefaultMotionState* self) {
  return &self->m_graphicsWorldTrans;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDefaultMotionState_set_m_graphicsWorldTrans_1(btDefaultMotionState* self, btTransform* arg0) {
  self->m_graphicsWorldTrans = *arg0;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDefaultMotionState___destroy___0(btDefaultMotionState* self) {
  delete self;
}

// ClosestRayResultCallback

btCollisionWorld::ClosestRayResultCallback* EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestRayResultCallback_ClosestRayResultCallback_2(btVector3* arg0, btVector3* arg1) {
  return new btCollisionWorld::ClosestRayResultCallback(*arg0, *arg1);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestRayResultCallback_hasHit_0(btCollisionWorld::ClosestRayResultCallback* self) {
  return self->hasHit();
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestRayResultCallback_get_m_rayFromWorld_0(btCollisionWorld::ClosestRayResultCallback* self) {
  return &self->m_rayFromWorld;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestRayResultCallback_set_m_rayFromWorld_1(btCollisionWorld::ClosestRayResultCallback* self, btVector3* arg0) {
  self->m_rayFromWorld = *arg0;
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestRayResultCallback_get_m_rayToWorld_0(btCollisionWorld::ClosestRayResultCallback* self) {
  return &self->m_rayToWorld;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestRayResultCallback_set_m_rayToWorld_1(btCollisionWorld::ClosestRayResultCallback* self, btVector3* arg0) {
  self->m_rayToWorld = *arg0;
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestRayResultCallback_get_m_hitNormalWorld_0(btCollisionWorld::ClosestRayResultCallback* self) {
  return &self->m_hitNormalWorld;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestRayResultCallback_set_m_hitNormalWorld_1(btCollisionWorld::ClosestRayResultCallback* self, btVector3* arg0) {
  self->m_hitNormalWorld = *arg0;
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestRayResultCallback_get_m_hitPointWorld_0(btCollisionWorld::ClosestRayResultCallback* self) {
  return &self->m_hitPointWorld;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestRayResultCallback_set_m_hitPointWorld_1(btCollisionWorld::ClosestRayResultCallback* self, btVector3* arg0) {
  self->m_hitPointWorld = *arg0;
}

short EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestRayResultCallback_get_m_collisionFilterGroup_0(btCollisionWorld::ClosestRayResultCallback* self) {
  return self->m_collisionFilterGroup;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestRayResultCallback_set_m_collisionFilterGroup_1(btCollisionWorld::ClosestRayResultCallback* self, short arg0) {
  self->m_collisionFilterGroup = arg0;
}

short EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestRayResultCallback_get_m_collisionFilterMask_0(btCollisionWorld::ClosestRayResultCallback* self) {
  return self->m_collisionFilterMask;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestRayResultCallback_set_m_collisionFilterMask_1(btCollisionWorld::ClosestRayResultCallback* self, short arg0) {
  self->m_collisionFilterMask = arg0;
}

const btCollisionObject* EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestRayResultCallback_get_m_collisionObject_0(btCollisionWorld::ClosestRayResultCallback* self) {
  return self->m_collisionObject;
}

const void EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestRayResultCallback_set_m_collisionObject_1(btCollisionWorld::ClosestRayResultCallback* self, btCollisionObject* arg0) {
  self->m_collisionObject = arg0;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ClosestRayResultCallback___destroy___0(btCollisionWorld::ClosestRayResultCallback* self) {
  delete self;
}

// btCapsuleShapeX

btCapsuleShapeX* EMSCRIPTEN_KEEPALIVE emscripten_bind_btCapsuleShapeX_btCapsuleShapeX_2(float arg0, float arg1) {
  return new btCapsuleShapeX(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCapsuleShapeX_setMargin_1(btCapsuleShapeX* self, float arg0) {
  self->setMargin(arg0);
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btCapsuleShapeX_getMargin_0(btCapsuleShapeX* self) {
  return self->getMargin();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCapsuleShapeX_setLocalScaling_1(btCapsuleShapeX* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCapsuleShapeX_calculateLocalInertia_2(btCapsuleShapeX* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCapsuleShapeX___destroy___0(btCapsuleShapeX* self) {
  delete self;
}

// btQuaternion

btQuaternion* EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuaternion_btQuaternion_4(float arg0, float arg1, float arg2, float arg3) {
  return new btQuaternion(arg0, arg1, arg2, arg3);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuaternion_setValue_4(btQuaternion* self, float arg0, float arg1, float arg2, float arg3) {
  self->setValue(arg0, arg1, arg2, arg3);
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuaternion_x_0(btQuaternion* self) {
  return self->x();
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuaternion_y_0(btQuaternion* self) {
  return self->y();
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuaternion_z_0(btQuaternion* self) {
  return self->z();
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuaternion_w_0(btQuaternion* self) {
  return self->w();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuaternion_setX_1(btQuaternion* self, float arg0) {
  self->setX(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuaternion_setY_1(btQuaternion* self, float arg0) {
  self->setY(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuaternion_setZ_1(btQuaternion* self, float arg0) {
  self->setZ(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuaternion_setW_1(btQuaternion* self, float arg0) {
  self->setW(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btQuaternion___destroy___0(btQuaternion* self) {
  delete self;
}

// btCapsuleShapeZ

btCapsuleShapeZ* EMSCRIPTEN_KEEPALIVE emscripten_bind_btCapsuleShapeZ_btCapsuleShapeZ_2(float arg0, float arg1) {
  return new btCapsuleShapeZ(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCapsuleShapeZ_setMargin_1(btCapsuleShapeZ* self, float arg0) {
  self->setMargin(arg0);
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btCapsuleShapeZ_getMargin_0(btCapsuleShapeZ* self) {
  return self->getMargin();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCapsuleShapeZ_setLocalScaling_1(btCapsuleShapeZ* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCapsuleShapeZ_calculateLocalInertia_2(btCapsuleShapeZ* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCapsuleShapeZ___destroy___0(btCapsuleShapeZ* self) {
  delete self;
}

// btDefaultVehicleRaycaster

btDefaultVehicleRaycaster* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDefaultVehicleRaycaster_btDefaultVehicleRaycaster_1(btDynamicsWorld* arg0) {
  return new btDefaultVehicleRaycaster(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDefaultVehicleRaycaster___destroy___0(btDefaultVehicleRaycaster* self) {
  delete self;
}

// btWheelInfo

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_get_m_suspensionStiffness_0(btWheelInfo* self) {
  return self->m_suspensionStiffness;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_set_m_suspensionStiffness_1(btWheelInfo* self, float arg0) {
  self->m_suspensionStiffness = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_get_m_frictionSlip_0(btWheelInfo* self) {
  return self->m_frictionSlip;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_set_m_frictionSlip_1(btWheelInfo* self, float arg0) {
  self->m_frictionSlip = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_get_m_rollInfluence_0(btWheelInfo* self) {
  return self->m_rollInfluence;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_set_m_rollInfluence_1(btWheelInfo* self, float arg0) {
  self->m_rollInfluence = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_get_m_suspensionRestLength1_0(btWheelInfo* self) {
  return self->m_suspensionRestLength1;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_set_m_suspensionRestLength1_1(btWheelInfo* self, float arg0) {
  self->m_suspensionRestLength1 = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_get_m_wheelsRadius_0(btWheelInfo* self) {
  return self->m_wheelsRadius;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_set_m_wheelsRadius_1(btWheelInfo* self, float arg0) {
  self->m_wheelsRadius = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_get_m_wheelsDampingCompression_0(btWheelInfo* self) {
  return self->m_wheelsDampingCompression;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_set_m_wheelsDampingCompression_1(btWheelInfo* self, float arg0) {
  self->m_wheelsDampingCompression = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_get_m_wheelsDampingRelaxation_0(btWheelInfo* self) {
  return self->m_wheelsDampingRelaxation;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_set_m_wheelsDampingRelaxation_1(btWheelInfo* self, float arg0) {
  self->m_wheelsDampingRelaxation = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_get_m_steering_0(btWheelInfo* self) {
  return self->m_steering;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_set_m_steering_1(btWheelInfo* self, float arg0) {
  self->m_steering = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_get_m_maxSuspensionForce_0(btWheelInfo* self) {
  return self->m_maxSuspensionForce;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_set_m_maxSuspensionForce_1(btWheelInfo* self, float arg0) {
  self->m_maxSuspensionForce = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_get_m_maxSuspensionTravelCm_0(btWheelInfo* self) {
  return self->m_maxSuspensionTravelCm;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_set_m_maxSuspensionTravelCm_1(btWheelInfo* self, float arg0) {
  self->m_maxSuspensionTravelCm = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_get_m_wheelsSuspensionForce_0(btWheelInfo* self) {
  return self->m_wheelsSuspensionForce;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_set_m_wheelsSuspensionForce_1(btWheelInfo* self, float arg0) {
  self->m_wheelsSuspensionForce = arg0;
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_get_m_bIsFrontWheel_0(btWheelInfo* self) {
  return self->m_bIsFrontWheel;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_set_m_bIsFrontWheel_1(btWheelInfo* self, bool arg0) {
  self->m_bIsFrontWheel = arg0;
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_get_m_chassisConnectionPointCS_0(btWheelInfo* self) {
  return &self->m_chassisConnectionPointCS;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo_set_m_chassisConnectionPointCS_1(btWheelInfo* self, btVector3* arg0) {
  self->m_chassisConnectionPointCS = *arg0;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btWheelInfo___destroy___0(btWheelInfo* self) {
  delete self;
}

// btVector4

btVector4* EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector4_btVector4_0() {
  return new btVector4();
}

btVector4* EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector4_btVector4_4(float arg0, float arg1, float arg2, float arg3) {
  return new btVector4(arg0, arg1, arg2, arg3);
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector4_w_0(btVector4* self) {
  return self->w();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector4_setValue_4(btVector4* self, float arg0, float arg1, float arg2, float arg3) {
  self->setValue(arg0, arg1, arg2, arg3);
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector4_length_0(btVector4* self) {
  return self->length();
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector4_x_0(btVector4* self) {
  return self->x();
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector4_y_0(btVector4* self) {
  return self->y();
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector4_z_0(btVector4* self) {
  return self->z();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector4_setX_1(btVector4* self, float arg0) {
  self->setX(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector4_setY_1(btVector4* self, float arg0) {
  self->setY(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector4_setZ_1(btVector4* self, float arg0) {
  self->setZ(arg0);
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector4_op_mul_1(btVector4* self, float arg0) {
  return &(*dynamic_cast<btVector3*>(self) *= arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btVector4___destroy___0(btVector4* self) {
  delete self;
}

// btKinematicCharacterController

btKinematicCharacterController* EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_btKinematicCharacterController_3(btPairCachingGhostObject* arg0, btConvexShape* arg1, float arg2) {
  return new btKinematicCharacterController(arg0, arg1, arg2);
}

btKinematicCharacterController* EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_btKinematicCharacterController_4(btPairCachingGhostObject* arg0, btConvexShape* arg1, float arg2, int arg3) {
  return new btKinematicCharacterController(arg0, arg1, arg2, arg3);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_setUpAxis_1(btKinematicCharacterController* self, int arg0) {
  self->setUpAxis(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_setWalkDirection_1(btKinematicCharacterController* self, btVector3* arg0) {
  self->setWalkDirection(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_setVelocityForTimeInterval_2(btKinematicCharacterController* self, btVector3* arg0, float arg1) {
  self->setVelocityForTimeInterval(*arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_warp_1(btKinematicCharacterController* self, btVector3* arg0) {
  self->warp(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_preStep_1(btKinematicCharacterController* self, btCollisionWorld* arg0) {
  self->preStep(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_playerStep_2(btKinematicCharacterController* self, btCollisionWorld* arg0, float arg1) {
  self->playerStep(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_setFallSpeed_1(btKinematicCharacterController* self, float arg0) {
  self->setFallSpeed(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_setJumpSpeed_1(btKinematicCharacterController* self, float arg0) {
  self->setJumpSpeed(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_setMaxJumpHeight_1(btKinematicCharacterController* self, float arg0) {
  self->setMaxJumpHeight(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_canJump_0(btKinematicCharacterController* self) {
  return self->canJump();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_jump_0(btKinematicCharacterController* self) {
  self->jump();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_setGravity_1(btKinematicCharacterController* self, float arg0) {
  self->setGravity(arg0);
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_getGravity_0(btKinematicCharacterController* self) {
  return self->getGravity();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_setMaxSlope_1(btKinematicCharacterController* self, float arg0) {
  self->setMaxSlope(arg0);
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_getMaxSlope_0(btKinematicCharacterController* self) {
  return self->getMaxSlope();
}

btPairCachingGhostObject* EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_getGhostObject_0(btKinematicCharacterController* self) {
  return self->getGhostObject();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_setUseGhostSweepTest_1(btKinematicCharacterController* self, bool arg0) {
  self->setUseGhostSweepTest(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController_onGround_0(btKinematicCharacterController* self) {
  return self->onGround();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btKinematicCharacterController___destroy___0(btKinematicCharacterController* self) {
  delete self;
}

// btStaticPlaneShape

btStaticPlaneShape* EMSCRIPTEN_KEEPALIVE emscripten_bind_btStaticPlaneShape_btStaticPlaneShape_2(btVector3* arg0, float arg1) {
  return new btStaticPlaneShape(*arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btStaticPlaneShape_setLocalScaling_1(btStaticPlaneShape* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btStaticPlaneShape_calculateLocalInertia_2(btStaticPlaneShape* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btStaticPlaneShape___destroy___0(btStaticPlaneShape* self) {
  delete self;
}

// btContactSolverInfo

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_btContactSolverInfo_get_m_splitImpulse_0(btContactSolverInfo* self) {
  return self->m_splitImpulse;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btContactSolverInfo_set_m_splitImpulse_1(btContactSolverInfo* self, bool arg0) {
  self->m_splitImpulse = arg0;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_btContactSolverInfo_get_m_splitImpulsePenetrationThreshold_0(btContactSolverInfo* self) {
  return self->m_splitImpulsePenetrationThreshold;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btContactSolverInfo_set_m_splitImpulsePenetrationThreshold_1(btContactSolverInfo* self, int arg0) {
  self->m_splitImpulsePenetrationThreshold = arg0;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btContactSolverInfo___destroy___0(btContactSolverInfo* self) {
  delete self;
}

// btOverlappingPairCache

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btOverlappingPairCache_setInternalGhostPairCallback_1(btOverlappingPairCache* self, btOverlappingPairCallback* arg0) {
  self->setInternalGhostPairCallback(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btOverlappingPairCache___destroy___0(btOverlappingPairCache* self) {
  delete self;
}

// btSphereShape

btSphereShape* EMSCRIPTEN_KEEPALIVE emscripten_bind_btSphereShape_btSphereShape_1(float arg0) {
  return new btSphereShape(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btSphereShape_setMargin_1(btSphereShape* self, float arg0) {
  self->setMargin(arg0);
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btSphereShape_getMargin_0(btSphereShape* self) {
  return self->getMargin();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btSphereShape_setLocalScaling_1(btSphereShape* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btSphereShape_calculateLocalInertia_2(btSphereShape* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btSphereShape___destroy___0(btSphereShape* self) {
  delete self;
}

// btDefaultCollisionConstructionInfo

btDefaultCollisionConstructionInfo* EMSCRIPTEN_KEEPALIVE emscripten_bind_btDefaultCollisionConstructionInfo_btDefaultCollisionConstructionInfo_0() {
  return new btDefaultCollisionConstructionInfo();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btDefaultCollisionConstructionInfo___destroy___0(btDefaultCollisionConstructionInfo* self) {
  delete self;
}

// btHingeConstraint

btHingeConstraint* EMSCRIPTEN_KEEPALIVE emscripten_bind_btHingeConstraint_btHingeConstraint_2(btRigidBody* arg0, btTransform* arg1) {
  return new btHingeConstraint(*arg0, *arg1);
}

btHingeConstraint* EMSCRIPTEN_KEEPALIVE emscripten_bind_btHingeConstraint_btHingeConstraint_3(btRigidBody* arg0, btTransform* arg1, bool arg2) {
  return new btHingeConstraint(*arg0, *arg1, arg2);
}

btHingeConstraint* EMSCRIPTEN_KEEPALIVE emscripten_bind_btHingeConstraint_btHingeConstraint_4(btRigidBody* arg0, btRigidBody* arg1, btTransform* arg2, btTransform* arg3) {
  return new btHingeConstraint(*arg0, *arg1, *arg2, *arg3);
}

btHingeConstraint* EMSCRIPTEN_KEEPALIVE emscripten_bind_btHingeConstraint_btHingeConstraint_5(btRigidBody* arg0, btRigidBody* arg1, btTransform* arg2, btTransform* arg3, bool arg4) {
  return new btHingeConstraint(*arg0, *arg1, *arg2, *arg3, arg4);
}

btHingeConstraint* EMSCRIPTEN_KEEPALIVE emscripten_bind_btHingeConstraint_btHingeConstraint_6(btRigidBody* arg0, btRigidBody* arg1, btVector3* arg2, btVector3* arg3, btVector3* arg4, btVector3* arg5) {
  return new btHingeConstraint(*arg0, *arg1, *arg2, *arg3, *arg4, *arg5);
}

btHingeConstraint* EMSCRIPTEN_KEEPALIVE emscripten_bind_btHingeConstraint_btHingeConstraint_7(btRigidBody* arg0, btRigidBody* arg1, btVector3* arg2, btVector3* arg3, btVector3* arg4, btVector3* arg5, bool arg6) {
  return new btHingeConstraint(*arg0, *arg1, *arg2, *arg3, *arg4, *arg5, arg6);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btHingeConstraint_setLimit_4(btHingeConstraint* self, float arg0, float arg1, float arg2, float arg3) {
  self->setLimit(arg0, arg1, arg2, arg3);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btHingeConstraint_setLimit_5(btHingeConstraint* self, float arg0, float arg1, float arg2, float arg3, float arg4) {
  self->setLimit(arg0, arg1, arg2, arg3, arg4);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btHingeConstraint_enableAngularMotor_3(btHingeConstraint* self, bool arg0, float arg1, float arg2) {
  self->enableAngularMotor(arg0, arg1, arg2);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btHingeConstraint_enableFeedback_1(btHingeConstraint* self, bool arg0) {
  self->enableFeedback(arg0);
}

const float EMSCRIPTEN_KEEPALIVE emscripten_bind_btHingeConstraint_getBreakingImpulseThreshold_0(btHingeConstraint* self) {
  return self->getBreakingImpulseThreshold();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btHingeConstraint_setBreakingImpulseThreshold_1(btHingeConstraint* self, float arg0) {
  self->setBreakingImpulseThreshold(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btHingeConstraint___destroy___0(btHingeConstraint* self) {
  delete self;
}

// btConstraintSetting

btConstraintSetting* EMSCRIPTEN_KEEPALIVE emscripten_bind_btConstraintSetting_btConstraintSetting_0() {
  return new btConstraintSetting();
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btConstraintSetting_get_m_tau_0(btConstraintSetting* self) {
  return self->m_tau;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConstraintSetting_set_m_tau_1(btConstraintSetting* self, float arg0) {
  self->m_tau = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btConstraintSetting_get_m_damping_0(btConstraintSetting* self) {
  return self->m_damping;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConstraintSetting_set_m_damping_1(btConstraintSetting* self, float arg0) {
  self->m_damping = arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btConstraintSetting_get_m_impulseClamp_0(btConstraintSetting* self) {
  return self->m_impulseClamp;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConstraintSetting_set_m_impulseClamp_1(btConstraintSetting* self, float arg0) {
  self->m_impulseClamp = arg0;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConstraintSetting___destroy___0(btConstraintSetting* self) {
  delete self;
}

// LocalShapeInfo

int EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalShapeInfo_get_m_shapePart_0(btCollisionWorld::LocalShapeInfo* self) {
  return self->m_shapePart;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalShapeInfo_set_m_shapePart_1(btCollisionWorld::LocalShapeInfo* self, int arg0) {
  self->m_shapePart = arg0;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalShapeInfo_get_m_triangleIndex_0(btCollisionWorld::LocalShapeInfo* self) {
  return self->m_triangleIndex;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalShapeInfo_set_m_triangleIndex_1(btCollisionWorld::LocalShapeInfo* self, int arg0) {
  self->m_triangleIndex = arg0;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalShapeInfo___destroy___0(btCollisionWorld::LocalShapeInfo* self) {
  delete self;
}

// btConstraintSolver

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btConstraintSolver___destroy___0(btConstraintSolver* self) {
  delete self;
}

// btGeneric6DofSpringConstraint

btGeneric6DofSpringConstraint* EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofSpringConstraint_btGeneric6DofSpringConstraint_3(btRigidBody* arg0, btTransform* arg1, bool arg2) {
  return new btGeneric6DofSpringConstraint(*arg0, *arg1, arg2);
}

btGeneric6DofSpringConstraint* EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofSpringConstraint_btGeneric6DofSpringConstraint_5(btRigidBody* arg0, btRigidBody* arg1, btTransform* arg2, btTransform* arg3, bool arg4) {
  return new btGeneric6DofSpringConstraint(*arg0, *arg1, *arg2, *arg3, arg4);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofSpringConstraint_enableSpring_2(btGeneric6DofSpringConstraint* self, int arg0, bool arg1) {
  self->enableSpring(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofSpringConstraint_setStiffness_2(btGeneric6DofSpringConstraint* self, int arg0, float arg1) {
  self->setStiffness(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofSpringConstraint_setDamping_2(btGeneric6DofSpringConstraint* self, int arg0, float arg1) {
  self->setDamping(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofSpringConstraint_setLinearLowerLimit_1(btGeneric6DofSpringConstraint* self, btVector3* arg0) {
  self->setLinearLowerLimit(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofSpringConstraint_setLinearUpperLimit_1(btGeneric6DofSpringConstraint* self, btVector3* arg0) {
  self->setLinearUpperLimit(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofSpringConstraint_setAngularLowerLimit_1(btGeneric6DofSpringConstraint* self, btVector3* arg0) {
  self->setAngularLowerLimit(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofSpringConstraint_setAngularUpperLimit_1(btGeneric6DofSpringConstraint* self, btVector3* arg0) {
  self->setAngularUpperLimit(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofSpringConstraint_enableFeedback_1(btGeneric6DofSpringConstraint* self, bool arg0) {
  self->enableFeedback(arg0);
}

const float EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofSpringConstraint_getBreakingImpulseThreshold_0(btGeneric6DofSpringConstraint* self) {
  return self->getBreakingImpulseThreshold();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofSpringConstraint_setBreakingImpulseThreshold_1(btGeneric6DofSpringConstraint* self, float arg0) {
  self->setBreakingImpulseThreshold(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGeneric6DofSpringConstraint___destroy___0(btGeneric6DofSpringConstraint* self) {
  delete self;
}

// LocalConvexResult

btCollisionWorld::LocalConvexResult* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalConvexResult_LocalConvexResult_5(btCollisionObject* arg0, btCollisionWorld::LocalShapeInfo* arg1, btVector3* arg2, btVector3* arg3, float arg4) {
  return new btCollisionWorld::LocalConvexResult(arg0, arg1, *arg2, *arg3, arg4);
}

const btCollisionObject* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalConvexResult_get_m_hitCollisionObject_0(btCollisionWorld::LocalConvexResult* self) {
  return self->m_hitCollisionObject;
}

const void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalConvexResult_set_m_hitCollisionObject_1(btCollisionWorld::LocalConvexResult* self, btCollisionObject* arg0) {
  self->m_hitCollisionObject = arg0;
}

btCollisionWorld::LocalShapeInfo* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalConvexResult_get_m_localShapeInfo_0(btCollisionWorld::LocalConvexResult* self) {
  return self->m_localShapeInfo;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalConvexResult_set_m_localShapeInfo_1(btCollisionWorld::LocalConvexResult* self, btCollisionWorld::LocalShapeInfo* arg0) {
  self->m_localShapeInfo = arg0;
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalConvexResult_get_m_hitNormalLocal_0(btCollisionWorld::LocalConvexResult* self) {
  return &self->m_hitNormalLocal;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalConvexResult_set_m_hitNormalLocal_1(btCollisionWorld::LocalConvexResult* self, btVector3* arg0) {
  self->m_hitNormalLocal = *arg0;
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalConvexResult_get_m_hitPointLocal_0(btCollisionWorld::LocalConvexResult* self) {
  return &self->m_hitPointLocal;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalConvexResult_set_m_hitPointLocal_1(btCollisionWorld::LocalConvexResult* self, btVector3* arg0) {
  self->m_hitPointLocal = *arg0;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalConvexResult_get_m_hitFraction_0(btCollisionWorld::LocalConvexResult* self) {
  return self->m_hitFraction;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalConvexResult_set_m_hitFraction_1(btCollisionWorld::LocalConvexResult* self, float arg0) {
  self->m_hitFraction = arg0;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalConvexResult___destroy___0(btCollisionWorld::LocalConvexResult* self) {
  delete self;
}

// btOverlappingPairCallback

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btOverlappingPairCallback___destroy___0(btOverlappingPairCallback* self) {
  delete self;
}

// btRigidBody

btRigidBody* EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_btRigidBody_1(btRigidBody::btRigidBodyConstructionInfo* arg0) {
  return new btRigidBody(*arg0);
}

const btTransform* EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_getCenterOfMassTransform_0(btRigidBody* self) {
  return &self->getCenterOfMassTransform();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setCenterOfMassTransform_1(btRigidBody* self, btTransform* arg0) {
  self->setCenterOfMassTransform(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setSleepingThresholds_2(btRigidBody* self, float arg0, float arg1) {
  self->setSleepingThresholds(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setDamping_2(btRigidBody* self, float arg0, float arg1) {
  self->setDamping(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setMassProps_2(btRigidBody* self, float arg0, btVector3* arg1) {
  self->setMassProps(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setLinearFactor_1(btRigidBody* self, btVector3* arg0) {
  self->setLinearFactor(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_applyTorque_1(btRigidBody* self, btVector3* arg0) {
  self->applyTorque(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_applyForce_2(btRigidBody* self, btVector3* arg0, btVector3* arg1) {
  self->applyForce(*arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_applyCentralForce_1(btRigidBody* self, btVector3* arg0) {
  self->applyCentralForce(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_applyTorqueImpulse_1(btRigidBody* self, btVector3* arg0) {
  self->applyTorqueImpulse(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_applyImpulse_2(btRigidBody* self, btVector3* arg0, btVector3* arg1) {
  self->applyImpulse(*arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_applyCentralImpulse_1(btRigidBody* self, btVector3* arg0) {
  self->applyCentralImpulse(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_updateInertiaTensor_0(btRigidBody* self) {
  self->updateInertiaTensor();
}

const btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_getLinearVelocity_0(btRigidBody* self) {
  return &self->getLinearVelocity();
}

const btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_getAngularVelocity_0(btRigidBody* self) {
  return &self->getAngularVelocity();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setLinearVelocity_1(btRigidBody* self, btVector3* arg0) {
  self->setLinearVelocity(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setAngularVelocity_1(btRigidBody* self, btVector3* arg0) {
  self->setAngularVelocity(*arg0);
}

btMotionState* EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_getMotionState_0(btRigidBody* self) {
  return self->getMotionState();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setMotionState_1(btRigidBody* self, btMotionState* arg0) {
  self->setMotionState(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setAngularFactor_1(btRigidBody* self, btVector3* arg0) {
  self->setAngularFactor(*arg0);
}

btRigidBody* EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_upcast_1(btRigidBody* self, btCollisionObject* arg0) {
  return self->upcast(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setAnisotropicFriction_2(btRigidBody* self, btVector3* arg0, int arg1) {
  self->setAnisotropicFriction(*arg0, arg1);
}

btCollisionShape* EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_getCollisionShape_0(btRigidBody* self) {
  return self->getCollisionShape();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setContactProcessingThreshold_1(btRigidBody* self, float arg0) {
  self->setContactProcessingThreshold(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setActivationState_1(btRigidBody* self, int arg0) {
  self->setActivationState(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_forceActivationState_1(btRigidBody* self, int arg0) {
  self->forceActivationState(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_activate_0(btRigidBody* self) {
  self->activate();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_activate_1(btRigidBody* self, bool arg0) {
  self->activate(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_isActive_0(btRigidBody* self) {
  return self->isActive();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_isKinematicObject_0(btRigidBody* self) {
  return self->isKinematicObject();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setRestitution_1(btRigidBody* self, float arg0) {
  self->setRestitution(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setFriction_1(btRigidBody* self, float arg0) {
  self->setFriction(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setRollingFriction_1(btRigidBody* self, float arg0) {
  self->setRollingFriction(arg0);
}

btTransform* EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_getWorldTransform_0(btRigidBody* self) {
  return &self->getWorldTransform();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_getCollisionFlags_0(btRigidBody* self) {
  return self->getCollisionFlags();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setCollisionFlags_1(btRigidBody* self, int arg0) {
  self->setCollisionFlags(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setWorldTransform_1(btRigidBody* self, btTransform* arg0) {
  self->setWorldTransform(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setCollisionShape_1(btRigidBody* self, btCollisionShape* arg0) {
  self->setCollisionShape(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setCcdMotionThreshold_1(btRigidBody* self, float arg0) {
  self->setCcdMotionThreshold(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody_setCcdSweptSphereRadius_1(btRigidBody* self, float arg0) {
  self->setCcdSweptSphereRadius(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRigidBody___destroy___0(btRigidBody* self) {
  delete self;
}

// btCylinderShapeX

btCylinderShapeX* EMSCRIPTEN_KEEPALIVE emscripten_bind_btCylinderShapeX_btCylinderShapeX_1(btVector3* arg0) {
  return new btCylinderShapeX(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCylinderShapeX_setMargin_1(btCylinderShapeX* self, float arg0) {
  self->setMargin(arg0);
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btCylinderShapeX_getMargin_0(btCylinderShapeX* self) {
  return self->getMargin();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCylinderShapeX_setLocalScaling_1(btCylinderShapeX* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCylinderShapeX_calculateLocalInertia_2(btCylinderShapeX* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCylinderShapeX___destroy___0(btCylinderShapeX* self) {
  delete self;
}

// btCylinderShapeZ

btCylinderShapeZ* EMSCRIPTEN_KEEPALIVE emscripten_bind_btCylinderShapeZ_btCylinderShapeZ_1(btVector3* arg0) {
  return new btCylinderShapeZ(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCylinderShapeZ_setMargin_1(btCylinderShapeZ* self, float arg0) {
  self->setMargin(arg0);
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_btCylinderShapeZ_getMargin_0(btCylinderShapeZ* self) {
  return self->getMargin();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCylinderShapeZ_setLocalScaling_1(btCylinderShapeZ* self, btVector3* arg0) {
  self->setLocalScaling(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCylinderShapeZ_calculateLocalInertia_2(btCylinderShapeZ* self, float arg0, btVector3* arg1) {
  self->calculateLocalInertia(arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btCylinderShapeZ___destroy___0(btCylinderShapeZ* self) {
  delete self;
}

// btTransform

btTransform* EMSCRIPTEN_KEEPALIVE emscripten_bind_btTransform_btTransform_0() {
  return new btTransform();
}

btTransform* EMSCRIPTEN_KEEPALIVE emscripten_bind_btTransform_btTransform_2(btQuaternion* arg0, btVector3* arg1) {
  return new btTransform(*arg0, *arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btTransform_setIdentity_0(btTransform* self) {
  self->setIdentity();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btTransform_setOrigin_1(btTransform* self, btVector3* arg0) {
  self->setOrigin(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btTransform_setRotation_1(btTransform* self, btQuaternion* arg0) {
  self->setRotation(*arg0);
}

btVector3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btTransform_getOrigin_0(btTransform* self) {
  return &self->getOrigin();
}

btQuaternion* EMSCRIPTEN_KEEPALIVE emscripten_bind_btTransform_getRotation_0(btTransform* self) {
  static btQuaternion temp;
  return (temp = self->getRotation(), &temp);
}

btMatrix3x3* EMSCRIPTEN_KEEPALIVE emscripten_bind_btTransform_getBasis_0(btTransform* self) {
  return &self->getBasis();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btTransform___destroy___0(btTransform* self) {
  delete self;
}

// btRaycastVehicle

btRaycastVehicle* EMSCRIPTEN_KEEPALIVE emscripten_bind_btRaycastVehicle_btRaycastVehicle_3(btRaycastVehicle::btVehicleTuning* arg0, btRigidBody* arg1, btVehicleRaycaster* arg2) {
  return new btRaycastVehicle(*arg0, arg1, arg2);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRaycastVehicle_applyEngineForce_2(btRaycastVehicle* self, float arg0, int arg1) {
  self->applyEngineForce(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRaycastVehicle_setSteeringValue_2(btRaycastVehicle* self, float arg0, int arg1) {
  self->setSteeringValue(arg0, arg1);
}

const btTransform* EMSCRIPTEN_KEEPALIVE emscripten_bind_btRaycastVehicle_getWheelTransformWS_1(btRaycastVehicle* self, int arg0) {
  return &self->getWheelTransformWS(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRaycastVehicle_updateWheelTransform_2(btRaycastVehicle* self, int arg0, bool arg1) {
  self->updateWheelTransform(arg0, arg1);
}

btWheelInfo* EMSCRIPTEN_KEEPALIVE emscripten_bind_btRaycastVehicle_addWheel_7(btRaycastVehicle* self, btVector3* arg0, btVector3* arg1, btVector3* arg2, float arg3, float arg4, btRaycastVehicle::btVehicleTuning* arg5, bool arg6) {
  return &self->addWheel(*arg0, *arg1, *arg2, arg3, arg4, *arg5, arg6);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_btRaycastVehicle_getNumWheels_0(btRaycastVehicle* self) {
  return self->getNumWheels();
}

btRigidBody* EMSCRIPTEN_KEEPALIVE emscripten_bind_btRaycastVehicle_getRigidBody_0(btRaycastVehicle* self) {
  return self->getRigidBody();
}

btWheelInfo* EMSCRIPTEN_KEEPALIVE emscripten_bind_btRaycastVehicle_getWheelInfo_1(btRaycastVehicle* self, int arg0) {
  return &self->getWheelInfo(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRaycastVehicle_setBrake_2(btRaycastVehicle* self, float arg0, int arg1) {
  self->setBrake(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRaycastVehicle_setCoordinateSystem_3(btRaycastVehicle* self, int arg0, int arg1, int arg2) {
  self->setCoordinateSystem(arg0, arg1, arg2);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btRaycastVehicle___destroy___0(btRaycastVehicle* self) {
  delete self;
}

// btGhostPairCallback

btGhostPairCallback* EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostPairCallback_btGhostPairCallback_0() {
  return new btGhostPairCallback();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_btGhostPairCallback___destroy___0(btGhostPairCallback* self) {
  delete self;
}

}

