/*
 * Copyright (C) 2013 Martin Willi
 * Copyright (C) 2013 revosec AG
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

/**
 * @defgroup kernel_utun kernel_utun
 * @ingroup hplugins
 *
 * @defgroup kernel_utun_plugin kernel_utun_plugin
 * @{ @ingroup kernel_utun
 */

#ifndef KERNEL_UTUN_PLUGIN_H_
#define KERNEL_UTUN_PLUGIN_H_

#include <plugins/plugin.h>

typedef struct kernel_utun_plugin_t kernel_utun_plugin_t;

/**
 * OS X kernel interface plugin using crypto-enabled utun devices
 */
struct kernel_utun_plugin_t {

	/**
	 * implements plugin interface
	 */
	plugin_t plugin;
};

#endif /** KERNEL_UTUN_PLUGIN_H_ @}*/
