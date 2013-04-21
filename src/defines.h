#ifdef DEBUG
# ifdef ANDROID
#  include <android/log.h>
#  define DEBUG_TAG "ndk_main"
#  define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, DEBUG_TAG, __VA_ARGS__)
# else
#  define LOGV(...) fprintf(stderr, __VA_ARGS__)
# endif
#else
# define LOGV(...)
#endif
