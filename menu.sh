#!/bin/bash

case "$1" in
   1) g++ 1_Cohen-Sutherland.cpp -lgraph && ./a.out
   ;;
   2)
	case "$2" in 
		1) cd 2nd-ques && gcc 2_translation.c -lgraph && ./a.out && cd .. 
		;;	
		2) cd 2nd-ques && gcc 2_scaling.c -lgraph && ./a.out && cd ..
		;;	
		3) cd 2nd-ques && g++ 2_rotating.c -lgraph && ./a.out && cd ..
		;;
		*)
			echo "enter the value"
		;;	
	esac  
   ;;
   3) g++ 3_composite_transformation.cpp -lgraph && ./a.out
   ;;
   4) g++ 4_fractal.cpp -lgraph && ./a.out
   ;;
   5) g++ 5_attributes.cpp -lgraph && ./a.out
   ;;
esac
