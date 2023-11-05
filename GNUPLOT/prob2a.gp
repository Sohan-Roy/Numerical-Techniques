set terminal png
set output "Lissajous1.png"
set title "Lissajous figure 1"
set xrange[-1.5:1.5]
set yrange[-1.5:1.5]
plot "prob2a_1.txt" t "n=1" w l lw 2, "prob2a_2.txt" t "n=2" w l lw 2, "prob2a_3.txt" t "n=2.5" w l lw 2,"prob2a_4.txt" t "n=3" w l lw 2