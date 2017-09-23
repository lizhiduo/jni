LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_LDLIBS := -llog             #链接log库
#LOCAL_SHARED_LIBRARIES := mylib  #第三方so

LOCAL_MODULE := Hello          #生产的so名字
LOCAL_SRC_FILES := Hello.cpp   #源码

include $(BUILD_SHARED_LIBRARY)