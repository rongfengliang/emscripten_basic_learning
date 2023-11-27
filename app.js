const app = require("./build/myadd")
app().then((instance) => {
  console.log(instance._dalongdemoadd(1,3));
  let sub_result = instance._mysub(333,10);
  console.log(sub_result); 

})


const dalong = require("./build/mydalong")
dalong().then((instance) => {
  console.log(instance._dalong(1,3));
})