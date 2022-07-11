all:
	mkdir -p build
	cd build && cmake .. && make
	ls -lh build/libglib_lite.a

clean:
	rm -rf build