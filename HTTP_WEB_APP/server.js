const express = require("express");
const cors = require("cors");

const app = express();
app.use(cors());
app.use(express.json());

let latestTemp = 0;

app.post("/data",(req,res)=>{
    latestTemp = req.body.temperature;
    console.log("received:",latestTemp);
    res.send("OK");
});

app.get("/data",(req,res)=>{
    res.json({temperature:latestTemp});
});

app.listen(3000,()=>{
    console.log("server running at port 3000");
});
