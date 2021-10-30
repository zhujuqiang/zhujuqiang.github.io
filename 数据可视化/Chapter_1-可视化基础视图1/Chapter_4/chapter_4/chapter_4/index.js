d3.json('./createNetwork.json').then(data => {
    let nodes = data.nodes
    let links = data.links
    // nodes = [{ "name": "Myriel", "group": "1" }, { "name": "Napoleon", "group": "1" }]
    // links = [{ 'source': 0, 'target': 1 }]
    let width = 1200
    let height = 600
    let colors = ["#a6cde3", "#1f78b4", "#b2af8a", "#33a02c", "#fc9a99", "#e31a1c", "#fdbf6f", "#ff7f00", "#cab2d6", "#6a3d9a", "#fddf99", "#b15928"]
    var svg = d3.select('svg')
    var simulation = d3.forceSimulation(nodes)
        .force("charge", d3.forceManyBody())
        .force("link", d3.forceLink(links))
        .force("center", d3.forceCenter(width / 4, height / 2))

    var Links = svg.selectAll('line').data(links).enter().append('line')
        .attr('x1', function (d) { return d.source.x })
        .attr('y1', function (d) { return d.source.y })
        .attr('x2', function (d) { return d.target.x })
        .attr('y2', function (d) { return d.target.x })
        .attr('stroke', '#999')

    var Nodes = svg.selectAll('circle').data(nodes).enter().append('circle')
        .attr('cx', d => d.x)
        .attr('cy', d => d.y)
        .attr('r', 4)
        .attr('fill', d => colors[d.group])
        .attr('stroke', '#FFF')

    simulation.on('tick', () => {
        Nodes.attr('cx', d => d.x).attr('cy', d => d.y)
        Links
            .attr('x1', d => d.source.x)
            .attr('y1', d => d.source.y)
            .attr('x2', d => d.target.x)
            .attr('y2', d => d.target.y)
    })
})