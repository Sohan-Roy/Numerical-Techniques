set terminal png
set output "Lissajous2.png"
set title "Lissajous figure 2"
plot "prob2b_1.txt" t "A=0.5" w l lw 2, "prob2b_2.txt" t "A=1" w l lw 2, "prob2b_3.txt" t "A=2" w l lw 2