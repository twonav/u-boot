/*
 * Copyright 2000-2009
 * Wolfgang Denk, DENX Software Engineering, wd@denx.de.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <command.h>

#include <stdlib.h>
#include <linux/string.h>
#include <errno.h>
#include <asm-generic/signal.h>
#include <linux/ctype.h>

static int do_devmem2(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	return 0;
}

U_BOOT_CMD(
	devmem2,	CONFIG_SYS_MAXARGS,	1,	do_devmem2,
	"reads against /dev/mem",
	"\n"
	"Usage:\tdevmem2 { address } [ type [ data ] ]"
	"\taddress : memory address to act upon\n"
	"\ttype    : access operation type : [b]yte, [h]alfword, [w]ord\n"
	"\tdata    : data to be written\n\n"
);
