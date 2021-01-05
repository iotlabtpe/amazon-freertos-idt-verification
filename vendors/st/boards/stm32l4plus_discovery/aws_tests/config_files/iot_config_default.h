/*
 * Copyright (C) 2018 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/* This file contains configuration settings for the demos. */

#ifndef IOT_CONFIG_H_
#define IOT_CONFIG_H_

/* Platform thread stack size and priority. */
#define IOT_THREAD_DEFAULT_STACK_SIZE    500  /* at least for aws_tests. Otherwise, 1500? */
#define IOT_THREAD_DEFAULT_PRIORITY      5

/* Include the common configuration file for FreeRTOS. */
#include "iot_config_common.h"

#if defined(MBEDTLS_SSL_MAX_CONTENT_LEN)                                                                                                                                 
#undef MBEDTLS_SSL_MAX_CONTENT_LEN                                                                                                                                       
#endif                                                                                                                                                                   
#define MBEDTLS_SSL_MAX_CONTENT_LEN             ( 1024 ) /**< Maximum fragment length in bytes, determines the size of each of the two internal I/O buffers. */      
                 
#define MAX_TLS_FRAME_SZIE 3000
#define SOCKETS_RX_BEST_EFFORT 	1

#endif /* ifndef IOT_CONFIG_H_ */
