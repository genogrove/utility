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

namespace genogrove::utility {

    template<typename Map, typename Key, typename Value>
    std::optional<Value> find_key(const Map& map, const Key& key) {
#if __cplusplus >= 202002L
        if(map.contains(key)) {
            return map.at(key);
        } else {
            return std::nullopt;
        }
#else
        auto it = map.find(key);
        if(it != map.end()) {
            return it->second;
        } else {
            return std::nullopt;
        }
#endif
    }



}
#endif //UTILITY_RANGES_HPP
