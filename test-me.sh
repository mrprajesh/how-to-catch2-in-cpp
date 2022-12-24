echo Test compiling using Catch v2.13.8 from ./lib folder
g++ *.cpp -o tests.out -I ./lib
./tests.out --success
