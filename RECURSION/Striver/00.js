let n = 10;
function print(param) {
  if (param < 0) {
    return;
  }
  console.log(param);
  print(param - 1);
}

print(n);
