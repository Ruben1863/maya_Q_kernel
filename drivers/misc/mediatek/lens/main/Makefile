#
# Copyright (C) 2015 MediaTek Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 2 as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#

#
# Makefile for misc devices that really don't fit anywhere else.
#

MTK_PLATFORM := $(subst ",,$(CONFIG_MTK_PLATFORM))
ARCH_MTK_PROJECT := $(subst ",,$(CONFIG_ARCH_MTK_PROJECT))

MTK_CUSTOM_PATH  := $(srctree)/drivers/misc/mediatek


subdir-ccflags-y += -I$(MTK_CUSTOM_PATH)/lens/main/inc
subdir-ccflags-y += -I$(MTK_CUSTOM_PATH)/lens/main/common/lc898122af
subdir-ccflags-y += -I$(MTK_CUSTOM_PATH)/lens/main/common/lc898212xdaf/inc
ifeq ($(CONFIG_MTK_LENS_BU63165AF_SUPPORT), y)
  subdir-ccflags-y += -I$(MTK_CUSTOM_PATH)/lens/main/common/bu63165af/inc
else
  subdir-ccflags-y += -I$(MTK_CUSTOM_PATH)/lens/main/common/bu63169af/inc
endif

ifeq ($(CONFIG_MTK_LENS_USE_MODULE), y)

MAIN_CFILES += main_lens.c

MAIN_CFILES += common/dw9714af/DW9714AF.c

ifeq ($(CONFIG_MTK_LENS_BU63165AF_SUPPORT), y)
MAIN_CFILES  += common/bu63165af/BU63165AF.c
MAIN_CFILES  += common/bu63165af/OIS_func.c
MAIN_CFILES  += common/bu63165af/OIS_main.c
MAIN_CFILES  += common/bu63165af/OIS_user.c
else
MAIN_CFILES  += common/bu63169af/BU63169AF.c
MAIN_CFILES  += common/bu63169af/OIS_func.c
MAIN_CFILES  += common/bu63169af/OIS_main.c
MAIN_CFILES  += common/bu63169af/OIS_user.c
endif

obj-m := mainaf.o
mainaf-objs := $(MAIN_CFILES:.c=.o)

else

obj-y  += main_lens.o
obj-y  += common/dw9714af/

ifeq ($(CONFIG_MTK_LENS_BU63165AF_SUPPORT), y)
  obj-y  += common/bu63165af/
else
  obj-y  += common/bu63169af/
endif

endif