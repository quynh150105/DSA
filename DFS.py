from collections import defaultdict

class Node:
    def __init__(self,ten, Cha = None):
        self.ten = ten
        self.Cha = Cha
    def display(self):
        print(self.ten)

data = defaultdict(list) # tao cay
data['A'] = ['B','C','D']
data['B'] = ['M','N']
data['C'] = ['L']
data['D'] = ['O','P']
data['M'] = ['X','Y']
data['N'] = ['U','V']
data['O'] = ['I','J']
data['Y'] = ['R','S']
data['V'] = ['G','H']

# ham kiem tra
def KiemTra(tam, MO):
    for v in MO:
        if v.ten == tam.ten:
            return True
        return False
    
def DuongDi(n):
    print(n.ten)
    if n.Cha != None:
        DuongDi(n.Cha)
    else:
        return

# thuat toan tim kiem theo chieu sau DFS
def DFS(To, Tg):
    MO = []
    DONG = []
    MO.append(To)
    
    while(True):
        if len(MO) == 0:
            print("tim kiem khong thanh cong")
            return
        n = MO.pop(0)

        if n.ten == Tg.ten:
            print("tim thay duong di")
            DuongDi(n)
            return
        
        DONG.append(n)
        pos = 0
        for v in data[n.ten]:
            tam = Node(v)
            ok1 = KiemTra(tam,MO)
            ok2 = KiemTra(tam,DONG)
            if not ok1 and not ok2:
                MO.insert(pos,tam)
                pos +=1
                tam.Cha = n

DFS(Node('A'),Node('R'))