const express = require("express");
const app = express();
const path = require("path");

app.get("/",(req,res)=>{
    console.log(`connection from ${req.host}`)
    res.sendFile(path.join(__dirname + '/test.html'));
})



app.listen(3000,()=>{console.log("The server is listening.")});
