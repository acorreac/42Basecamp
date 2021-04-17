#!/bin/sh
#Autora: Aline Cristiane Correa Costa | acristia

ls -l | awk '(NR%2>0)'