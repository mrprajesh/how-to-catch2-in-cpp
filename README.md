# how-to-catch2-in-cpp

This simple repo demos how can you use catch2 to your c++ projects

## structure

```
how-to-catch2-in-cpp/
├── factorial.cpp   # has the function needs "to be" tested 
├── factorial.h     # its declaration
├── lib
│   └── catch.hpp     # name says it all
├── README.md
├── testme.sh        # under the hood compliles and runs test 
├── tests-factorial.cpp # tester's functions 
└── tests-main.cpp      # test main

```

## build and test

```
git clone https://github.com/mrprajesh/how-to-catch2-in-cpp.git
cd how-to-catch2-in-cpp
bash ./testme.sh
```
