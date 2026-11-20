// localizar o botão
let botao = document.getElementById("meuBotao");
// criar um evento
botao.addEventListener("click", function() {
    // localizar o parágrafo
    let mensagem = document.getElementById("mensagem");
    // alterar o texto
    mensagem.innerHTML = "Você clicou no botão";
});
