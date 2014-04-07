#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2b22e0c3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd9fa66ab, __VMLINUX_SYMBOL_STR(scst_unregister_dev_driver) },
	{ 0x925ff278, __VMLINUX_SYMBOL_STR(__scst_register_dev_driver) },
	{ 0xb4cfe8be, __VMLINUX_SYMBOL_STR(scst_get_cmd_abnormal_done_state) },
	{ 0x7581692b, __VMLINUX_SYMBOL_STR(scst_changer_generic_parse) },
	{ 0xae8c5371, __VMLINUX_SYMBOL_STR(scst_obtain_device_parameters) },
	{ 0x17e9816c, __VMLINUX_SYMBOL_STR(debug_print_with_prefix) },
	{ 0x80aeb9fd, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x65a5675c, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scst";


MODULE_INFO(srcversion, "50C4FA469470CB405AE6444");
