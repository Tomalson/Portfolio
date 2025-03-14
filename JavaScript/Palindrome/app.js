function isPalindrome(word){
    let lowerCase=word.toLowerCase();
    let check=lowerCase.split('').reverse().join('');
    return check===lowerCase;
}
let result = isPalindrome('racecar');
if(result){
    console.log('yes');
}else{
    console.log('No');
}