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
p,DFS ������ ���������� ��� ������� 0
0,color=lime,font=24
w,500
0-1,color=red/black/white,font=24, width=5
0,color=yellow
p,DFS ������ ���������� ��� ������� 1
1,color=lime
pause
w,500
p,�� ����� � ������� 0, ��� ��� � ��� ��������
w,500
1-2,color=red
1,color=yellow
p,DFS ������ ���������� ��� ������� 2
2,color=lime/red
pause
w,500
p,�� ����� � ������� 1, ��� ��� � ��� ��������
w,500
2-3,color=red
2,color=yellow
p,DFS ������ ���������� ��� ������� 3
3,color=lime
pause
w,500
p,�� ����� � ������� 2, ��� ��� � ��� ��������
w,500
1-3,color=gray;red
p,�� ����� � ������� 1, ��� ��� � ��� ��������
w,500
0-3,color=gray
p,�� ����� � ������� 0, ��� ��� � ��� ��������
w,500
p,��� ���� �� ������� 3 ���������, ������������ �� �������
3,shape=box,color=red,label=3;dist: 3
w,500
p,��������� � ������� 2, �������, ��� �� �� ��� ��������
2,color=lime
pause
2-4,color=red
2,color=yellow
p,DFS ������ ���������� ��� ������� 4
4,color=lime
pause
w,500
p,�� ����� � ������� 2, ��� ��� � ��� ��������
w,500
p,��� ���� �� ������� 4 ���������, ������������ �� �������
4,shape=box,color=red,label=4;dist: 3
w,500
p,��������� � ������� 2, �������, ��� �� �� ��� ��������
2,color=lime
pause
2-5,color=red
2,color=yellow
p,DFS ������ ���������� ��� ������� 5
5,color=lime
pause
w,500
p,�� ����� � ������� 2, ��� ��� � ��� ��������
w,500
5-6,color=red
5,color=yellow
p,DFS ������ ���������� ��� ������� 6
6,color=lime
pause
w,500
p,�� ����� � ������� 5, ��� ��� � ��� ��������
w,500
p,��� ���� �� ������� 6 ���������, ������������ �� �������
6,shape=box,color=red,label=6;dist: 4
w,500
p,��������� � ������� 5, �������, ��� �� �� ��� ��������
5,color=lime
pause
5-7,color=red
5,color=yellow
p,DFS ������ ���������� ��� ������� 7
7,color=lime
pause
w,500
p,�� ����� � ������� 5, ��� ��� � ��� ��������
w,500
p,��� ���� �� ������� 7 ���������, ������������ �� �������
7,shape=box,color=red,label=7;dist: 4
w,500
p,��������� � ������� 5, �������, ��� �� �� ��� ��������
5,color=lime
pause
p,��� ���� �� ������� 5 ���������, ������������ �� �������
5,shape=box,color=red,label=5;dist: 3
w,500
p,��������� � ������� 2, �������, ��� �� �� ��� ��������
2,color=lime
pause
p,��� ���� �� ������� 2 ���������, ������������ �� �������
2,shape=box,color=red,label=2;dist: 2
w,500
p,��������� � ������� 1, �������, ��� �� �� ��� ��������
1,color=lime
pause
1-3,color=gray
p,�� ����� � ������� 3, ��� ��� � ��� ��������
w,500
p,��� ���� �� ������� 1 ���������, ������������ �� �������
1,shape=box,color=red,label=1;dist: 1
w,500
p,��������� � ������� 0, �������, ��� �� �� ��� ��������
0,color=lime
pause
0-3,color=gray
p,�� ����� � ������� 3, ��� ��� � ��� ��������
w,500
p,��� ���� �� ������� 0 ���������, ������������ �� �������
0,shape=box,color=red,label=0;dist: 0
w,500
`
