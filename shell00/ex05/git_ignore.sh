#!/bin/sh
# git_ignore - script que lista os arquivos que estão sendo ignorados no momento em seu repositório
# Autor: Aline Cristiane Correa Costa  | acristia

git status --ignored -s | grep '!!' | cut -c 4-