/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
var join = function(arr1, arr2) {
     const cache = {};
    for (const item of [...arr1, ...arr2]) {
        cache[item.id] = {...(cache[item.id] || {}), ...item};
    }

    var answer = [];
    for (const key in cache) {
        answer.push(cache[key]);
    }
    
    return answer;
};