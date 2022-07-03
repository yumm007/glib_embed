all:
	cd build && cmake .. && make
	ls -lh build/libglib_lite.a