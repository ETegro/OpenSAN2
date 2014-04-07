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
	{ 0xd4e840fa, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x5e83c83f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xd9fa66ab, __VMLINUX_SYMBOL_STR(scst_unregister_dev_driver) },
	{ 0x268f87ce, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xe8ae84aa, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x778485cf, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xd7bd463f, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x89a328b8, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xb153f6c5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2b056eed, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc06a6276, __VMLINUX_SYMBOL_STR(scst_cmd_put) },
	{ 0xb2421ddb, __VMLINUX_SYMBOL_STR(scst_cmd_get) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xdb3e06b1, __VMLINUX_SYMBOL_STR(scst_prepare_async_mcmd) },
	{ 0x887c7d32, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0xbbfdb12, __VMLINUX_SYMBOL_STR(scst_register_virtual_device) },
	{ 0x6cf19723, __VMLINUX_SYMBOL_STR(sgv_pool_get) },
	{ 0xb99ed3ab, __VMLINUX_SYMBOL_STR(sgv_pool_set_allocator) },
	{ 0xbc0abe77, __VMLINUX_SYMBOL_STR(sgv_pool_create) },
	{ 0xeb469430, __VMLINUX_SYMBOL_STR(scst_init_mem_lim) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x5a8e7440, __VMLINUX_SYMBOL_STR(scst_init_threads) },
	{ 0x2a6e6109, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xf4997701, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xab190113, __VMLINUX_SYMBOL_STR(scst_capacity_data_changed) },
	{ 0xffbeec1b, __VMLINUX_SYMBOL_STR(scst_resume_activity) },
	{ 0x3b4ceb4a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xe6e3b875, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xcb13e0f9, __VMLINUX_SYMBOL_STR(scst_suspend_activity) },
	{ 0x258c39eb, __VMLINUX_SYMBOL_STR(scst_set_resp_data_len) },
	{ 0xb4cfe8be, __VMLINUX_SYMBOL_STR(scst_get_cmd_abnormal_done_state) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x64219521, __VMLINUX_SYMBOL_STR(scst_post_alloc_data_buf) },
	{ 0x9659f305, __VMLINUX_SYMBOL_STR(sgv_pool_free) },
	{ 0xbe1c34c7, __VMLINUX_SYMBOL_STR(__scst_register_virtual_dev_driver) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4ac809e7, __VMLINUX_SYMBOL_STR(debug_print_buffer) },
	{ 0x37b29206, __VMLINUX_SYMBOL_STR(scst_alloc_sense) },
	{ 0x19a5d305, __VMLINUX_SYMBOL_STR(scst_set_cmd_error_status) },
	{ 0xcc04e283, __VMLINUX_SYMBOL_STR(scst_post_parse) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x44d41a4a, __VMLINUX_SYMBOL_STR(scst_block_generic_dev_done) },
	{ 0x6b9563cf, __VMLINUX_SYMBOL_STR(scst_tape_generic_dev_done) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xbbbb4d6f, __VMLINUX_SYMBOL_STR(scst_calc_block_shift) },
	{ 0x902f845f, __VMLINUX_SYMBOL_STR(scst_set_busy) },
	{ 0x2e945c20, __VMLINUX_SYMBOL_STR(scst_set_cmd_abnormal_done_state) },
	{ 0x811c981e, __VMLINUX_SYMBOL_STR(scst_set_cmd_error) },
	{ 0x89ba14ad, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x4cc75379, __VMLINUX_SYMBOL_STR(sgv_get_priv) },
	{ 0x47769201, __VMLINUX_SYMBOL_STR(sgv_pool_alloc) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x9f14c292, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xaaa3b254, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd3a14e22, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa3e7df22, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x5f395d28, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x19f9b2ae, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x79e55341, __VMLINUX_SYMBOL_STR(scst_deinit_threads) },
	{ 0xdd4becf9, __VMLINUX_SYMBOL_STR(sgv_pool_del) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x28f0c4f6, __VMLINUX_SYMBOL_STR(sgv_pool_flush) },
	{ 0xcb865451, __VMLINUX_SYMBOL_STR(scst_unregister_virtual_dev_driver) },
	{ 0x8388e758, __VMLINUX_SYMBOL_STR(scst_unregister_virtual_device) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x40256835, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xcf135ab8, __VMLINUX_SYMBOL_STR(scst_async_mcmd_completed) },
	{ 0x48785122, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x82441caf, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xd2c652ec, __VMLINUX_SYMBOL_STR(__scst_check_local_events) },
	{ 0x3e8eed46, __VMLINUX_SYMBOL_STR(scst_process_active_cmd) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xd3719d59, __VMLINUX_SYMBOL_STR(paravirt_ticketlocks_enabled) },
	{ 0x7581692b, __VMLINUX_SYMBOL_STR(scst_changer_generic_parse) },
	{ 0x83c4c823, __VMLINUX_SYMBOL_STR(scst_modisk_generic_parse) },
	{ 0xee89344, __VMLINUX_SYMBOL_STR(scst_cdrom_generic_parse) },
	{ 0xbbe7ef05, __VMLINUX_SYMBOL_STR(scst_processor_generic_parse) },
	{ 0x270e4d0e, __VMLINUX_SYMBOL_STR(scst_tape_generic_parse) },
	{ 0xb900edaa, __VMLINUX_SYMBOL_STR(scst_sbc_generic_parse) },
	{ 0x8af00bfe, __VMLINUX_SYMBOL_STR(scst_raid_generic_parse) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x65a5675c, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x17e9816c, __VMLINUX_SYMBOL_STR(debug_print_with_prefix) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scst";


MODULE_INFO(srcversion, "D884FCEE97D6BE245C06FC0");
