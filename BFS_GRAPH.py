import collections

graph= {'A':['B','C','D'], 'B':['E'], 'C':['D','E'], 'D':[], 'E':[]}
def bfs(graph, root):
    visited = set()
    queue= collections.deque(root)
    while queue:
        vertex=queue.popleft()
        visited.add(vertex)
        for i in graph[vertex]:
            if i not in visited:
                queue.append(i)
    print(visited)

bfs(graph, 'A')
