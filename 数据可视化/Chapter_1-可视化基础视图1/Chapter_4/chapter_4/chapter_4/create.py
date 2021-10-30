import csv
import json

flag = 0
nodes = []
nodesName = []
with open('./nodes.csv','r') as csvFile:
    reader = csv.reader(csvFile)
    for line in reader:
        if flag == 0:
            flag = 1
            continue
        nodes.append({
            'name':line[0],
            'group':line[1]
        })
        nodesName.append(line[0])

flag = 0
links = []
with open('./links.csv','r') as csvFile:
    reader = csv.reader(csvFile)
    for line in reader:
        if flag == 0:
            flag = 1
            continue
        links.append({
            'source':nodesName.index(line[0]),
            'target':nodesName.index(line[1]),
            'value':line[2]
        })
output = {
    'nodes':nodes,
    'links':links
}
with open('./createNetwork.json','w') as f:
    json.dump(output,f)
print('write over!!!')