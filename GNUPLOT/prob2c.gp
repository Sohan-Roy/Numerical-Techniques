set terminal png
set output "Lissajous3.png"
set title "Lissajous figure 3"
plot "prob2c_1.txt" t "del = pi/4" w l lw 2.5, "prob2c_2.txt" t "del=pi/2" w l lw 2.5, "prob2c_3.txt" t "del=pi" w l lw 2.5