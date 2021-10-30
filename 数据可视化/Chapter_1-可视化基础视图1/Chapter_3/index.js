var conf={
    height:1000,
    width:800
}

var data=[]
for(let i=1;i<=100;i++)
{
    data.push(Math.random()*100);
}
// console.log(data)
var svg=d3.select('svg')
        .attr("width",conf.width)
        .attr("height",conf.height);

var colors = d3.scaleLinear()
            .domain([0,d3.max(data)])
            .range(["#113f2b","#aae392"]);

var g=svg.append("g")

g.selectAll("rect")
    .data(data)
    .join("rect")
    .attr("x",function(d,i){
        return ((i+20)%20)*30;
    })
    .attr("y",function(d,i){
        return parseInt(i/20)*30;
    })
    .attr("width",28)
    .attr("height",28)
    .attr("fill",(d,i)=>colors(d));