// this is an array.js file solely meant for testing github.

function getindex(arr1, arr) {
  for(let i in arr)
      arr1.push(i)
  console.log("Indexes = " + arr1)
}

arr = [1,2,3,4,5]
arr1 = []
getindex(arr1,arr)