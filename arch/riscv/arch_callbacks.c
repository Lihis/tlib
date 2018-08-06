/*
 *  RISC-V callbacks
 *
 *  Copyright (c) Antmicro
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */
#include "callbacks.h"
#include "arch_callbacks.h"

DEFAULT_INT_HANDLER1(uint64_t tlib_get_cpu_time, void)
DEFAULT_INT_HANDLER1(uint32_t tlib_is_in_debug_mode, void)

DEFAULT_INT_HANDLER1(int32_t tlib_has_nonstandard_csr, uint64_t csr)
DEFAULT_INT_HANDLER1(uint64_t tlib_read_csr, uint64_t csr)
DEFAULT_VOID_HANDLER2(void tlib_write_csr, uint64_t csr, uint64_t value)