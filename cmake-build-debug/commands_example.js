window.prog=`
1,x=100,y=100
2,x=200,y=100
3,x=100,y=200,shape=star
1-2,label=3
1-3,label=4
2-3,label=15
3,color=red
draw
w,500
2,color=yellow
p,��������� ������� 2 � ������ ����
pause
1-3,label=55
w,500
1-3,label=65
w,500
1-3,label=75;YES,color=green
p,��������� ����� 1-3 � ������� ���� � �������� �� �� 75 YES (� ��� ������)
pause
2,color=red;yellow,shape=star
p,��������� ������� 2 � ������� ����, ���� ������ �����
2,label=2: true
`

