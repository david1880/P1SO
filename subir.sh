#!/bin/bash

if test $# -ne 1
then
	echo necesitas un comentario para el commit
elif test $# -eq 1
then 
	git add *
	git commit -m '$1'
	git push origin master

fi
