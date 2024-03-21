// Desenvolva o código em JavaScript de um programa que soma números inteiros informados 
// pelo usuário até que um número negativo seja informado e então imprime o resultado da 
// soma na tela.

let x = 0
let y = 0

while (x >= 0) {
    x = parseInt(prompt("Digite o valor de x: "))

    if(x < 0){
        break
    }

    y += x
}

console.log("O resultado da soma é " + y)