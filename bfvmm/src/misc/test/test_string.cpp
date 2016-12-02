//
// Bareflank Hypervisor
//
// Copyright (C) 2015 Assured Information Security, Inc.
// Author: Rian Quinn        <quinnr@ainfosec.com>
// Author: Brendan Kerrigan  <kerriganb@ainfosec.com>
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

#include <test.h>

#include <string>
#include <to_string.h>

void
misc_ut::test_string_literal()
{
    this->expect_true("" == ""_s);
    this->expect_true("hello world" == "hello world"_s);
}

void
misc_ut::test_string_to_string()
{
    this->expect_true(bfn::to_string(10, 8) == "012"_s);
    this->expect_true(bfn::to_string(10, 10) == "10"_s);
    this->expect_true(bfn::to_string(10, 16) == "0xA"_s);
}
