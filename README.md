# Decodificador-DTMF
DTMF é a sigla em inglês de "Dual-Tone Multi-Frequency", os tons de duas freqüências utilizados na discagem dos telefones. 

Nos primeiros telefones a discagem era feita através de um "disco" que gerava uma seqüência de pulsos na linha telefônica ("discagem decádica" ou "discagem usando sinalização decádica"). Ao se ocupar a linha, o "laço" ("loop") era fechado e, ao se efetuar a discagem, ocorriam aberturas periódicas deste "laço", tantas vezes quanto o número discado: para a discagem do 1, uma abertura, para a discagem do 2, duas aberturas, e assim sucessivamente até o 0 (zero) que, na verdade, significava 10 aberturas. Com o advento dos telefones com teclado, das centrais telefônicas mais modernas e com a disseminação dos filtros (primeiro os analógicos, depois os digitais), passou-se a utilizar a sinalização multifreqüencial, uma combinação de tons (os DTMFs vulgarmente conhecidos em inglês por touch tones) para discagem. A sinalização DTMF foi desenvolvida nos laboratórios Bell (Bell Labs) visando permitir a discagem DDD, que usa enlaces sem fio como os de micro-ondas e por satélite. 

O DTMF, basicamente, é um sitema que juntas duas frequências sem relação harmonica - uma alta e outra baixa - por tecla para enviar os dados. Essa tecnologia foi muito importante para o avanço da qualidade dos serviços de redes telefônicas, pois melhorou a qualidade das ligações. No sistema antigo a esse, os dados eram transmitidos por meio de uma única frequência por teclas, por isso, muitas vezes a pessoa reproduziu tal frequência, discando as teclas indesejadamente durante as ligações. Quando o sistema DTMF passou a ser usado, essa situação tornou-se praticamente impossivel, uma vez que reproduzir a combinação de duas frequencias distintas é muito improvável.

 As combinações de frequências de cada tecla são mostradas na figura abaixo:
<p><img src="https://raw.githubusercontent.com/raquelester/Decodificador-DTMF/master/Tone%20Dialing1.gif" alt="" width="300" height="303" /></p>


# FUNCIONAMENTO

 O projeto funcionará por meio de um circuito utilizando o decodificador DTMF em conjunto com o arduino. Esse circuito interligará um aparelho celular a um dispositivo eletrônico por meio da saída de áudio do fone de ouvido o celular.  Sempre que uma tecla é digitada no celular ou durante uma chamada o outro telefone que está em comunicação com o celular digita um número, este número é decodificado para um sinal que chamamos de DTMF, ou seja, duplo tom multi freqüência. 
 
 O DTMF possui 4 entrados por onde entraram o tom da tecla digitada (VP, VN, GS e VREF) e 6 saídas (DV, D3, D2, D1, D0 e OE).
 Observe no esquema no circuito abaixo:
 


 
 
