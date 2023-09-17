#!/bin/sh

if [ ! -d bin/module ]
then
    mkdir bin/module
else
    unlink bin/game_project
    unlink bin/module/libgame_project.so
fi

cp sylar/bin/sylar bin/game_project
cp lib/libgame_project.so bin/module/
