set grid
set xrange [0 : 10]
plot cosh(sqrt(x)) w l
replot "values.dat" using 1:2 w l title "f(x)" lw 2
replot "values.dat" using 1:3 w l title "f'(x) skaitliski" lw 2
replot "values.dat" using 1:4 w l title "f'(x) ar dif" lw 2
replot "values.dat" using 1:5 w l title "f''(x) skaitliski" lw 2
replot "values.dat" using 1:6 w l title "f''(x) ar dif" lw 2 

