/*
 * Copyright 2023 Babit Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_bytedance_hmp_Api */

#ifndef _Included_com_bytedance_hmp_Api
#define _Included_com_bytedance_hmp_Api
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_bytedance_hmp_Api
 * Method:    scalar
 * Signature: (D)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_scalar__D(JNIEnv *, jclass,
                                                             jdouble);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    scalar
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_scalar__J(JNIEnv *, jclass,
                                                             jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    scalar
 * Signature: (Z)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_scalar__Z(JNIEnv *, jclass,
                                                             jboolean);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    scalar_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_hmp_Api_scalar_1free(JNIEnv *, jclass,
                                                               jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    device_count
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_device_1count(JNIEnv *,
                                                                jclass, jint);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    device_make
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_hmp_Api_device_1make__Ljava_lang_String_2(JNIEnv *, jclass,
                                                             jstring);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    device_make
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_device_1make__II(JNIEnv *,
                                                                    jclass,
                                                                    jint, jint);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    device_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_hmp_Api_device_1free(JNIEnv *, jclass,
                                                               jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    device_type
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_device_1type(JNIEnv *, jclass,
                                                               jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    device_index
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_device_1index(JNIEnv *,
                                                                jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    device_stringfy
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_bytedance_hmp_Api_device_1stringfy(JNIEnv *,
                                                                      jclass,
                                                                      jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    device_guard_make
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_device_1guard_1make(JNIEnv *,
                                                                       jclass,
                                                                       jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    device_guard_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_hmp_Api_device_1guard_1free(JNIEnv *,
                                                                      jclass,
                                                                      jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    stream_make
 * Signature: (IJ)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_stream_1make(JNIEnv *,
                                                                jclass, jint,
                                                                jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    stream_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_hmp_Api_stream_1free(JNIEnv *, jclass,
                                                               jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    stream_query
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_bytedance_hmp_Api_stream_1query(JNIEnv *,
                                                                    jclass,
                                                                    jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    stream_synchronize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_hmp_Api_stream_1synchronize(JNIEnv *,
                                                                      jclass,
                                                                      jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    stream_handle
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_stream_1handle(JNIEnv *,
                                                                  jclass,
                                                                  jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    stream_device_type
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_stream_1device_1type(JNIEnv *,
                                                                       jclass,
                                                                       jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    stream_device_index
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_bytedance_hmp_Api_stream_1device_1index(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    stream_set_current
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_hmp_Api_stream_1set_1current(JNIEnv *,
                                                                       jclass,
                                                                       jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    stream_current
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_stream_1current(JNIEnv *,
                                                                   jclass,
                                                                   jint);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    stream_guard_create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_hmp_Api_stream_1guard_1create(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    stream_guard_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_hmp_Api_stream_1guard_1free(JNIEnv *,
                                                                      jclass,
                                                                      jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_empty
 * Signature: ([JILjava/lang/String;Z)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1empty(
    JNIEnv *, jclass, jlongArray, jint, jstring, jboolean);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_arange
 * Signature: (JJJILjava/lang/String;Z)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1arange(
    JNIEnv *, jclass, jlong, jlong, jlong, jint, jstring, jboolean);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_hmp_Api_tensor_1free(JNIEnv *, jclass,
                                                               jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_stringfy
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_bytedance_hmp_Api_tensor_1stringfy(JNIEnv *,
                                                                      jclass,
                                                                      jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_fill
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_hmp_Api_tensor_1fill(JNIEnv *, jclass,
                                                               jlong, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_defined
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_bytedance_hmp_Api_tensor_1defined(JNIEnv *,
                                                                      jclass,
                                                                      jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_dim
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1dim(JNIEnv *, jclass,
                                                               jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_size
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1size(JNIEnv *,
                                                                jclass, jlong,
                                                                jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_stride
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1stride(JNIEnv *,
                                                                  jclass, jlong,
                                                                  jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_nitems
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1nitems(JNIEnv *,
                                                                  jclass,
                                                                  jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_itemsize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1itemsize(JNIEnv *,
                                                                    jclass,
                                                                    jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_nbytes
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1nbytes(JNIEnv *,
                                                                  jclass,
                                                                  jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_dtype
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_tensor_1dtype(JNIEnv *,
                                                                jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_is_contiguous
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL
Java_com_bytedance_hmp_Api_tensor_1is_1contiguous(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_device_type
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_tensor_1device_1type(JNIEnv *,
                                                                       jclass,
                                                                       jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_device_index
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_bytedance_hmp_Api_tensor_1device_1index(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_data_ptr
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1data_1ptr(JNIEnv *,
                                                                     jclass,
                                                                     jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_clone
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1clone(JNIEnv *,
                                                                 jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_alias
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1alias(JNIEnv *,
                                                                 jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_view
 * Signature: (J[J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1view(JNIEnv *,
                                                                jclass, jlong,
                                                                jlongArray);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_reshape
 * Signature: (J[J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1reshape(JNIEnv *,
                                                                   jclass,
                                                                   jlong,
                                                                   jlongArray);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_slice
 * Signature: (JJJJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1slice(JNIEnv *,
                                                                 jclass, jlong,
                                                                 jlong, jlong,
                                                                 jlong, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_select
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1select(JNIEnv *,
                                                                  jclass, jlong,
                                                                  jlong, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_permute
 * Signature: (J[J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1permute(JNIEnv *,
                                                                   jclass,
                                                                   jlong,
                                                                   jlongArray);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_squeeze
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1squeeze(JNIEnv *,
                                                                   jclass,
                                                                   jlong,
                                                                   jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_unsqueeze
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1unsqueeze(JNIEnv *,
                                                                     jclass,
                                                                     jlong,
                                                                     jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_to_device
 * Signature: (JLjava/lang/String;Z)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1to_1device(
    JNIEnv *, jclass, jlong, jstring, jboolean);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_to_dtype
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1to_1dtype(JNIEnv *,
                                                                     jclass,
                                                                     jlong,
                                                                     jint);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_copy_from
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_hmp_Api_tensor_1copy_1from(JNIEnv *,
                                                                     jclass,
                                                                     jlong,
                                                                     jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_from_file
 * Signature: (Ljava/lang/String;IJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_tensor_1from_1file(
    JNIEnv *, jclass, jstring, jint, jlong, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    tensor_to_file
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_hmp_Api_tensor_1to_1file(JNIEnv *,
                                                                   jclass,
                                                                   jlong,
                                                                   jstring);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    color_model_make
 * Signature: (IIII)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_color_1model_1make(
    JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    color_model_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_hmp_Api_color_1model_1free(JNIEnv *,
                                                                     jclass,
                                                                     jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    color_model_space
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_color_1model_1space(JNIEnv *,
                                                                      jclass,
                                                                      jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    color_model_range
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_color_1model_1range(JNIEnv *,
                                                                      jclass,
                                                                      jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    color_model_primaries
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_bytedance_hmp_Api_color_1model_1primaries(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    color_model_ctc
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_color_1model_1ctc(JNIEnv *,
                                                                    jclass,
                                                                    jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_info_make
 * Signature: (IJ)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_hmp_Api_pixel_1info_1make__IJ(JNIEnv *, jclass, jint, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_info_make
 * Signature: (III)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_pixel_1info_1make__III(
    JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_info_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_hmp_Api_pixel_1info_1free(JNIEnv *,
                                                                    jclass,
                                                                    jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_info_format
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_pixel_1info_1format(JNIEnv *,
                                                                      jclass,
                                                                      jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_info_space
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_pixel_1info_1space(JNIEnv *,
                                                                     jclass,
                                                                     jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_info_range
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_pixel_1info_1range(JNIEnv *,
                                                                     jclass,
                                                                     jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_info_primaries
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_bytedance_hmp_Api_pixel_1info_1primaries(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_info_ctc
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_pixel_1info_1ctc(JNIEnv *,
                                                                   jclass,
                                                                   jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_info_infer_space
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_bytedance_hmp_Api_pixel_1info_1infer_1space(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_info_color_model
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_hmp_Api_pixel_1info_1color_1model(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_info_is_rgbx
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL
Java_com_bytedance_hmp_Api_pixel_1info_1is_1rgbx(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_info_stringfy
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_com_bytedance_hmp_Api_pixel_1info_1stringfy(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_format_desc_make
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_hmp_Api_pixel_1format_1desc_1make(JNIEnv *, jclass, jint);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_format_desc_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL
Java_com_bytedance_hmp_Api_pixel_1format_1desc_1free(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_format_desc_nplanes
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_pixel_1format_1desc_1nplanes(
    JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_format_desc_dtype
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_bytedance_hmp_Api_pixel_1format_1desc_1dtype(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_format_desc_format
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_bytedance_hmp_Api_pixel_1format_1desc_1format(JNIEnv *, jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_format_desc_channels
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_pixel_1format_1desc_1channels(
    JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_format_desc_infer_width
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL
Java_com_bytedance_hmp_Api_pixel_1format_1desc_1infer_1width(JNIEnv *, jclass,
                                                             jlong, jint, jint);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_format_desc_infer_height
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL
Java_com_bytedance_hmp_Api_pixel_1format_1desc_1infer_1height(JNIEnv *, jclass,
                                                              jlong, jint,
                                                              jint);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_format_desc_infer_nitems
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL
Java_com_bytedance_hmp_Api_pixel_1format_1desc_1infer_1nitems__JII(JNIEnv *,
                                                                   jclass,
                                                                   jlong, jint,
                                                                   jint);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    pixel_format_desc_infer_nitems
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL
Java_com_bytedance_hmp_Api_pixel_1format_1desc_1infer_1nitems__JIII(JNIEnv *,
                                                                    jclass,
                                                                    jlong, jint,
                                                                    jint, jint);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_make
 * Signature: (IIJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_hmp_Api_frame_1make__IIJLjava_lang_String_2(JNIEnv *, jclass,
                                                               jint, jint,
                                                               jlong, jstring);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_make
 * Signature: ([JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_frame_1make___3JJ(JNIEnv *,
                                                                     jclass,
                                                                     jlongArray,
                                                                     jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_make
 * Signature: ([JIIJ)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_frame_1make___3JIIJ(
    JNIEnv *, jclass, jlongArray, jint, jint, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_make
 * Signature: (Landroid/graphics/Bitmap;)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_hmp_Api_frame_1make__Landroid_graphics_Bitmap_2(JNIEnv *,
                                                                   jclass,
                                                                   jobject);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_hmp_Api_frame_1free(JNIEnv *, jclass,
                                                              jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_defined
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_bytedance_hmp_Api_frame_1defined(JNIEnv *,
                                                                     jclass,
                                                                     jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_pix_info
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_frame_1pix_1info(JNIEnv *,
                                                                    jclass,
                                                                    jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_format
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_frame_1format(JNIEnv *,
                                                                jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_width
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_frame_1width(JNIEnv *, jclass,
                                                               jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_height
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_frame_1height(JNIEnv *,
                                                                jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_dtype
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_frame_1dtype(JNIEnv *, jclass,
                                                               jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_device_type
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_frame_1device_1type(JNIEnv *,
                                                                      jclass,
                                                                      jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_device_index
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_frame_1device_1index(JNIEnv *,
                                                                       jclass,
                                                                       jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_nplanes
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_frame_1nplanes(JNIEnv *,
                                                                 jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_plane
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_frame_1plane(JNIEnv *,
                                                                jclass, jlong,
                                                                jint);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_to_device
 * Signature: (JLjava/lang/String;Z)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_frame_1to_1device(
    JNIEnv *, jclass, jlong, jstring, jboolean);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_copy_from
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_hmp_Api_frame_1copy_1from(JNIEnv *,
                                                                    jclass,
                                                                    jlong,
                                                                    jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_clone
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_frame_1clone(JNIEnv *,
                                                                jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_crop
 * Signature: (JIIII)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_frame_1crop(JNIEnv *, jclass,
                                                               jlong, jint,
                                                               jint, jint,
                                                               jint);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_to_image
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_frame_1to_1image(JNIEnv *,
                                                                    jclass,
                                                                    jlong,
                                                                    jint);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_from_image
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_frame_1from_1image(JNIEnv *,
                                                                      jclass,
                                                                      jlong,
                                                                      jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    frame_stringfy
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_bytedance_hmp_Api_frame_1stringfy(JNIEnv *,
                                                                     jclass,
                                                                     jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_make
 * Signature: (IIIIILjava/lang/String;Z)J
 */
JNIEXPORT jlong JNICALL
Java_com_bytedance_hmp_Api_image_1make__IIIIILjava_lang_String_2Z(
    JNIEnv *, jclass, jint, jint, jint, jint, jint, jstring, jboolean);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_make
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_image_1make__JI(JNIEnv *,
                                                                   jclass,
                                                                   jlong, jint);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_make
 * Signature: (JIJ)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_image_1make__JIJ(JNIEnv *,
                                                                    jclass,
                                                                    jlong, jint,
                                                                    jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_hmp_Api_image_1free(JNIEnv *, jclass,
                                                              jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_defined
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_bytedance_hmp_Api_image_1defined(JNIEnv *,
                                                                     jclass,
                                                                     jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_format
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_image_1format(JNIEnv *,
                                                                jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_set_color_model
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_hmp_Api_image_1set_1color_1model(
    JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_color_model
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_image_1color_1model(JNIEnv *,
                                                                       jclass,
                                                                       jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_wdim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_image_1wdim(JNIEnv *, jclass,
                                                              jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_hdim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_image_1hdim(JNIEnv *, jclass,
                                                              jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_cdim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_image_1cdim(JNIEnv *, jclass,
                                                              jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_width
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_image_1width(JNIEnv *, jclass,
                                                               jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_height
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_image_1height(JNIEnv *,
                                                                jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_nchannels
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_image_1nchannels(JNIEnv *,
                                                                   jclass,
                                                                   jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_dtype
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_image_1dtype(JNIEnv *, jclass,
                                                               jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_device_type
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_image_1device_1type(JNIEnv *,
                                                                      jclass,
                                                                      jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_device_index
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_bytedance_hmp_Api_image_1device_1index(JNIEnv *,
                                                                       jclass,
                                                                       jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_data
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_image_1data(JNIEnv *, jclass,
                                                               jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_to_device
 * Signature: (JLjava/lang/String;Z)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_image_1to_1device(
    JNIEnv *, jclass, jlong, jstring, jboolean);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_to_dtype
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_image_1to_1dtype(JNIEnv *,
                                                                    jclass,
                                                                    jlong,
                                                                    jint);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_copy_from
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_bytedance_hmp_Api_image_1copy_1from(JNIEnv *,
                                                                    jclass,
                                                                    jlong,
                                                                    jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_clone
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_image_1clone(JNIEnv *,
                                                                jclass, jlong);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_crop
 * Signature: (JIIII)J
 */
JNIEXPORT jlong JNICALL Java_com_bytedance_hmp_Api_image_1crop(JNIEnv *, jclass,
                                                               jlong, jint,
                                                               jint, jint,
                                                               jint);

/*
 * Class:     com_bytedance_hmp_Api
 * Method:    image_stringfy
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_bytedance_hmp_Api_image_1stringfy(JNIEnv *,
                                                                     jclass,
                                                                     jlong);

#ifdef __cplusplus
}
#endif
#endif
