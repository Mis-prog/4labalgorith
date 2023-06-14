window.prog = `
0,x=-234,y=-189
1,x=-238,y=-126
2,x=-236,y=-64
3,x=-237,y=12
4,x=-234,y=79
5,x=-233,y=136
6,x=-229,y=204
7,x=108,y=-181
8,x=120,y=-110
9,x=116,y=-38
10,x=112,y=50
11,x=122,y=120
12,x=127,y=176
13,x=127,y=240
0-7,label=1
0-11,label=1
1-9,label=1
2-12,label=1
2-13,label=1
3-8,label=1
4-7,label=1
4-8,label=1
4-13,label=1
5-10,label=1
5-12,label=1
5-13,label=1
6-10,label=1
6-12,label=1
6-13,label=1
draw!
0,color=red
w,500
7,color=yellow
p,найдена увеличивающаяся цепь: 0-7
path_show,0-7,width=5
pause
path_restore
0-7,color=red,width=2
p,Новое паросочетание: [0]=7 [1]=-1 [2]=-1 [3]=-1 [4]=-1 [5]=-1 [6]=-1 [7]=0 [8]=-1 [9]=-1 [10]=-1 [11]=-1 [12]=-1 [13]=-1 
pause
0,color=lightblue
1,color=red
w,500
9,color=yellow
p,найдена увеличивающаяся цепь: 1-9
path_show,1-9,width=5
pause
path_restore
1-9,color=red,width=2
p,Новое паросочетание: [0]=7 [1]=9 [2]=-1 [3]=-1 [4]=-1 [5]=-1 [6]=-1 [7]=0 [8]=-1 [9]=1 [10]=-1 [11]=-1 [12]=-1 [13]=-1 
pause
1,color=lightblue
2,color=red
w,500
12,color=yellow
p,найдена увеличивающаяся цепь: 2-12
path_show,2-12,width=5
pause
path_restore
2-12,color=red,width=2
p,Новое паросочетание: [0]=7 [1]=9 [2]=12 [3]=-1 [4]=-1 [5]=-1 [6]=-1 [7]=0 [8]=-1 [9]=1 [10]=-1 [11]=-1 [12]=2 [13]=-1 
pause
2,color=lightblue
3,color=red
w,500
8,color=yellow
p,найдена увеличивающаяся цепь: 3-8
path_show,3-8,width=5
pause
path_restore
3-8,color=red,width=2
p,Новое паросочетание: [0]=7 [1]=9 [2]=12 [3]=8 [4]=-1 [5]=-1 [6]=-1 [7]=0 [8]=3 [9]=1 [10]=-1 [11]=-1 [12]=2 [13]=-1 
pause
3,color=lightblue
4,color=red
w,500
7,color=yellow
7,color=red
0,color=red
w,500
11,color=yellow
p,найдена увеличивающаяся цепь: 4-7-0-11
path_show,4-7-0-11,width=5
pause
path_restore
0-11,color=red,width=2
0-7,color=blue,width=2
4-7,color=red,width=2
p,Новое паросочетание: [0]=11 [1]=9 [2]=12 [3]=8 [4]=7 [5]=-1 [6]=-1 [7]=4 [8]=3 [9]=1 [10]=-1 [11]=0 [12]=2 [13]=-1 
pause
0,color=lightblue
4,color=lightblue
7,color=lightblue
5,color=red
w,500
10,color=yellow
p,найдена увеличивающаяся цепь: 5-10
path_show,5-10,width=5
pause
path_restore
5-10,color=red,width=2
p,Новое паросочетание: [0]=11 [1]=9 [2]=12 [3]=8 [4]=7 [5]=10 [6]=-1 [7]=4 [8]=3 [9]=1 [10]=5 [11]=0 [12]=2 [13]=-1 
pause
5,color=lightblue
6,color=red
w,500
10,color=yellow
10,color=red
5,color=red
w,500
12,color=yellow
12,color=red
2,color=red
w,500
13,color=yellow
p,найдена увеличивающаяся цепь: 6-10-5-12-2-13
path_show,6-10-5-12-2-13,width=5
pause
path_restore
2-13,color=red,width=2
2-12,color=blue,width=2
5-12,color=red,width=2
5-10,color=blue,width=2
6-10,color=red,width=2
p,Новое паросочетание: [0]=11 [1]=9 [2]=13 [3]=8 [4]=7 [5]=12 [6]=10 [7]=4 [8]=3 [9]=1 [10]=6 [11]=0 [12]=5 [13]=2 
pause
`
