
let dp = new Array(100);
for(let i=0; i < 100; i++)
  dp[i] = new Array(100).fill(0);
let s1, s2;
const editDistance = function (s1, s2) {
  s1 = s1;
  s2 = s2;
  return editDistanceHelper(s1.length-1, s2.length-1);
}

const editDistanceHelper  = function (idx1, idx2) {
  if(idx1 < 0)
    return idx2 + 1;
  if(idx2 < 0)
    return idx1 + 1;
  if(dp[idx1][idx2])
    return dp[idx1][idx2];
 if(s1[idx1] == s2[idx2]){
  return dp[idx1][idx2] = editDistanceHelper(idx1-1, idx2-1);
 } else {
  let rep = 1 + editDistanceHelper(idx1-1, idx2-1);
    let ins = 1 + editDistanceHelper(idx1, idx2-1);
    let del = 1 + editDistanceHelper(idx1-1, idx2);
    return dp[idx1][idx2] = min(rep, min(ins,del));
 }
}

const min = function(a, b) {
  return a < b ? a : b ;
}

class EditDistance {
  constructor(s1="", s2=""){
    this.s1 = s1;
    this.s2 = s2;
  }
  min(a, b){
    return a < b ? a : b;
  }
  editDistanceHelper = function(idx1, idx2) {
    if(idx1 < 0)
      return idx2 + 1;
    if(idx2 < 0)
      return idx1 + 1;
    if(this.dp[idx1][idx2])
      return this.dp[idx1][idx2];
   if(this.s1[idx1] == this.s2[idx2]){
    return this.dp[idx1][idx2] = this.editDistanceHelper(idx1-1, idx2-1);
   } else {
    let rep = 1 + this.editDistanceHelper(idx1-1, idx2-1);
      let ins = 1 + this.editDistanceHelper(idx1, idx2-1);
      let del = 1 + this.editDistanceHelper(idx1-1, idx2);
      return this.dp[idx1][idx2] = this.min(rep, this.min(ins,del));
   }
  }
   editDistance(s1="", s2="") {
     this.dp = new Array(100);
     for(let i=0; i < 100; i++){
       this.dp[i] = new Array(100).fill(0);
     }
     debugger;
     this.s1 = s1 || this.s1;
     this.s2 = s2 || this.s2;
    return this.editDistanceHelper(this.s1.length-1, this.s2.length-1);
  }
}


------


function editDistance(s1, s2) {
  let dp = new Array(100)
  for(let i=0; i < 100; i++){
    dp[i] = new Array(100);
  }

  function min(a, b){
    return a < b ? a : b ;
  }
  function editDistanceHelper(idx1, idx2) {
   debugger;
    if(idx1 < 0)
      return idx2 + 1;
    if(idx2 < 0)
      return idx1 + 1;

    if(dp[idx1][idx2])
      return dp[idx1][idx2];

   if(s1[idx1] == s2[idx2]){
   	return dp[idx1][idx2] = editDistanceHelper(idx1-1, idx2-1);
   } else {
   	let rep = 1 + editDistanceHelper(idx1-1, idx2-1);
      let ins = 1 + editDistanceHelper(idx1, idx2-1);
      let del = 1 + editDistanceHelper(idx1-1, idx2);
      return dp[idx1][idx2] = min(rep, min(ins,del));
   }
  }
  return  editDistanceHelper(s1.length-1, s2.length-1);
}
