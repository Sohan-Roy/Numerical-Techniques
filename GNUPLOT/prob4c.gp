set terminal png
set output "theta32.png"
plot "theta32.txt" u 1:2 t "theta_{32} mod squared" w lp lw 2 lc 2