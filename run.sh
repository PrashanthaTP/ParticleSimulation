#!/bin/env bash
#

should_compile="$1"
script_dir="$(dirname ${BASH_SOURCE[0]})"
if [[ -n "${should_compile}" ]] ; then
	cd "${script_dir}/build"
	make -j8
fi
cd "${script_dir}"
./build/bin/main

