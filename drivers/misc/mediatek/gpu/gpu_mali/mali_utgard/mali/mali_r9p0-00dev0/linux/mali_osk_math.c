/*
 * Copyright (C) 2010, 2013-2014, 2017 ARM Limited. All rights reserved.
 *
 * This program is free software and is provided to you under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation, and any use by you of this program is subject to the terms of such GNU licence.
 *
 *
 *
 */

/**
 * @file mali_osk_math.c
 * Implementation of the OS abstraction layer for the kernel device driver
 */

#include "mali_osk.h"
#include <linux/bitops.h>

u32 _mali_osk_clz(u32 input)
{
	return 32 - fls(input);
}

u32 _mali_osk_fls(u32 input)
{
	return fls(input);
}
