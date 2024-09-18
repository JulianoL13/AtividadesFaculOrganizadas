function soma(event) {
  const num1 = parseFloat(document.getElementById("numero1").value);
  const num2 = parseFloat(document.getElementById("numero2").value);
  const resultado = num1 + num2;
  document.getElementById("display").value = resultado;
  event.preventDefault();
}

function subtracao(event) {
  const num1 = parseFloat(document.getElementById("numero1").value);
  const num2 = parseFloat(document.getElementById("numero2").value);
  const resultado = num1 - num2;
  document.getElementById("display").value = resultado;
  event.preventDefault();
}

function multiplicacao(event) {
  const num1 = parseFloat(document.getElementById("numero1").value);
  const num2 = parseFloat(document.getElementById("numero2").value);
  const resultado = num1 * num2;
  document.getElementById("display").value = resultado;
  event.preventDefault();
}

function divisao(event) {
  const num1 = parseFloat(document.getElementById("numero1").value);
  const num2 = parseFloat(document.getElementById("numero2").value);
  if (num2 !== 0) {
    const resultado = num1 / num2;
    document.getElementById("display").value = resultado;
  } else {
    document.getElementById("display").value = "Erro: Divisão por zero!";
  }
  event.preventDefault();
}

function clear(event) {
  document.getElementById("numero1").value = "";
  document.getElementById("numero2").value = "";
  document.getElementById("display").value = "";
  event.preventDefault();
}