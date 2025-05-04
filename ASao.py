graph = {
    'A' : [('B',4,11),('C',3,11)],
    'B' : [('F',5,11),('E',12,4)],
    'C' : [('D',7,6),('E',10,4)],
    'D' : [('E',2,4),],
    'E' : [('Z',5,0)],
    'F' : [('Z',16,0)],
}

def h(node):
    h = {
        'A':11,
        'B':11,
        'C':11,
        'D':6,
        'E':4,
        'F':0,
        'Z':0
    }
    return h[node]

def print_path_and_cost(start, goal, parent, g):
    path = []
    current = goal
    while current != start:
        path.append(current)
        current = parent[current]
    path.append(start)
    path.reverse()
    print("duong di: ", ' -> '.join(path))
    print("C(p) = ", g[goal])

def A_star(graph, start, goals):
    MO = [start] # tap mo chua dinh start
    DONG = []
    g = {start: 0} # cho phi tu start den dinh khac
    f = {start: h(start)} # gia tri f(n) cho moi dinh
    parent = {} # luu tru cha cua moi dinh
    while MO:
        min_f = float('inf')
        min_node = None
        for node in MO:
            if f[node] < min_f:
                min_f = f[node]
                min_node = node
        n = min_node
        if n in goals:
            print_path_and_cost(start, n, parent, g)
            print(parent)
            return True
        MO.remove(n)
        DONG.append(n)
        for m, cost_g, cost_h in graph.get(n,[]):
            cost_g_new = g[n] + cost_g #chi phi moi tu start den m
            if m not in MO and m not in DONG:
                # mo rong dinh m
                g[m] = cost_g_new
                f[m] = g[m] + cost_h
                parent[m] = n
                MO.append(m)
            elif m in MO and g[m] > cost_g_new:
                # cap nhat dinh m neu co chi phi tot hon
                g[m] = cost_g_new
                f[m] = g[m] + cost_h
                parent[m] = n
    return False

print("A*")
A_star(graph,'A',['Z','F'])