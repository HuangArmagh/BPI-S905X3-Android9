LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := libam_ver
ifeq ($(BOARD_COMPILE_IN_SYSTEM), true)
    LOCAL_VENDOR_MODULE := false
else
    LOCAL_VENDOR_MODULE := true
endif
LOCAL_MODULE_TAGS := optional
LOCAL_SRC_FILES := am_ver.c

LOCAL_ARM_MODE := arm
LOCAL_C_INCLUDES := $(LOCAL_PATH)/../include/am_ver

LOCAL_SHARED_LIBRARIES+=libcutils liblog libc

LOCAL_PRELINK_MODULE := false

ifeq ($(strip $(BOARD_DVB_NO_VERSION)),)
    $(shell cd $(LOCAL_PATH);touch am_ver.c)
    LIBDVB_GIT_VERSION="f76cf85efd2c4fd462ed85ace3ebfed2ad54fc38"
    LIBDVB_GIT_UNCOMMIT_FILE_NUM=0
    LIBDVB_GIT_BRANCH="* (no branch)"
    LIBDVB_LAST_CHANGED="Date:   Thu May 7 17:37:29 2020 +0800"
    LIBDVB_BUILD_TIME=" $(shell date)"
    LIBDVB_BUILD_NAME=" $(shell echo ${LOGNAME})"

    LOCAL_CFLAGS+=-DHAVE_VERSION_INFO
    LOCAL_CFLAGS+=-DLIBDVB_GIT_VERSION=\"${LIBDVB_GIT_VERSION}${LIBDVB_GIT_DIRTY}\"
    LOCAL_CFLAGS+=-DLIBDVB_GIT_UNCOMMIT_FILE_NUM=${LIBDVB_GIT_UNCOMMIT_FILE_NUM}
    LOCAL_CFLAGS+=-DLIBDVB_GIT_BRANCH=\"${LIBDVB_GIT_BRANCH}\"
    LOCAL_CFLAGS+=-DLIBDVB_LAST_CHANGED=\"${LIBDVB_LAST_CHANGED}\"
    LOCAL_CFLAGS+=-DLIBDVB_BUILD_TIME=\"${LIBDVB_BUILD_TIME}\"
    LOCAL_CFLAGS+=-DLIBDVB_BUILD_NAME=\"${LIBDVB_BUILD_NAME}\"
endif

ifeq ($(BOARD_COMPILE_IN_SYSTEM), true)
    LOCAL_PROPRIETARY_MODULE := false
else
    LOCAL_PROPRIETARY_MODULE := true
endif

#LOCAL_32_BIT_ONLY := true

include $(BUILD_SHARED_LIBRARY)
