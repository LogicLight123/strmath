build_linux:
	@cd src; \
		g++ -c *.cpp \
			-DENVIRONMENT64
	@rm lib/*.a
	@ar rvs lib/strmath.a src/*.o
	@rm src/*.o
	@rm include/*.hpp
	@cp src/*.hpp include
	@echo -e "\033[1;32mBuild for Linux completed successfully.\033[0m"

test:
	@g++ -o test_strmath src/test/main.cpp \
		-Iinclude lib/strmath.a
	@echo -e "\033[1;32mBuild for test use completed successfully.\033[0m"

run_test:
	@./test_strmath

run: build_linux test run_test

#gets all local dependencies
grab:
#linux
	#@cp -r ../myCppLib/build-linux/* deps-linux
	#@cp -r ../../../c/projects/myCLib/build-linux/* deps-linux
#win64
	#@cp -r ../myCppLib/build-win64/* deps-win64
	#@cp -r ../../../c/projects/myCLib/build-win64/* deps-win64
#win32
	#@cp -r ../myCppLib/build-win32/* deps-win32
	#@cp -r ../../../c/projects/myCLib/build-win32/* deps-win32

	@echo "\033[1;32mGrabbed all local dependencies successfully.\033[0m"
