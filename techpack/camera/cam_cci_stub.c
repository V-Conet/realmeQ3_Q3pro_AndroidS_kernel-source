#include <linux/types.h>
#include <linux/export.h>
#include <linux/errno.h>
#include <linux/notifier.h>

int32_t cam_cci_control_interface(void *arg)
{
	return -ENODEV;
}
EXPORT_SYMBOL(cam_cci_control_interface);

void *get_main_display(void)
{
	return NULL;
}
EXPORT_SYMBOL(get_main_display);

int register_lcdinfo_notifier(struct notifier_block *nb)
{
	return -ENODEV;
}
EXPORT_SYMBOL(register_lcdinfo_notifier);

int unregister_lcdinfo_notifier(struct notifier_block *nb)
{
	return -ENODEV;
}
EXPORT_SYMBOL(unregister_lcdinfo_notifier);
