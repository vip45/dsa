const { log } = require("console");
const express = require("express");
const app = express();

app.use(function (req,res,next) { 
    console.log("Middleware");
    next();
 });

// app.get(route,requestHandler)
app.get("/", function (req, res) {
  res.send("Champion");
});
app.get("/about", function (req, res) {
  res.send("About");
});
app.get("/profile", function (req, res) {
  res.send("Profile");
});


app.listen(3000)