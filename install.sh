#!/bin/bash
mkdir build
cd build
cmake -DCMAKE_INSTALL_PREFIX=/usr ../
make
sudo make install
cd ..
rm build -rf
