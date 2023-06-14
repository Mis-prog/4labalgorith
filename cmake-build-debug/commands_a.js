window.prog = `
0
1
2
3
4
5
6
7
0-1,label=5
1-0,label=2
0-3,label=7
1-2,label=6
1-3,label=8
2-3,label=2
2-4,label=5
2-5,label=6
5-6,label=3
5-7,label=10
drawdir!
pause
path,1-2-3-4-5-6-7,color=red,width=3
pause
p,DFS вызван рекурсивно для вершины 0
0,color=lime,font=24
w,500
0-1,color=red/black/white,font=24, width=5
0,color=yellow
p,DFS вызван рекурсивно для вершины 1
1,color=lime
pause
w,500
p,Не пойдём в вершину 0, так как её уже посещали
w,500
1-2,color=red
1,color=yellow
p,DFS вызван рекурсивно для вершины 2
2,color=lime/red
pause
w,500
p,Не пойдём в вершину 1, так как её уже посещали
w,500
2-3,color=red
2,color=yellow
p,DFS вызван рекурсивно для вершины 3
3,color=lime
pause
w,500
p,Не пойдём в вершину 2, так как её уже посещали
w,500
1-3,color=gray;red
p,Не пойдём в вершину 1, так как её уже посещали
w,500
0-3,color=gray
p,Не пойдём в вершину 0, так как её уже посещали
w,500
p,Все пути из вершины 3 построены, возвращаемся из функции
3,shape=box,color=red,label=3;dist: 3
w,500
p,Вернулись в вершину 2, смотрим, что из неё ещё доступно
2,color=lime
pause
2-4,color=red
2,color=yellow
p,DFS вызван рекурсивно для вершины 4
4,color=lime
pause
w,500
p,Не пойдём в вершину 2, так как её уже посещали
w,500
p,Все пути из вершины 4 построены, возвращаемся из функции
4,shape=box,color=red,label=4;dist: 3
w,500
p,Вернулись в вершину 2, смотрим, что из неё ещё доступно
2,color=lime
pause
2-5,color=red
2,color=yellow
p,DFS вызван рекурсивно для вершины 5
5,color=lime
pause
w,500
p,Не пойдём в вершину 2, так как её уже посещали
w,500
5-6,color=red
5,color=yellow
p,DFS вызван рекурсивно для вершины 6
6,color=lime
pause
w,500
p,Не пойдём в вершину 5, так как её уже посещали
w,500
p,Все пути из вершины 6 построены, возвращаемся из функции
6,shape=box,color=red,label=6;dist: 4
w,500
p,Вернулись в вершину 5, смотрим, что из неё ещё доступно
5,color=lime
pause
5-7,color=red
5,color=yellow
p,DFS вызван рекурсивно для вершины 7
7,color=lime
pause
w,500
p,Не пойдём в вершину 5, так как её уже посещали
w,500
p,Все пути из вершины 7 построены, возвращаемся из функции
7,shape=box,color=red,label=7;dist: 4
w,500
p,Вернулись в вершину 5, смотрим, что из неё ещё доступно
5,color=lime
pause
p,Все пути из вершины 5 построены, возвращаемся из функции
5,shape=box,color=red,label=5;dist: 3
w,500
p,Вернулись в вершину 2, смотрим, что из неё ещё доступно
2,color=lime
pause
p,Все пути из вершины 2 построены, возвращаемся из функции
2,shape=box,color=red,label=2;dist: 2
w,500
p,Вернулись в вершину 1, смотрим, что из неё ещё доступно
1,color=lime
pause
1-3,color=gray
p,Не пойдём в вершину 3, так как её уже посещали
w,500
p,Все пути из вершины 1 построены, возвращаемся из функции
1,shape=box,color=red,label=1;dist: 1
w,500
p,Вернулись в вершину 0, смотрим, что из неё ещё доступно
0,color=lime
pause
0-3,color=gray
p,Не пойдём в вершину 3, так как её уже посещали
w,500
p,Все пути из вершины 0 построены, возвращаемся из функции
0,shape=box,color=red,label=0;dist: 0
w,500
`
