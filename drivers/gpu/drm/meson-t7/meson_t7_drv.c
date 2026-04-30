// SPDX-License-Identifier: GPL-2.0-only
/*
 * Compile-only scaffold for the Amlogic T7 vendor display pipeline port.
 * Runtime platform-driver binding is added only after the selected vendor
 * DRM/VPU/vout/HDMITX dependencies are migrated to Linux v7.1 APIs.
 */

#include <linux/module.h>

static int __init meson_t7_vendor_drm_init(void)
{
	return 0;
}
module_init(meson_t7_vendor_drm_init);

static void __exit meson_t7_vendor_drm_exit(void)
{
}
module_exit(meson_t7_vendor_drm_exit);

MODULE_DESCRIPTION("Amlogic T7 vendor display pipeline port scaffold");
MODULE_LICENSE("GPL");
