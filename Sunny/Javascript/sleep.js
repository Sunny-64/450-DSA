async function sleep(millis) {
    return await new Promise(resolve => setTimeout(resolve, millis))
}


const millis = 100
console.log("first")
sleep(millis)
.then(res => {
    console.log(res)
})
.catch(err => {
    console.log(err)
})

console.log("third")