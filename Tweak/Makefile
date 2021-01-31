GO_EASY_ON_ME = 1

TWEAK_NAME = Copypasta
$(TWEAK_NAME)_FILES = Tweak.x CPAItem.m CPALabel.m CPAManager.m CPAObserver.m CPAView.m
$(TWEAK_NAME)_CFLAGS = -fobjc-arc
$(TWEAK_NAME)_FRAMEWORKS = UIKit
$(TWEAK_NAME)_EXTRA_FRAMEWORKS = Cephei
$(TWEAK_NAME)_LIBRARIES = applist gcuniversal
ADDITIONAL_CFLAGS += -DTHEOS_LEAN_AND_MEAN

include $(THEOS)/makefiles/common.mk
include $(THEOS_MAKE_PATH)/tweak.mk