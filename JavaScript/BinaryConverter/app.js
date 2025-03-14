let myNumber=1000;
let binary='';
while(myNumber!==0){
    if(myNumber%2===1){
        binary='1'+binary;
    }else{
        binary='0'+binary;
    }
    myNumber=Math.floor(myNumber/2);
}
console.log(binary);