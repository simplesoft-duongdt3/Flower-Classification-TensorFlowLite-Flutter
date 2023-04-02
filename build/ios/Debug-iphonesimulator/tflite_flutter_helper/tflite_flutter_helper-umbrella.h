#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "TfliteFlutterHelperPlugin.h"

FOUNDATION_EXPORT double tflite_flutter_helperVersionNumber;
FOUNDATION_EXPORT const unsigned char tflite_flutter_helperVersionString[];

