// MIT License
//
// Copyright (c) 2020, The Regents of the University of California,
// through Lawrence Berkeley National Laboratory (subject to receipt of any
// required approvals from the U.S. Dept. of Energy).  All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include "timemory/components/user_bundle/types.hpp"
//
#include "timemory/components/user_bundle/components.hpp"
//
#include "timemory/operations/extern.hpp"
//
#include "timemory/components/user_bundle/extern.hpp"

//
#include "timemory/utility/macros.hpp"
//
#if !defined(_WINDOWS)
//
//               THIS JUST SERVES AS A COMPILATION TEST!
//
extern template struct tim::component::base<
    tim::component::user_bundle<tim::component::tuple_bundle_idx, tim::api::native_tag>,
    void>;
//
extern template struct tim::component::base<
    tim::component::user_bundle<tim::component::list_bundle_idx, tim::api::native_tag>,
    void>;
//
extern template struct tim::component::user_bundle<tim::component::tuple_bundle_idx,
                                                   tim::api::native_tag>;
//
extern template struct tim::component::user_bundle<tim::component::list_bundle_idx,
                                                   tim::api::native_tag>;
//
#endif

//======================================================================================//
//
#include "timemory/plotting/definition.hpp"
//
#include "timemory/containers/types/hybrid_bundle.hpp"
//
//======================================================================================//
