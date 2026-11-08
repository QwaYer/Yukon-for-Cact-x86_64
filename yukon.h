#ifndef YUKON_H
#define YUKON_H

#include <stdint.h>

/* Marvell Yukon-2 family vendor/device IDs. */
#define MARVELL_VENDOR_ID         0x11AB
#define MARVELL_YUKON_88E8040_DID 0x4354

/* PCI command register bits. */
#define PCI_CMD_IO_SPACE      0x0001u
#define PCI_CMD_MEM_SPACE     0x0002u
#define PCI_CMD_BUS_MASTER    0x0004u
#define PCI_CMD_INTX_DISABLE  0x0400u

#endif
