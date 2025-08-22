const express = require("express");
const app = express();
const userModel = require("./usermodel");


app.get("/", (req, res) => {
  res.send("Hey");
});


app.get("/create", async (req, res) => {
    let createdUser = await userModel.create({
    name: "Harsh",
    email: "harsh@gmail.com",
    username: "harsh",
  });

  res.send(createdUser);
});
app.listen(3000);
