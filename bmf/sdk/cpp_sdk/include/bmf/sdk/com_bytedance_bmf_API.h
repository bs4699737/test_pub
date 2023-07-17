/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_bytedance_bmf_API */

#ifndef _Included_com_bytedance_bmf_API
#define _Included_com_bytedance_bmf_API
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1free(JNIEnv *,
                                                                jclass, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_from_image
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_bmf_API_bmf_1vf_1from_1image(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_from_frame
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_bmf_API_bmf_1vf_1from_1frame(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_make_image
 * Signature: (IIIIILjava/lang/String;Z)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1make_1image(
    JNIEnv *, jclass, jint, jint, jint, jint, jint, jstring, jboolean);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_make_frame
 * Signature: (IIJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1make_1frame(
    JNIEnv *, jclass, jint, jint, jlong, jstring);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_defined
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1defined(JNIEnv *,
                                                                       jclass,
                                                                       jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_width
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1width(JNIEnv *,
                                                                 jclass, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_height
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1height(JNIEnv *,
                                                                  jclass,
                                                                  jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_dtype
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1dtype(JNIEnv *,
                                                                 jclass, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_is_image
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL
Java_com_bytedance_bmf_API_bmf_1vf_1is_1image(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_image
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1image(JNIEnv *,
                                                                  jclass,
                                                                  jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_frame
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1frame(JNIEnv *,
                                                                  jclass,
                                                                  jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_to_image
 * Signature: (JIZ)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1to_1image(
    JNIEnv *, jclass, jlong, jint, jboolean);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_to_frame
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1to_1frame(JNIEnv *,
                                                                      jclass,
                                                                      jlong,
                                                                      jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_device_type
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_bytedance_bmf_API_bmf_1vf_1device_1type(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_device_index
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_bytedance_bmf_API_bmf_1vf_1device_1index(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_copy_from
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1copy_1from(JNIEnv *,
                                                                      jclass,
                                                                      jlong,
                                                                      jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_to_device
 * Signature: (JLjava/lang/String;Z)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1to_1device(
    JNIEnv *, jclass, jlong, jstring, jboolean);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_to_dtype
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1to_1dtype(JNIEnv *,
                                                                      jclass,
                                                                      jlong,
                                                                      jint);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_copy_props
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1copy_1props(JNIEnv *,
                                                                       jclass,
                                                                       jlong,
                                                                       jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_private_merge
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1private_1merge(
    JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_private_get_json_param
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_bmf_API_bmf_1vf_1private_1get_1json_1param(JNIEnv *, jclass,
                                                              jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_json_param_dump
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_com_bytedance_bmf_API_bmf_1json_1param_1dump(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_json_param_parse
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_bmf_API_bmf_1json_1param_1parse(JNIEnv *, jclass, jstring);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_private_attach_json_param
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL
Java_com_bytedance_bmf_API_bmf_1vf_1private_1attach_1json_1param(JNIEnv *,
                                                                 jclass, jlong,
                                                                 jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_set_pts
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1set_1pts(JNIEnv *,
                                                                    jclass,
                                                                    jlong,
                                                                    jint);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_pts
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1pts(JNIEnv *, jclass,
                                                               jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_set_time_base
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1set_1time_1base(
    JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_time_base
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_com_bytedance_bmf_API_bmf_1vf_1time_1base(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_ready
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1ready(JNIEnv *,
                                                                     jclass,
                                                                     jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_record
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1record(JNIEnv *,
                                                                  jclass, jlong,
                                                                  jboolean);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_vf_synchronize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_bmf_API_bmf_1vf_1synchronize(JNIEnv *,
                                                                       jclass,
                                                                       jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_packet_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_bmf_API_bmf_1packet_1free(JNIEnv *,
                                                                    jclass,
                                                                    jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_packet_generate_eos_packet
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_bmf_API_bmf_1packet_1generate_1eos_1packet(JNIEnv *, jclass);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_packet_generate_eof_packet
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_bmf_API_bmf_1packet_1generate_1eof_1packet(JNIEnv *, jclass);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_packet_timestamp
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_bmf_API_bmf_1packet_1timestamp(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_packet_set_timestamp
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_bmf_API_bmf_1packet_1set_1timestamp(
    JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_packet_defined
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_bmf_API_bmf_1packet_1defined(JNIEnv *,
                                                                       jclass,
                                                                       jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_packet_from_videoframe
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_bmf_API_bmf_1packet_1from_1videoframe(JNIEnv *, jclass,
                                                         jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_packet_get_videoframe
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_bmf_API_bmf_1packet_1get_1videoframe(
    JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_packet_is_videoframe
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_bytedance_bmf_API_bmf_1packet_1is_1videoframe(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_packet_from_json_param
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_bmf_API_bmf_1packet_1from_1json_1param(JNIEnv *, jclass,
                                                          jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_packet_get_json_param
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_bmf_API_bmf_1packet_1get_1json_1param(JNIEnv *, jclass,
                                                         jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_packet_is_json_param
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_bmf_API_bmf_1packet_1is_1json_1param(
    JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_task_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_bmf_API_bmf_1task_1free(JNIEnv *,
                                                                  jclass,
                                                                  jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_task_make
 * Signature: (I[I[I)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_bmf_API_bmf_1task_1make(JNIEnv *,
                                                                   jclass, jint,
                                                                   jintArray,
                                                                   jintArray);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_task_fill_input_packet
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL
Java_com_bytedance_bmf_API_bmf_1task_1fill_1input_1packet(JNIEnv *, jclass,
                                                          jlong, jint, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_task_fill_output_packet
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL
Java_com_bytedance_bmf_API_bmf_1task_1fill_1output_1packet(JNIEnv *, jclass,
                                                           jlong, jint, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_task_pop_packet_from_out_queue
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_bmf_API_bmf_1task_1pop_1packet_1from_1out_1queue(JNIEnv *,
                                                                    jclass,
                                                                    jlong,
                                                                    jint);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_task_pop_packet_from_input_queue
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_bmf_API_bmf_1task_1pop_1packet_1from_1input_1queue(JNIEnv *,
                                                                      jclass,
                                                                      jlong,
                                                                      jint);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_task_timestamp
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_bmf_API_bmf_1task_1timestamp(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_task_set_timestamp
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_bmf_API_bmf_1task_1set_1timestamp(
    JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_task_get_input_stream_ids
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL
Java_com_bytedance_bmf_API_bmf_1task_1get_1input_1stream_1ids(JNIEnv *, jclass,
                                                              jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_task_get_output_stream_ids
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL
Java_com_bytedance_bmf_API_bmf_1task_1get_1output_1stream_1ids(JNIEnv *, jclass,
                                                               jlong);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_module_functor_make
 * Signature:
 * (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;III)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_bmf_API_bmf_1module_1functor_1make(
    JNIEnv *, jclass, jstring, jstring, jstring, jstring, jstring, jint, jint,
    jint);

/*
 * Class:     com_bytedance_bmf_API
 * Method:    bmf_module_functor_call
 * Signature: (J[JI)[J
 */
JNIEXPORT jlongArray JNICALL
Java_com_bytedance_bmf_API_bmf_1module_1functor_1call(JNIEnv *, jclass, jlong,
                                                      jlongArray, jint);

#ifdef __cplusplus
}
#endif
#endif
