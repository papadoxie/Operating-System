#include "../include/types.h"
#include "../include/kstdio.h"
#include "../include/gdt.h"

struct __global_descriptor_table gdt;

__attribute__((noreturn)) void kmain(void *multiboot_structure, uint32_t magicnumber)
{
    printk("--------------------This is a test of the operating system--------------------");
    printk("Loading GDT...                                                                ");
    __gdt_init(&gdt);
    printk("GDT Loaded Successfully...                                                    ");
    while (1)
        ;
}