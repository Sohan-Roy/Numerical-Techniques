set terminal png
set output "triangle.png"
set xlabel "x"
set ylabel "y"
set xrange[-1:5]
set yrange[-1:5]
plot "prob1a.txt" t "Right angled triangle" w lp lw 2 lc 2