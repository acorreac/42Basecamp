#!/bin/sh
# print_groups - script que mostra a lista de grupos de login 
# que fazer parte da variavel FT_USER, seprados por virgula sem espaço
#Autora: Aline Cristiane Correa Costa | acristia

groups $FT_USER | tr ' ' ',' | tr -d '\n'