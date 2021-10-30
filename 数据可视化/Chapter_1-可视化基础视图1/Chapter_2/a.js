// 数据准备
var dataset = [
    { value: 40, name: 'rose 1' },
    { value: 33, name: 'rose 2' },
    { value: 28, name: 'rose 3' },
    { value: 22, name: 'rose 4' },
    { value: 20, name: 'rose 5' },
    { value: 15, name: 'rose 6' },
    { value: 12, name: 'rose 7' },
    { value: 10, name: 'rose 8' }
]

// 画布
var svg = d3.select('svg')

var pieData = d3.pie().value(d => d.value)(dataset)

var arc = d3.arc()
    .innerRadius(30)
    .outerRadius(100)

var colors = [
    '#5470c6',
    '#91cc75',
    '#fac858',
    '#ee6666',
    '#73c0de',
    '#3ba272',
    '#fc8452',
    '#9a60b4',
    '#ea7ccc'
]

// 渲染path标签
svg.selectAll('path').data(pieData).enter().append('path')
    .attr('d', function (d) {
        var arc = d3.arc()
            .innerRadius(30)
            .outerRadius(d.value * 6)
            .cornerRadius(8)
            .padAngle(Math.PI / 180)
        return arc(d)
    })
    .attr('transform', 'translate(300,300)')
    .attr('fill', function (_, i) {
        return colors[i]
    })
    .attr('fill-opacity', 0.8)
    .attr('stroke', function (_, i) {
        return colors[i]
})

