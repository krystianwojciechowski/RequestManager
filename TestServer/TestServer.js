const express = require("express");
const app = express();


app.get("/",(req,res)=>{
    console.log(`connection from ${req.host}`)
    res.send("Your request has been accepted");
})



app.listen(3000,()=>{console.log("The server is listening.")});