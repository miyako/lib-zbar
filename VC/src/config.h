#ifndef _ZBAR_CONFIG_H_
#define _ZBAR_CONFIG_H_

#define ZBAR_VERSION_MAJOR 0
#define ZBAR_VERSION_MINOR 10

#define ENABLE_EAN 1
#define ENABLE_I25 1
#define ENABLE_DATABAR 1
#define ENABLE_CODABAR 1
#define ENABLE_CODE39 1
#define ENABLE_CODE93 1
#define ENABLE_CODE128 1
#define ENABLE_PDF417 1
#define ENABLE_QRCODE 1
#define ENABLE_EAN 1
#define ENABLE_I25 1
#define ENABLE_DATABAR 1
#define ENABLE_CODABAR 1
#define ENABLE_CODE39 1
#define ENABLE_CODE93 1
#define ENABLE_CODE128 1
#define ENABLE_PDF417 1
#define ENABLE_QRCODE 1

#ifdef WIN32
#define HAVE_ERRNO_H
#define PRIx32 "PRIx32"
//#define snprintf _snprintf
#define inline __inline
typedef __int32 int32_t;
typedef unsigned __int32 uint32_t;
typedef __int16 int16_t;
typedef unsigned __int16 uint16_t;
typedef __int8 int8_t;
typedef unsigned __int8 uint8_t;
#else
#define HAVE_ERRNO_H
#define HAVE_INTTYPES_H
#define HAVE_SYS_TIME_H
#define HAVE_UNISTD_H
#endif

#endif
