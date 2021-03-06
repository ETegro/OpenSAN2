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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x5e83c83f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x89a328b8, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xbbfdb12, __VMLINUX_SYMBOL_STR(scst_register_virtual_device) },
	{ 0xcb865451, __VMLINUX_SYMBOL_STR(scst_unregister_virtual_dev_driver) },
	{ 0xb7f2dd38, __VMLINUX_SYMBOL_STR(vfs_writev) },
	{ 0x972380a2, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x79ad9d24, __VMLINUX_SYMBOL_STR(vfs_read) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x26c074e8, __VMLINUX_SYMBOL_STR(blkdev_issue_flush) },
	{ 0xec6ceaf0, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xf34dc48e, __VMLINUX_SYMBOL_STR(add_to_page_cache_lru) },
	{ 0x9c78e619, __VMLINUX_SYMBOL_STR(page_cache_sync_readahead) },
	{ 0x64660d34, __VMLINUX_SYMBOL_STR(mark_page_accessed) },
	{ 0x8014a73c, __VMLINUX_SYMBOL_STR(page_cache_async_readahead) },
	{ 0xbae404db, __VMLINUX_SYMBOL_STR(find_get_page) },
	{ 0x5042f47, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xa9c485d5, __VMLINUX_SYMBOL_STR(__lock_page_killable) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xbbbb4d6f, __VMLINUX_SYMBOL_STR(scst_calc_block_shift) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x7473d6ee, __VMLINUX_SYMBOL_STR(scst_get_next_lexem) },
	{ 0xe59c3e5a, __VMLINUX_SYMBOL_STR(scst_get_next_token_str) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x93b89f4c, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7f658e80, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x4580d574, __VMLINUX_SYMBOL_STR(scst_lookup_tg_id) },
	{ 0xc01cf848, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x97a1efd3, __VMLINUX_SYMBOL_STR(scst_impl_alua_configured) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xce900af, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0xb100cb10, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0x925520d2, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x4ce5cf38, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x385b04e2, __VMLINUX_SYMBOL_STR(bio_get_nr_vecs) },
	{ 0x3dbc5fea, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x7106cbf9, __VMLINUX_SYMBOL_STR(scst_write_same) },
	{ 0xc1d86412, __VMLINUX_SYMBOL_STR(scst_tg_get_group_info) },
	{ 0x57e54aa6, __VMLINUX_SYMBOL_STR(vfs_readv) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xaaa3b254, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x15f6cb5d, __VMLINUX_SYMBOL_STR(scst_mutex) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xee89344, __VMLINUX_SYMBOL_STR(scst_cdrom_generic_parse) },
	{ 0x7a57228b, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x48785122, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x82441caf, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x980a46e1, __VMLINUX_SYMBOL_STR(__page_cache_alloc) },
	{ 0xbe1c34c7, __VMLINUX_SYMBOL_STR(__scst_register_virtual_dev_driver) },
	{ 0xb89938ff, __VMLINUX_SYMBOL_STR(scst_set_sense) },
	{ 0xb2421ddb, __VMLINUX_SYMBOL_STR(scst_cmd_get) },
	{ 0xc06a6276, __VMLINUX_SYMBOL_STR(scst_cmd_put) },
	{ 0x4ac809e7, __VMLINUX_SYMBOL_STR(debug_print_buffer) },
	{ 0x902f845f, __VMLINUX_SYMBOL_STR(scst_set_busy) },
	{ 0x8c6458bf, __VMLINUX_SYMBOL_STR(scst_set_invalid_field_in_parm_list) },
	{ 0x5cbbb1ac, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x258c39eb, __VMLINUX_SYMBOL_STR(scst_set_resp_data_len) },
	{ 0x9048454b, __VMLINUX_SYMBOL_STR(scst_put_buf_full) },
	{ 0xc65742e9, __VMLINUX_SYMBOL_STR(scst_get_buf_full_sense) },
	{ 0x69a9d489, __VMLINUX_SYMBOL_STR(scst_set_invalid_field_in_cdb) },
	{ 0xd3a14e22, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9826fa81, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x927adc82, __VMLINUX_SYMBOL_STR(scst_sysfs_work_put) },
	{ 0x4e6b81ff, __VMLINUX_SYMBOL_STR(scst_sysfs_work_get) },
	{ 0xde98c647, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0xffbeec1b, __VMLINUX_SYMBOL_STR(scst_resume_activity) },
	{ 0xab190113, __VMLINUX_SYMBOL_STR(scst_capacity_data_changed) },
	{ 0xcb13e0f9, __VMLINUX_SYMBOL_STR(scst_suspend_activity) },
	{ 0x8e828f23, __VMLINUX_SYMBOL_STR(scst_sysfs_queue_wait_work) },
	{ 0xbcc03b9, __VMLINUX_SYMBOL_STR(kobject_get) },
	{ 0x2e19d1c4, __VMLINUX_SYMBOL_STR(scst_alloc_sysfs_work) },
	{ 0xb4cfe8be, __VMLINUX_SYMBOL_STR(scst_get_cmd_abnormal_done_state) },
	{ 0xb900edaa, __VMLINUX_SYMBOL_STR(scst_sbc_generic_parse) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9dee004b, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x811c981e, __VMLINUX_SYMBOL_STR(scst_set_cmd_error) },
	{ 0x51805744, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{        0, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd7fc2c38, __VMLINUX_SYMBOL_STR(scst_get_setup_id) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9f14c292, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x78193dce, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x8388e758, __VMLINUX_SYMBOL_STR(scst_unregister_virtual_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x65a5675c, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x17e9816c, __VMLINUX_SYMBOL_STR(debug_print_with_prefix) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scst,libcrc32c";


MODULE_INFO(srcversion, "A505CA2377ECF615E0C3E89");
