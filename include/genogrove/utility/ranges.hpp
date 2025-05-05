/*
 * SPDX-License-Indentifier: MIT
 *
 * Copyright (c) 2025 Richard A. Schäfer
 *
 * This file is part of genogrove and is licensed under the terms of the MIT license.
 * See the LICENSE file in the root of the repository for more information.
 */
#ifndef UTILITY_RANGES_HPP
#define UTILITY_RANGES_HPP

#if __cplusplus >= 202002L
    #include <ranges>
    #include <algorithm>
    namespace genogrove::utility {
        namespace ranges = std::ranges;
        namespace views = std::ranges::views;
    }
#else // C++17
    #include <range/v3/all.hpp>
    namespace genogrove::utility {
        namespace ranges = ::ranges;
        namespace views = ::ranges::views;
    }
#endif

#endif //UTILITY_RANGES_HPP
