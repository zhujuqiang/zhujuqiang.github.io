var Data = [];
for (let i = 0; i < 200; i++) {
    Data.push({
        x: Math.random() * 1200,
        y: Math.random() * 600
    })
}
var svg = d3.select('svg')
svg.selectAll('circle').data(Data).enter().append('circle')
    .attr('cx', function (d, i) {
        return d.x
    })
    .attr('cy', function (d, i) {
        return d.y
    })
    .attr('r', 5)
    .attr('fill', 'green')
    .attr('stroke', 'black')