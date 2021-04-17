#!/bin/sh
# Escrever uma linha de comando que procure na pasta atual e em todas as subpastas
#todos os arquivos cujos nomes terminam com ".sh"(sem as aspas).
#Autora: Aline Cristiane Correa Costa | acristia

find . -type f -name "*.sh" -exec basename -s ".sh" {} \;