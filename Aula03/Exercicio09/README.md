<div align="center">

# 📐 Aula 03 · Exercício 09

### Distância Entre Dois Pontos

![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white)
![Aula](https://img.shields.io/badge/Aula-03-6f42c1?style=flat-square)
![Tema](https://img.shields.io/badge/Tema-Express%C3%B5es%20e%20Fun%C3%A7%C3%B5es%20Matem%C3%A1ticas-2ea44f?style=flat-square)

[⬅️ Anterior](../../Aula03/Exercicio07/README.md) · [📚 Aula 03](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula03/Exercicio10/README.md)

</div>

---

## 🎯 Objetivo

Calcular a distância euclidiana entre dois pontos do plano cartesiano.

## 🧠 Conceitos aplicados

- Geometria analítica
- `pow` para potência
- `sqrt` para raiz quadrada

**Bibliotecas:** `stdio.h` · `locale.h` · `math.h`

## 📥 Entradas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `cod1_x, cod1_y` | `float` | Coordenadas do 1º ponto |
| `cod2_x, cod2_y` | `float` | Coordenadas do 2º ponto |

## 📤 Saídas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `distancia` | `float` | Distância entre os pontos |

## ⚙️ Lógica

```text
distancia = √((x2 − x1)² + (y2 − y1)²)
```

## ▶️ Como executar

```bash
# Compilar
gcc exercicio09.c -o exercicio09 -lm

# Executar (Windows)
.\exercicio09.exe

# Executar (Linux / macOS)
./exercicio09
```

> [!NOTE]
> Este programa utiliza a biblioteca `math.h`. Em Linux/macOS, a flag `-lm` é necessária para vincular a biblioteca matemática. No Windows (MinGW / Code::Blocks) ela é opcional.

## 💻 Exemplo de execução

```text
Digite a coordenada x do 1º ponto: 0
Digite a coordenada y do 1º ponto: 0
Digite a coordenada x do 2º ponto: 3
Digite a coordenada y do 2º ponto: 4
A distância entre os pontos é 5.00.
```

## 📄 Código-fonte

➡️ [`exercicio09.c`](./exercicio09.c)

---

<div align="center">

[⬅️ Anterior](../../Aula03/Exercicio07/README.md) · [📚 Aula 03](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula03/Exercicio10/README.md)

</div>
