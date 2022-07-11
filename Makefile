all:
	mkdir -p build
	cd build && cmake .. && make
	ls -lh build/libglib_lite.a build/glib_test
	build/glib_test

clean:
	rm -rf build
