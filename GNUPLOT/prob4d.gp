set terminal png
set output "theta33.png"
plot "theta33.txt" u 1:2 t "theta_{33} mod squared" w lp lw 2 lc 2