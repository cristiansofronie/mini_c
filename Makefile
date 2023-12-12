all: cmake
	make -C build

cmake:
	if [[ ! -d build ]]; then \
		mkdir build; \
	fi; \
	cd build; \
	cmake ..

run_print_time:
	@./build/print_time
