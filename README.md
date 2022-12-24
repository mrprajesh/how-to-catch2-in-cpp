# how-to-catch2-in-cpp

This simple repo demonstates how can we use `Catch2` in our `C++` projects.
It demonstrates two sample project using
- Single files
- Multiple files

## structure

```
how-to-catch2-in-cpp/
├── factorial.cpp       # has the function needs "to be" tested 
├── factorial.h         # its declaration
├── lib
│   └── catch.hpp         # name says it all
├── README.md
├── single
│   └── single-file-eg.cpp  # single file example
├── test-me.sh          # under the hood compliles and runs test 
├── tests-factorial.cpp # tester's functions 
└── tests-main.cpp      # test main

```

## build and test full or single file eg

```
# Step 0.

git clone https://github.com/mrprajesh/how-to-catch2-in-cpp.git
cd how-to-catch2-in-cpp


# You can try any one the below

# Step 1.A
bash ./test-me.sh # you see fact(0) fails

# edit factorial.cpp. swap the comments `//` at line 4 & 5 and run again.

bash ./test-me.sh # you see all passes


# Step 1.B
g++ single/single-file-eg.cpp -I ./lib/ -o single-file-eg.out &&  ./single-file-eg.out --success

# you see fact(0) fails

# edit single/single-file-eg.cpp Swap the comments at lines 7 & 8 and run again 

g++ single/single-file-eg.cpp -I ./lib/ -o single-file-eg.out &&  ./single-file-eg.out -r compact

# you see all 5 passes

```
