""" tao do thi"""
graph = {
    "A":{"B":2, "C": 4, "F": 6},
    "B":{},
    "C":{"D":8, "E": 2},
    "D": {},
    "E": {},
    "F": {"G": 5, "H": 1},
    "G": {},
    "H":{}
}

""" in ra duong di va chi phi"""
def print_path_and_cost(start, goal, parent, g):
    path= []
    current = goal
    while current != start:
        path.append(current)
        current = parent[current]
    path.append(start)
    path.reverse()
    print("duong di: ", ' -> '.join(path))
    print("C(p) = ", g[goal])

""" ham AT"""
def AT(graph, start, goals):
    MO = [start] # danh sach cac dinh da duoc duyet
    g = {start:0} # chi phi toi tung dinh
    DONG = [] # danh sach cac dinh da xet cong
    parent = {} # luu tru cha cua moi dinh

    while MO:
        # lay dinh n co chi phi g(n) nho nhat tu MO
        min_cost = float('inf')
        for vertex in MO:
            if vertex in g:
                cost = g[vertex]
            else:
                cost = float('inf')
            if cost < min_cost:
                min_cost = cost
                n = vertex
        
        if n in goals:
            print_path_and_cost(start, n, parent, g)
            return True
        
        MO.remove(n) # xoa dinh n khoi tap MO
        DONG.append(n) # them dinh n vao tap da xet

        for m in graph.get(n,{}): #duyet qua cac dinh ke cua n
            cost = graph[n][m]
            new_cost = g.get(n, float('inf')) + cost

            # neu m da co cha va duong di moi ngan hon
            if m in parent and new_cost < g[m]:
                g[m] = new_cost
                parent[m] = n
            
            # neu m chua duoc duyet
            elif m not in MO and m not in DONG:
                g[m] = new_cost
                parent[m] = n
                MO.append(m)

    return False # khong tim thay duong di den dich

start = "A"
goals = ["D","H"]
AT(graph,start,goals)