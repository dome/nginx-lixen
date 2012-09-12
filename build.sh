#!/bin/bash
make clean
./configure --with-luajit  --with-http_mp4_module --prefix=/opt/lixen
make


