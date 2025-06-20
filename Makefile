default: build

build:	Wilma
	@echo "Build Done."

rebuild: clean Wilma

clean:
	@echo "Cleaning..."
	@rm -rf Wilma

Wilma: Wilma.cpp
	@echo "Building ..."
	@g++ Wilma.cpp -o Wilma


