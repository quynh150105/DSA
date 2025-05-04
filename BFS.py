from collections import defaultdict

class Node:
    def __init__(self,ten,cha = None):
        self.ten = ten
        self.cha = cha

    def display(self):
        print(self.ten)

data = defaultdict(list)

data['A'] = ['B','C','D']
data['B'] = ['M','N']
data['C'] = ['L']
data['D'] = ['O','P']
data['M'] = ['X','Y']
data['N'] = ['U','V']
data['O'] = ['I','J']
data['Y'] = ['R','S']
data['V'] = ['G','H']

def kiemTra(tam, MO):
    for v in MO:
        if v.ten == tam.ten:
            return True
        return False

def DuongDi(n):
    print(n.ten)
    if n.cha != None:
        DuongDi(n.cha)
    else:
        return
    
# Thuat toans BFS

def BFS(To, Tg):
    MO = []
    DONG = []
    MO.append(To)
    while(True):
        if len(MO) == 0:
            print("tim kiem khong thanh cong")
            return
        n = MO.pop(0)
        if n.ten == Tg.ten:
            print("Tim kiem thanh cong")
            DuongDi(n)
            return
        DONG.append(n)
        for v in data[n.ten]:
            tam = Node(v)
            ok1 = kiemTra(tam,MO)
            ok2 = kiemTra(tam,DONG)
            if not ok1 and not ok2:
                MO.append(tam)
                tam.cha = n

BFS(Node('A'),Node('N'))