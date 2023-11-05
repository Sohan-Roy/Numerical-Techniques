set terminal png
set output "Bessel.png"
set xlabel "z"
set ylabel "j_n(z)"
set yrange[-0.4:1.0]
plot "Besssel.txt" u 1:2 t "j_0" w l , "Besssel.txt" u 1:3 t "j_1" w l , "Besssel.txt" u 1:4 t "j_2" w l , "Besssel.txt" u 1:5 t "j_3" w l , "Besssel.txt" u 1:6 t "j_4" w l ,"Besssel.txt" u 1:7 t "j_5" w l 