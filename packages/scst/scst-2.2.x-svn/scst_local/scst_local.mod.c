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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x3b4ceb4a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xe6e3b875, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x8c0b1924, __VMLINUX_SYMBOL_STR(root_device_unregister) },
	{ 0xf90554c0, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x3a5974f9, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x73397760, __VMLINUX_SYMBOL_STR(scst_unregister_target_template) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xb57a7c86, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xbe7e7783, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x6e80c681, __VMLINUX_SYMBOL_STR(__root_device_register) },
	{ 0x83a6ddd, __VMLINUX_SYMBOL_STR(scst_tgt_cmd_done) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe59c3e5a, __VMLINUX_SYMBOL_STR(scst_get_next_token_str) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x7473d6ee, __VMLINUX_SYMBOL_STR(scst_get_next_lexem) },
	{ 0xc66e2f0c, __VMLINUX_SYMBOL_STR(scst_initiator_has_luns) },
	{ 0xf61ca7f3, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x97674f7a, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x7bdb4002, __VMLINUX_SYMBOL_STR(scst_register_session) },
	{ 0x9d442502, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xcbd8695b, __VMLINUX_SYMBOL_STR(scst_register_target) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xba5e4f5c, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x38799473, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xb95f4062, __VMLINUX_SYMBOL_STR(__scst_register_target_template) },
	{ 0x15ddbdc, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xed1a7009, __VMLINUX_SYMBOL_STR(scst_rx_mgmt_fn) },
	{ 0x9362db0, __VMLINUX_SYMBOL_STR(__scst_get_resid) },
	{ 0x93b8f1d9, __VMLINUX_SYMBOL_STR(scsi_track_queue_full) },
	{ 0xb19b0d25, __VMLINUX_SYMBOL_STR(scst_get_max_lun_commands) },
	{ 0x17fafdc, __VMLINUX_SYMBOL_STR(scst_unpack_lun) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x20e870b4, __VMLINUX_SYMBOL_STR(scst_cmd_init_done) },
	{ 0x929a4618, __VMLINUX_SYMBOL_STR(scst_rx_cmd) },
	{ 0x4ac809e7, __VMLINUX_SYMBOL_STR(debug_print_buffer) },
	{ 0x68994b3b, __VMLINUX_SYMBOL_STR(scst_copy_sg) },
	{ 0x6a113200, __VMLINUX_SYMBOL_STR(blk_queue_free_tags) },
	{ 0x20146586, __VMLINUX_SYMBOL_STR(blk_queue_init_tags) },
	{ 0x7633077b, __VMLINUX_SYMBOL_STR(scsi_adjust_queue_depth) },
	{ 0xe9dbaa5c, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x97f36a02, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x3de37932, __VMLINUX_SYMBOL_STR(scst_restore_sg_buff) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x9f14c292, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xaaa3b254, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa3a77c69, __VMLINUX_SYMBOL_STR(down_read_trylock) },
	{ 0xe4e44300, __VMLINUX_SYMBOL_STR(scst_unregister_target) },
	{ 0xdde7e69f, __VMLINUX_SYMBOL_STR(scst_unregister_session) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x17e9816c, __VMLINUX_SYMBOL_STR(debug_print_with_prefix) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x97d61ab1, __VMLINUX_SYMBOL_STR(scst_aen_done) },
	{ 0xe3168137, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7f084fe5, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x65a5675c, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scst";


MODULE_INFO(srcversion, "A8C452D71D530B08828E1FD");
