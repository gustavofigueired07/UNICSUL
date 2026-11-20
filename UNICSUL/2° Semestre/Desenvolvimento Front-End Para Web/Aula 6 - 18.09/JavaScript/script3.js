// Criar variável
let numero = 0;
// Busca id="numero"
const elementoNumero = document.getElementById("numero");
// Busca id="aumenta"
document.getElementById("aumentar").addEventListener("click", function(){
    // O operador ++
    numero++;
    // Atualizar o texto
    elementoNumero.textContent = numero;
});
// Buscar o botão
document.getElementById("diminuir").addEventListener("click", function(){
    numero--;
    // Atualizar o valor
    elementoNumero.textContent = numero;
});
document.getElementById("zerar").addEventListener("click", function(){
    numero = 0;
    // Atualizar o valor
    elementoNumero.textContent = numero;
});