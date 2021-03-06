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
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{        0, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x5e83c83f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x17e9816c, __VMLINUX_SYMBOL_STR(debug_print_with_prefix) },
	{ 0x2b056eed, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xc1b152d6, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9362db0, __VMLINUX_SYMBOL_STR(__scst_get_resid) },
	{ 0x811c981e, __VMLINUX_SYMBOL_STR(scst_set_cmd_error) },
	{ 0x60ffe2b7, __VMLINUX_SYMBOL_STR(scst_sysfs_get_sysfs_ops) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xdde7e69f, __VMLINUX_SYMBOL_STR(scst_unregister_session) },
	{ 0xbd100793, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xcdc0a7bb, __VMLINUX_SYMBOL_STR(scst_sysfs_user_get_info) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xed1a7009, __VMLINUX_SYMBOL_STR(scst_rx_mgmt_fn) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x164f7087, __VMLINUX_SYMBOL_STR(sock_recvmsg) },
	{ 0x7bdb4002, __VMLINUX_SYMBOL_STR(scst_register_session) },
	{ 0xefba93e1, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x887c7d32, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x2b074e7e, __VMLINUX_SYMBOL_STR(scst_cmd_set_write_not_received_data_len) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf8f2cbba, __VMLINUX_SYMBOL_STR(scst_sysfs_user_add_info) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x9f14c292, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd62ce0a5, __VMLINUX_SYMBOL_STR(kobject_del) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc7101060, __VMLINUX_SYMBOL_STR(scst_free_sg) },
	{ 0x4ac809e7, __VMLINUX_SYMBOL_STR(debug_print_buffer) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x5f395d28, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x97d61ab1, __VMLINUX_SYMBOL_STR(scst_aen_done) },
	{ 0xb1fdfe4d, __VMLINUX_SYMBOL_STR(scst_alloc_sg) },
	{ 0x40256835, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xfbf2b514, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x5617f250, __VMLINUX_SYMBOL_STR(scst_sysfs_user_del_info) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x65a5675c, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x78193dce, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x9d442502, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x36cab479, __VMLINUX_SYMBOL_STR(scst_restart_cmd) },
	{ 0xd4e840fa, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xcbd8695b, __VMLINUX_SYMBOL_STR(scst_register_target) },
	{ 0x2adb5b4f, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x48941be8, __VMLINUX_SYMBOL_STR(scst_set_initial_UA) },
	{ 0xe4e44300, __VMLINUX_SYMBOL_STR(scst_unregister_target) },
	{ 0x3e70fe27, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x90eafa34, __VMLINUX_SYMBOL_STR(set_cpus_allowed_ptr) },
	{ 0x48785122, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaaa3b254, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x83a6ddd, __VMLINUX_SYMBOL_STR(scst_tgt_cmd_done) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xee91b7a8, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x20e870b4, __VMLINUX_SYMBOL_STR(scst_cmd_init_done) },
	{ 0x761e73, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xca40afbf, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xb121ba19, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0x19f9b2ae, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xd3a14e22, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xb5b166e2, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xe9dff136, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xd2ca0a37, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x65d663f5, __VMLINUX_SYMBOL_STR(sysfs_remove_file_ns) },
	{ 0x8379ddb4, __VMLINUX_SYMBOL_STR(scst_check_convert_sense) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xc4399d3a, __VMLINUX_SYMBOL_STR(scst_wait_info_completion) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3f71faa1, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x6a037cf1, __VMLINUX_SYMBOL_STR(mempool_kfree) },
	{ 0xc256e762, __VMLINUX_SYMBOL_STR(__bitmap_equal) },
	{ 0xa3e7df22, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9689bc7c, __VMLINUX_SYMBOL_STR(netlink_ack) },
	{ 0xb153f6c5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4aad52d7, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb7f2dd38, __VMLINUX_SYMBOL_STR(vfs_writev) },
	{ 0x929a4618, __VMLINUX_SYMBOL_STR(scst_rx_cmd) },
	{ 0x89a328b8, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x5c3edd59, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xa05c03df, __VMLINUX_SYMBOL_STR(mempool_kmalloc) },
	{ 0xf031f8f1, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf23d6400, __VMLINUX_SYMBOL_STR(scst_kobject_put_and_wait) },
	{ 0xeb4c1a32, __VMLINUX_SYMBOL_STR(scst_cmd_set_ext_cdb) },
	{ 0x763b05eb, __VMLINUX_SYMBOL_STR(fget) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xb95f4062, __VMLINUX_SYMBOL_STR(__scst_register_target_template) },
	{ 0x32eeaded, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x73397760, __VMLINUX_SYMBOL_STR(scst_unregister_target_template) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb2421ddb, __VMLINUX_SYMBOL_STR(scst_cmd_get) },
	{ 0xc66e2f0c, __VMLINUX_SYMBOL_STR(scst_initiator_has_luns) },
	{ 0xae8b991, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0xc06a6276, __VMLINUX_SYMBOL_STR(scst_cmd_put) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x3c057bdb, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xdc48e3e9, __VMLINUX_SYMBOL_STR(scst_reassign_retained_sess_states) },
	{ 0xf4997701, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scst,libcrc32c";


MODULE_INFO(srcversion, "00CABB5BD7A2793EED535D3");
