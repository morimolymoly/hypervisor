//
// Bareflank Hypervisor
//
// Copyright (C) 2015 Assured Information Security, Inc.
// Author: Rian Quinn        <quinnr@ainfosec.com>
// Author: Brendan Kerrigan  <kerriganb@ainfosec.com>
// Author: Connor Davis      <davisc@ainfosec.com>
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

#ifndef VMCS_INTEL_X64_32BIT_READ_ONLY_DATA_FIELDS_H
#define VMCS_INTEL_X64_32BIT_READ_ONLY_DATA_FIELDS_H

#include <bitmanip.h>
#include <vmcs/vmcs_intel_x64.h>

// *INDENT-OFF*
namespace intel_x64
{
namespace vmcs
{

namespace vm_exit_instruction_length
{
    constexpr const auto addr = 0x000000000000440CUL;
    constexpr const auto name = "vm_exit_instruction_length";

    inline auto exists() noexcept
    { return true; }

    inline auto get()
    { return get_vmcs_field(addr, name, exists()); }

    inline auto get_if_exists(bool verbose = false) noexcept
    { return get_vmcs_field_if_exists(addr, name, verbose, exists()); }
}

}
}

// *INDENT-ON*

#endif