/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_nodes_Node */

#ifndef _Included_com_wiyun_engine_nodes_Node
#define _Included_com_wiyun_engine_nodes_Node
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_nativeInit
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeAutoRelease
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_nativeAutoRelease
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeGetAbsolutePosition
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_nativeGetAbsolutePosition
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeGetFirstChild
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_Node_nativeGetFirstChild
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    addChild
 * Signature: (Lcom/wiyun/engine/nodes/Node;II)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_addChild
  (JNIEnv *, jobject, jobject, jint, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    cleanup
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_cleanup
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeConvertToWorldSpace
 * Signature: (FFLcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_nativeConvertToWorldSpace
  (JNIEnv *, jobject, jfloat, jfloat, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeConvertToWorldSpaceAR
 * Signature: (FFLcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_nativeConvertToWorldSpaceAR
  (JNIEnv *, jobject, jfloat, jfloat, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeConvertToNodeSpace
 * Signature: (FFLcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_nativeConvertToNodeSpace
  (JNIEnv *, jobject, jfloat, jfloat, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeConvertToNodeSpaceAR
 * Signature: (FFLcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_nativeConvertToNodeSpaceAR
  (JNIEnv *, jobject, jfloat, jfloat, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    removeChildren
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_removeChildren
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setJavaVirtualMethods
 * Signature: (Lcom/wiyun/engine/nodes/INodeVirtualMethods;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setJavaVirtualMethods
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setEnabled
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setEnabled
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    isEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_Node_isEnabled
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    isSelected
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_Node_isSelected
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setSelected
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setSelected
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    isFocused
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_Node_isFocused
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setFocused
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setFocused
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getAnchorX
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getAnchorX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getAnchorY
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getAnchorY
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    isNoDraw
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_Node_isNoDraw
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setNoDraw
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setNoDraw
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    hitTest
 * Signature: (FF)Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_Node_hitTest
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeGetBoundingBox
 * Signature: (Lcom/wiyun/engine/types/WYRect;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_nativeGetBoundingBox
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeGetBoundingBoxRelativeToParent
 * Signature: (Lcom/wiyun/engine/types/WYRect;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_nativeGetBoundingBoxRelativeToParent
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeGetBoundingBoxRelativeToWorld
 * Signature: (Lcom/wiyun/engine/types/WYRect;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_nativeGetBoundingBoxRelativeToWorld
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeGetCamera
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_Node_nativeGetCamera
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getChildrenPointer
 * Signature: (I)[I
 */
JNIEXPORT jintArray JNICALL Java_com_wiyun_engine_nodes_Node_getChildrenPointer
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getChildPointer
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_Node_getChildPointer
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getChildPointerAt
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_Node_getChildPointerAt
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getChildCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_Node_getChildCount
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeGetChildren
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_nativeGetChildren
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeGetGrid
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_Node_nativeGetGrid
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getHeight
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getHeight
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getWidth
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getWidth
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeGetParent
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_Node_nativeGetParent
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getPositionX
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getPositionX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getPositionY
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getPositionY
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getOriginX
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getOriginX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getOriginY
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getOriginY
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getRotation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getRotation
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getScaleX
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getScaleX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getScaleY
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getScaleY
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getTag
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_Node_getTag
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setTag
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setTag
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getAnchorPointX
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getAnchorPointX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getAnchorPointY
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getAnchorPointY
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getUserData
 * Signature: ()Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_wiyun_engine_nodes_Node_getUserData
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getZOrder
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_Node_getZOrder
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setZOrder
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setZOrder
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    isRunning
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_Node_isRunning
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    isVisible
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_Node_isVisible
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setVisible
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setVisible
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    onEnter
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_onEnter
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    onEnterTransitionDidFinish
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_onEnterTransitionDidFinish
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    onExit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_onExit
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    removeAllChildren
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_removeAllChildren
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    removeChild
 * Signature: (Lcom/wiyun/engine/nodes/Node;Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_removeChild__Lcom_wiyun_engine_nodes_Node_2Z
  (JNIEnv *, jobject, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    removeChild
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_removeChild__IZ
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    reorderChild
 * Signature: (Lcom/wiyun/engine/nodes/Node;I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_reorderChild
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    bringToFront
 * Signature: (Lcom/wiyun/engine/nodes/Node;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_bringToFront
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    bringToBack
 * Signature: (Lcom/wiyun/engine/nodes/Node;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_bringToBack
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    runAction
 * Signature: (Lcom/wiyun/engine/actions/Action;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_runAction
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getScale
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getScale
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    scale
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_scale
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    scheduleByFrame
 * Signature: (Lcom/wiyun/engine/utils/TargetSelector;I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_scheduleByFrame
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    schedule
 * Signature: (Lcom/wiyun/engine/utils/TargetSelector;F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_schedule
  (JNIEnv *, jobject, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    scheduleOnce
 * Signature: (Lcom/wiyun/engine/utils/TargetSelector;F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_scheduleOnce
  (JNIEnv *, jobject, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    scheduleOnceByFrame
 * Signature: (Lcom/wiyun/engine/utils/TargetSelector;I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_scheduleOnceByFrame
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    unschedule
 * Signature: (Lcom/wiyun/engine/utils/TargetSelector;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_unschedule
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setAnchor
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setAnchor
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setAnchorX
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setAnchorX
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setAnchorY
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setAnchorY
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    moveAnchorTo
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_moveAnchorTo
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setContentSize
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setContentSize
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setTransformDirty
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setTransformDirty
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setGrid
 * Signature: (Lcom/wiyun/engine/grid/BaseGrid;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setGrid
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setParent
 * Signature: (Lcom/wiyun/engine/nodes/Node;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setParent
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setPosition
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setPosition
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    translate
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_translate
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    translateChildren
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_translateChildren
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setRelativeAnchorPoint
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setRelativeAnchorPoint
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    isRelativeToAnchor
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_Node_isRelativeToAnchor
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setRotation
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setRotation
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setScale
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setScale
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setScaleX
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setScaleX
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setScaleY
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setScaleY
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setSkewX
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setSkewX
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setSkewY
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setSkewY
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getSkewX
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getSkewX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getSkewY
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getSkewY
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setUserData
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setUserData
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getVertexZ
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getVertexZ
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setVertexZ
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setVertexZ
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    stopAction
 * Signature: (Lcom/wiyun/engine/actions/Action;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_stopAction__Lcom_wiyun_engine_actions_Action_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    stopAction
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_stopAction__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    stopAllActions
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_stopAllActions__
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getActionPointer
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_Node_getActionPointer
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    stopAllActions
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_stopAllActions__Z
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    pauseAllActions
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_pauseAllActions__
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    pauseAllActions
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_pauseAllActions__Z
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    pauseAction
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_pauseAction
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    resumeAction
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_resumeAction
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    resumeAllActions
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_resumeAllActions__
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    resumeAllActions
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_resumeAllActions__Z
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    pauseAllTimers
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_pauseAllTimers__
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    pauseAllTimers
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_pauseAllTimers__Z
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    resumeAllTimers
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_resumeAllTimers__
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    resumeAllTimers
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_resumeAllTimers__Z
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    transform
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_transform
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    transformAncestors
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_transformAncestors
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    isGestureEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_Node_isGestureEnabled
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setGestureEnabled
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setGestureEnabled
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    isDoubleTapEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_Node_isDoubleTapEnabled
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setDoubleTapEnabled
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setDoubleTapEnabled
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    isTouchEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_Node_isTouchEnabled
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setTouchEnabled
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setTouchEnabled
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setKeyEnabled
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setKeyEnabled
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    isKeyEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_Node_isKeyEnabled
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    isAccelerometerEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_Node_isAccelerometerEnabled
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setAccelerometerEnabled
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setAccelerometerEnabled
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setTouchPriority
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setTouchPriority
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setKeyPriority
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setKeyPriority
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setGesturePriority
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setGesturePriority
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setDoubleTapPriority
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setDoubleTapPriority
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setAccelerometerPriority
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setAccelerometerPriority
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getTouchPriority
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_Node_getTouchPriority
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getKeyPriority
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_Node_getKeyPriority
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getGesturePriority
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_Node_getGesturePriority
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getDoubleTapPriority
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_Node_getDoubleTapPriority
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getAccelerometerPriority
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_Node_getAccelerometerPriority
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setVelocity
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setVelocity
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setAcceleration
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setAcceleration
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setAccelerationX
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setAccelerationX
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setAccelerationY
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setAccelerationY
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setVelocityX
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setVelocityX
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setVelocityY
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setVelocityY
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getVelocityX
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getVelocityX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getVelocityY
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getVelocityY
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeGetVelocity
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_nativeGetVelocity
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getAccelerationX
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getAccelerationX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getAccelerationY
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_Node_getAccelerationY
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeGetAcceleration
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_nativeGetAcceleration
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setPositionListener
 * Signature: (Lcom/wiyun/engine/nodes/Node/IPositionListener;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setPositionListener
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setClipRect
 * Signature: (Lcom/wiyun/engine/types/WYRect;Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setClipRect
  (JNIEnv *, jobject, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    clearClipRect
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_clearClipRect
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeGetClipRect
 * Signature: (Lcom/wiyun/engine/types/WYRect;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_nativeGetClipRect
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    sizeToFit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_sizeToFit
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    enlargeNode
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_enlargeNode
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    isAncestor
 * Signature: (Lcom/wiyun/engine/nodes/Node;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_Node_isAncestor
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setInterceptTouch
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setInterceptTouch
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setMultiTouchClickable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setMultiTouchClickable
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    isMultiTouchClickable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_Node_isMultiTouchClickable
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    getAlpha
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_Node_getAlpha
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setAlpha
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setAlpha
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeGetColor
 * Signature: (Lcom/wiyun/engine/types/WYColor3B;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_nativeGetColor
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setColor
 * Signature: (Lcom/wiyun/engine/types/WYColor3B;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setColor__Lcom_wiyun_engine_types_WYColor3B_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setColor
 * Signature: (Lcom/wiyun/engine/types/WYColor4B;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setColor__Lcom_wiyun_engine_types_WYColor4B_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    isDither
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_Node_isDither
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setDither
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setDither
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeGetBlendMode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_Node_nativeGetBlendMode
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeSetBlendMode
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_nativeSetBlendMode
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    nativeGetTexture
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_Node_nativeGetTexture
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_Node
 * Method:    setTexture
 * Signature: (Lcom/wiyun/engine/opengl/Texture2D;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_Node_setTexture
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
