const fs = require("fs");

fs.writeFile("hey.txt", "Hey hello kaise h", function (err) {
    if(err)console.error(err);
    else console.log("done");
});

