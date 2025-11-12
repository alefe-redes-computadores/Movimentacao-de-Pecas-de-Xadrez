# ♟️ Movimentação de Peças de Xadrez

Projeto desenvolvido em **linguagem C**, com o objetivo de praticar **estruturas de repetição**, **loops aninhados** e **recursividade**, simulando o movimento das principais peças do xadrez no tabuleiro.

O projeto foi dividido em três etapas — **Nível Novato**, **Nível Aventureiro** e **Nível Mestre** — com aumento progressivo de dificuldade.  
Cada fase aprofunda o uso dos conceitos de programação de forma simples e prática.

---

## 🧩 Estrutura do Repositório

📁 **Arquivos do projeto:**
- `xadrez.c` → contém todas as peças (Torre, Bispo, Rainha e Cavalo) e suas movimentações.
- `README.md` → explicação geral do projeto e das três etapas.

---

## 🚀 Como Executar

1. Abra o arquivo `xadrez.c` em um compilador C (como **Dev-C++**, **Code::Blocks** ou **Replit**).  
2. Compile o programa.  
3. Execute para visualizar no console os movimentos de cada peça.  

Cada movimento é impresso linha por linha, mostrando a direção percorrida pela peça conforme o desafio.

---

## 🧠 Desafios do Projeto

### 🟢 Nível Novato – Movimentando as Peças do Xadrez
Primeiro contato com as estruturas de repetição **for**, **while** e **do-while**.  
Foram simulados os movimentos de três peças:

- **Torre:** cinco casas para a direita.  
- **Bispo:** cinco casas na diagonal para cima e à direita.  
- **Rainha:** oito casas para a esquerda.  

Cada tipo de peça foi controlado com uma estrutura de repetição diferente, mostrando a direção de cada casa percorrida.

---

### 🟡 Nível Aventureiro – Movimentando o Cavalo
Nesta fase, o foco foi trabalhar com **loops aninhados** (um dentro do outro).  
Foi implementado o movimento do **Cavalo**, que se move em formato de **“L”**:

- Duas casas para **baixo**,  
- Uma casa para **a esquerda**.  

O programa imprime as direções de cada etapa do movimento, separadas das peças anteriores por uma linha em branco.

---

### 🔵 Nível Mestre – Criando Movimentos Complexos
Etapa final do projeto, unindo **recursividade** e **loops complexos** para simular os movimentos das peças de forma mais avançada.

- A **Torre**, o **Bispo** e a **Rainha** passaram a ser controlados por **funções recursivas**, que chamam a si mesmas até completar o número de casas do movimento.  
- O **Bispo** também passou a usar **loops aninhados** dentro da recursão, para combinar movimento vertical e horizontal.  
- O **Cavalo** ganhou um movimento novo, em “L”, **duas casas para cima e uma para a direita**, com **loops mais complexos** e controle com `break` e `continue`.

Essa etapa fechou o projeto mostrando como a recursividade e o controle de fluxo podem trabalhar juntos para resolver situações mais elaboradas.

---

## 💡 Conceitos Trabalhados

- Estruturas de repetição (`for`, `while`, `do-while`)  
- Loops aninhados  
- Recursividade  
- Controle de fluxo (`break` e `continue`)  
- Organização e clareza de código  
- Impressão estruturada no console  

---

## 🏁 Conclusão

O projeto **“Movimentação de Peças de Xadrez”** foi uma forma prática de aplicar os principais conceitos de **repetição e lógica** na linguagem C.  
Cada etapa trouxe uma nova forma de pensar a programação, desde a repetição simples até a recursiva, mostrando como é possível criar comportamentos complexos com comandos básicos bem estruturados.

> 💬 *A prática é o caminho para entender a lógica. Cada peça se move diferente, mas o aprendizado é o mesmo: pensar em passos e repetições.*

---

## 👨‍💻 Autor

**Álefe Jôhsefe de Brito Gomes**  
Estudante de Redes de Computadores – Estácio  
Repositório criado para os desafios da disciplina de **Programação em C**.  
📘 GitHub: [@alefe-redes-computadores](https://github.com/alefe-redes-computadores)
