all:
	mkdir Opposite/
	cd src/ && make
	cd src/ && make clean
clean:
	rm -r Opposite
run:
	cd Opposite && ./Opposite_word


