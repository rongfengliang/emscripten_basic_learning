const app = require("./build/myadd")
app().then((instance) => {
  console.log(instance._dalongdemoadd(1,3)); // direct calling works
})