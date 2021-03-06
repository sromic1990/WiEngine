#include "com_wiyun_engine_transitions_ZoomFlipYTransition.h"
#include "wyZoomFlipYTransition.h"

extern jfieldID g_fid_BaseObject_mPointer;

JNIEXPORT void JNICALL Java_com_wiyun_engine_transitions_ZoomFlipYTransition_nativeInit
  (JNIEnv * env, jobject thiz, jfloat duration, jobject inScene, jboolean toTop, jfloat scale) {
	wyScene* in = inScene == NULL ? NULL : (wyScene*)env->GetIntField(inScene, g_fid_BaseObject_mPointer);
	wyZoomFlipYTransition* trans = WYNEW wyZoomFlipYTransition(duration, in, toTop, scale);
	env->SetIntField(thiz, g_fid_BaseObject_mPointer, (jint)trans);
	wyObjectLazyRelease(trans);
}
