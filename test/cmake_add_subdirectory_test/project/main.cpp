//  _______   __ __   __  _____   __  __  __
// |   __| |_/  |  \_/  |/  _  \ /  \/  \|  |     fkYAML: A C++ header-only YAML library (supporting code)
// |   __|  _  < \_   _/|  ___  |    _   |  |___  version 0.3.7
// |__|  |_| \__|  |_|  |_|   |_|___||___|______| https://github.com/fktn-k/fkYAML
//
// SPDX-FileCopyrightText: 2023-2024 Kensuke Fukutani <fktn.dev@gmail.com>
// SPDX-License-Identifier: MIT

#include <iostream>

#include <fkYAML/node.hpp>

int main() {
    fkyaml::node node = fkyaml::node::deserialize("test: true");

    std::cout << "test: " << node["test"].get_value<fkyaml::node::boolean_type>() << std::endl;

    return 0;
}
