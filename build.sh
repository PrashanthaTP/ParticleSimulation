#!/bin/env bash
#

script_dir=$(dirname "${BASH_SOURCE[0]}")
cd ${script_dir}
cmake -S . -B build -G "Unix Makefiles"
cd build
make -j8

