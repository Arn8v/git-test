//now, this one is simply for testing it myself.
//program = sum of all elements

function getsum(arr) {
    sum = 0
    for(let i of arr)
      sum += i 
    console.log("Sum = " + sum)
}

arr = [10,20,30,40,50]
getsum(arr)