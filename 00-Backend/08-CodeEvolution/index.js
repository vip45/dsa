<<<<<<< HEAD
function greet(name){
    console.log(`Hello ${name}`);
}

function greetV(callback){
    const name = "Vipin";
    callback(name);
}

greetV(greet);
=======
const crypto = require('crypto');

const MAX_CALLS=9;

const start = Date.now();
for(let i=0;i<MAX_CALLS;i++){
  crypto.pbkdf2("password","salt",100000,512,"sha512",()=>{
    console.log(`Hash: ${i+1}`, Date.now()-start);
  })
}

// const start = Date.now();
// crypto.pbkdf2Sync("password","salt",100000,512,"sha512");
// crypto.pbkdf2Sync("password","salt",100000,512,"sha512");
// console.log("Hash : ",Date.now() - start);

// const { log } = require("node:console");
// const http = require("node:http");
// const fs = require("fs");

// const server = http.createServer((req, res) => {
//   // res.end(req.url);

//   if (req.url === "/") {
//     res.writeHead(200, { "Content-Type": "text/plain" });
//     res.end("Home Page");
//   } else if (req.url === "/about") {
//     res.writeHead(200, { "content-type": "text/play" });
//     res.end("About Page");
//   } else if (req.url === "/api") {
//     res.writeHead(200, { "content-type": "application/json" });
//     res.end(
//       JSON.stringify({
//         firstName: "Bruce",
//         lastName: "Wayne",
//       })
//     );
//   } else {
//     res.writeHead(404);
//     res.end("Page not found");
//   }
// });

// server.listen(3000, () => {
//   log("Server running on 3000");
// });

// const { log } = require("console");
// const zlib = require("zlib");
// const fs = require("fs");

// const gzip = zlib.createGzip();

// const readableStream = fs.createReadStream("./file.txt", {
//   encoding: "utf-8",
//   highWaterMark: 2,
// });

// readableStream.pipe(gzip).pipe(fs.WriteStream("./file2.txt.gz"));

// const writeableStream = fs.createWriteStream("./file2.txt");

// readableStream.pipe(writeableStream);

// readableStream.on("data", (chunk) => {
//   log(chunk);
//   writeableStream.write(chunk);
// });
// const { log } = require('console');
// const fs = require('node:fs/promises');

// async function readFile() {
//   try{
//     const data = await fs.readFile('./file.txt','utf-8')
//     log(data)
//   } catch (err){
//     log(err)
//   }
// }

// readFile();

// log('first')
// fs.readFile('./file.txt','utf-8')
// .then(data=> log(data))
// .catch(error=>log(error))
// log('second')

// const { log } = require("console");
// const fs = require("fs");

// log("first");
// const fileContent = fs.readFileSync("./file.txt", "utf-8");
// log(fileContent);
// log("second");

// fs.readFile("./file.txt", "utf-8", (error, data) => {
//   if (error) {
//     log(error);
//   } else {
//     log(data);
//   }
// });
// log("third");

// fs.writeFileSync("./greet.txt", "Hello World!");
// fs.writeFile("./greet.txt", " Hello Vishwas!",{flag:'a'}, (err) => {
//   if (err) {
//     log(err);
//   }else{
//     log("File written")
//   }
// });
>>>>>>> 3752c443955c2c50dbb235970bf9a4bc46d9360d
