#include(hor.inc)

[top]
components : hor

[hor]
type : cell
dim : (20,20)
delay : transport
defaultDelayTime : 1000
border : nonwrapped

neighbors :                      hor(0,-2)
neighbors :           hor(-1,-1) hor(0,-1) hor(1,-1)
neighbors : hor(-2,0) hor(-1,0)  hor(0,0)  hor(1,0)  hor(2,0)
neighbors :           hor(-1,1)  hor(0,1)  hor(1,1)
neighbors :                      hor(0,2)

initialValue : 0
initialCellsValue : hor.val
localtransition : reglas

zone : anguloSupIzq { (0,0) }
zone : anguloSupDer { (19,0) }
zone : anguloInfIzq { (0,19) }
zone : anguloInfDer { (19,19) }
zone : bordeSuperior { (1,0)..(18,0) }
zone : bordeIzquierdo { (0,1)..(0,18) }
zone : bordeDerecho { (19,1)..(19,18) }
zone : bordeInferior { (1,19)..(18,19) }

[reglas]

% Soy una hormiga
% --- --- -------
% Veo si colisiono. Si colisiono, invierto mi direccion y me quedo quieto
% Si tengo direccion 0 (arriba)
rule : { (0,0) + 2 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 0 and ((#Macro(esHormiga19) and #Macro(dir19) = 3) or (#Macro(esHormiga99) and #Macro(dir99) = 1) or (#Macro(esHormiga08) and #Macro(dir08) = 2)) }
% Si tengo direccion 1 (izquierda)
rule : { (0,0) + 2 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 1 and ((#Macro(esHormiga19) and #Macro(dir19) = 2) or (#Macro(esHormiga20) and #Macro(dir20) = 3) or (#Macro(esHormiga11) and #Macro(dir11) = 0)) }
% Si tengo direccion 2 (abajo)
rule : { (0,0) - 2 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 2 and ((#Macro(esHormiga11) and #Macro(dir11) = 3) or (#Macro(esHormiga02) and #Macro(dir02) = 0) or (#Macro(esHormiga91) and #Macro(dir91) = 1)) }
% Si tengo direccion 3 (izquierda)
rule : { (0,0) - 2 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 3 and ((#Macro(esHormiga99) and #Macro(dir99) = 2) or (#Macro(esHormiga80) and #Macro(dir80) = 1) or (#Macro(esHormiga91) and #Macro(dir91) = 0)) }

% No colisiono. Tengo que ver si en la celda que queda libre pasara a haber
% o no una nueva hormiga. Si mas de una hormiga quieren esta celda, la misma
% queda vacia
% Casos en que mas de una hormiga se disputan el lugar, me quedo vacio
% Si tengo direccion 0 (arriba)
rule : { 0 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 0 and #Macro(esNada09) and #Macro(esHormiga10) and #Macro(dir10) = 3 and #Macro(esHormiga01) and #Macro(dir01) = 0 }
rule : { 0 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 0 and #Macro(esNada09) and #Macro(esHormiga10) and #Macro(dir10) = 3 and #Macro(esHormiga90) and #Macro(dir90) = 1 }
rule : { 0 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 0 and #Macro(esNada09) and #Macro(esHormiga01) and #Macro(dir01) = 0 and #Macro(esHormiga90) and #Macro(dir90) = 1 }
rule : { 0 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 0 and #Macro(esNada09) and #Macro(esHormiga01) and #Macro(dir01) = 0 and #Macro(esHormiga90) and #Macro(dir90) = 1 and #Macro(esHormiga10) and #Macro(dir10) = 3 }
% Si tengo direccion 1 (derecha)
rule : { 0 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 1 and #Macro(esNada10) and #Macro(esHormiga09) and #Macro(dir09) = 2 and #Macro(esHormiga90) and #Macro(dir90) = 1 }
rule : { 0 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 1 and #Macro(esNada10) and #Macro(esHormiga09) and #Macro(dir09) = 2 and #Macro(esHormiga01) and #Macro(dir01) = 0 }
rule : { 0 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 1 and #Macro(esNada10) and #Macro(esHormiga90) and #Macro(dir90) = 1 and #Macro(esHormiga01) and #Macro(dir01) = 0 }
rule : { 0 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 1 and #Macro(esNada10) and #Macro(esHormiga09) and #Macro(dir09) = 2 and #Macro(esHormiga90) and #Macro(dir90) = 1 and #Macro(esHormiga01) and #Macro(dir01) = 0 }
% Si tengo direccion 2 (abajo)
rule : { 0 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 2 and #Macro(esNada01) and #Macro(esHormiga90) and #Macro(dir90) = 1 and #Macro(esHormiga09) and #Macro(dir09) = 2 }
rule : { 0 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 2 and #Macro(esNada01) and #Macro(esHormiga09) and #Macro(dir09) = 2 and #Macro(esHormiga10) and #Macro(dir10) = 3 }
rule : { 0 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 2 and #Macro(esNada01) and #Macro(esHormiga90) and #Macro(dir90) = 1 and #Macro(esHormiga10) and #Macro(dir10) = 3 }
rule : { 0 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 2 and #Macro(esNada01) and #Macro(esHormiga09) and #Macro(dir09) = 2 and #Macro(esHormiga90) and #Macro(dir90) = 1 and #Macro(esHormiga10) and #Macro(dir10) = 3 }
% Si tengo direccion 3 (izquierda)
rule : { 0 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 3 and #Macro(esNada90) and #Macro(esHormiga09) and #Macro(dir09) = 2 and #Macro(esHormiga10) and #Macro(dir10) = 3 }
rule : { 0 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 3 and #Macro(esNada90) and #Macro(esHormiga10) and #Macro(dir10) = 3 and #Macro(esHormiga01) and #Macro(dir01) = 0 }
rule : { 0 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 3 and #Macro(esNada90) and #Macro(esHormiga09) and #Macro(dir09) = 2 and #Macro(esHormiga01) and #Macro(dir01) = 0 }
rule : { 0 } 1000 { #Macro(esHormiga00) and #Macro(dir00) = 3 and #Macro(esNada90) and #Macro(esHormiga09) and #Macro(dir09) = 2 and #Macro(esHormiga10) and #Macro(dir10) = 3 and #Macro(esHormiga01) and #Macro(dir01) = 0 }

% Si llegue aca es que hay una y solo una hormiga que quiere venir
% a esta celda, o bien no hay ninguna.
% Casos en que haya una sola hormiga volviendo al hormiguero
rule : { 21100 + if(randint(1)=0,0,3) } 1000 { #Macro(esHormiga00) and #Macro(esHormigaC01) and #Macro(dir01) = 0 and ((#Macro(dir00) = 0 and #Macro(esNadaHor09)) or (#Macro(dir00) = 1 and #Macro(esNadaHor10)) or (#Macro(dir00) = 2 and #Macro(esNadaHor01)) or (#Macro(dir00) = 3 and #Macro(esNadaHor90))) }
rule : { 21100 + if(randint(1)=0,0,3) } 1000 { #Macro(esHormiga00) and #Macro(esHormigaC90) and #Macro(dir90) = 1 and ((#Macro(dir00) = 0 and #Macro(esNadaHor09)) or (#Macro(dir00) = 1 and #Macro(esNadaHor10)) or (#Macro(dir00) = 2 and #Macro(esNadaHor01)) or (#Macro(dir00) = 3 and #Macro(esNadaHor90))) }
rule : { 21100 + if(randint(1)=0,0,3) } 1000 { #Macro(esHormiga00) and #Macro(esHormigaC09) and #Macro(dir09) = 2 and ((#Macro(dir00) = 0 and #Macro(esNadaHor09)) or (#Macro(dir00) = 1 and #Macro(esNadaHor10)) or (#Macro(dir00) = 2 and #Macro(esNadaHor01)) or (#Macro(dir00) = 3 and #Macro(esNadaHor90))) }
rule : { 21100 + if(randint(1)=0,0,3) } 1000 { #Macro(esHormiga00) and #Macro(esHormigaC10) and #Macro(dir10) = 3 and ((#Macro(dir00) = 0 and #Macro(esNadaHor09)) or (#Macro(dir00) = 1 and #Macro(esNadaHor10)) or (#Macro(dir00) = 2 and #Macro(esNadaHor01)) or (#Macro(dir00) = 3 and #Macro(esNadaHor90))) }

% Hay una sola hormiga buscando comida que quiere venir aca
rule : { 20000 + #Macro(nuevaDireccionComida) } 1000 { #Macro(esHormiga00) and #Macro(esHormigaB01) and #Macro(dir01) = 0 and ((#Macro(dir00) = 0 and #Macro(esNadaHor09)) or (#Macro(dir00) = 1 and #Macro(esNadaHor10)) or (#Macro(dir00) = 2 and #Macro(esNadaHor01)) or (#Macro(dir00) = 3 and #Macro(esNadaHor90))) }
rule : { 20000 + #Macro(nuevaDireccionComida) } 1000 { #Macro(esHormiga00) and #Macro(esHormigaB90) and #Macro(dir90) = 1 and ((#Macro(dir00) = 0 and #Macro(esNadaHor09)) or (#Macro(dir00) = 1 and #Macro(esNadaHor10)) or (#Macro(dir00) = 2 and #Macro(esNadaHor01)) or (#Macro(dir00) = 3 and #Macro(esNadaHor90))) }
rule : { 20000 + #Macro(nuevaDireccionComida) } 1000 { #Macro(esHormiga00) and #Macro(esHormigaB09) and #Macro(dir09) = 2 and ((#Macro(dir00) = 0 and #Macro(esNadaHor09)) or (#Macro(dir00) = 1 and #Macro(esNadaHor10)) or (#Macro(dir00) = 2 and #Macro(esNadaHor01)) or (#Macro(dir00) = 3 and #Macro(esNadaHor90))) }
rule : { 20000 + #Macro(nuevaDireccionComida) } 1000 { #Macro(esHormiga00) and #Macro(esHormigaB10) and #Macro(dir10) = 3 and ((#Macro(dir00) = 0 and #Macro(esNadaHor09)) or (#Macro(dir00) = 1 and #Macro(esNadaHor10)) or (#Macro(dir00) = 2 and #Macro(esNadaHor01)) or (#Macro(dir00) = 3 and #Macro(esNadaHor90))) }

% No viene nadie a la celda que yo ocupo
% Habia una hormiga buscando comida, conservo las feromonas
rule : { remainder(trunc((0,0)/10),100) * 100 } 1000 { #Macro(esHormigaB00) and ((#Macro(dir00) = 0 and #Macro(esNada09)) or (#Macro(dir00) = 1 and #Macro(esNada10)) or (#Macro(dir00) = 2 and #Macro(esNada01)) or (#Macro(dir00) = 3 and #Macro(esNada90))) }

% Habia una hormiga volviendo al hormiguero, dejo nuevas feromonas.
rule : { 100 + #Macro(dir00) } 1000 { #Macro(esHormigaC00) and ((#Macro(dir00) = 0 and #Macro(esNada09)) or (#Macro(dir00) = 1 and #Macro(esNada10)) or (#Macro(dir00) = 2 and #Macro(esNada01)) or (#Macro(dir00) = 3 and #Macro(esNada90))) }

% Casos en que soy una hormiga y encuentro comida
% Voy con direccion 0
rule : { 21002 } 1000 { #Macro(esHormigaB00) and #Macro(dir00) = 0 and #Macro(esComida09) }
% Voy con direccion 1
rule : { 21003 } 1000 { #Macro(esHormigaB00) and #Macro(dir00) = 1 and #Macro(esComida10) and not (#Macro(esHormigaB11) and #Macro(dir11) = 0) }
rule : { 21003 } 1000 { #Macro(esHormigaB00) and #Macro(dir00) = 1 and #Macro(esComida10) and #Macro(esHormigaB11) and #Macro(dir11) = 0 and #Macro(comida10) >= 2 }
% Voy con direccion 2
rule : { 21000 } 1000 { #Macro(esHormigaB00) and #Macro(dir00) = 2 and #Macro(esComida01) and not (#Macro(esHormigaB02) and #Macro(dir02) = 0) and not (#Macro(esHormigaB91) and #Macro(dir91) = 1) }
rule : { 21000 } 1000 { #Macro(esHormigaB00) and #Macro(dir00) = 2 and #Macro(esComida01) and #Macro(esHormigaB02) and #Macro(dir02) = 0 and not (#Macro(esHormigaB91) and #Macro(dir91) = 1) and #Macro(comida01) >= 2 }
rule : { 21000 } 1000 { #Macro(esHormigaB00) and #Macro(dir00) = 2 and #Macro(esComida01) and not (#Macro(esHormigaB02) and #Macro(dir02) = 0) and #Macro(esHormigaB91) and #Macro(dir91) = 1 and #Macro(comida01) >= 2 }
rule : { 21000 } 1000 { #Macro(esHormigaB00) and #Macro(dir00) = 2 and #Macro(esComida01) and #Macro(esHormigaB02) and #Macro(dir02) = 0 and #Macro(esHormigaB91) and #Macro(dir91) = 1 and #Macro(comida01) >= 3 }
% Voy con direccion 3
rule : { 21001 } 1000 { #Macro(esHormigaB00) and #Macro(dir00) = 3 and #Macro(esComida90) and not (#Macro(esHormigaB91) and #Macro(dir91) = 0) and not (#Macro(esHormigaB80) and #Macro(dir80) = 1) and not (#Macro(esHormigaB99) and #Macro(dir99) = 2) }
rule : { 21001 } 1000 { #Macro(esHormigaB00) and #Macro(dir00) = 3 and #Macro(esComida90) and #Macro(esHormigaB91) and #Macro(dir91) = 0 and not (#Macro(esHormigaB80) and #Macro(dir80) = 1) and not (#Macro(esHormigaB99) and #Macro(dir99) = 2) and #Macro(comida90) >= 2 }
rule : { 21001 } 1000 { #Macro(esHormigaB00) and #Macro(dir00) = 3 and #Macro(esComida90) and not (#Macro(esHormigaB91) and #Macro(dir91) = 0) and #Macro(esHormigaB80) and #Macro(dir80) = 1 and not (#Macro(esHormigaB99) and #Macro(dir99) = 2) and #Macro(comida90) >= 2 }
rule : { 21001 } 1000 { #Macro(esHormigaB00) and #Macro(dir00) = 3 and #Macro(esComida90) and not (#Macro(esHormigaB91) and #Macro(dir91) = 0) and not (#Macro(esHormigaB80) and #Macro(dir80) = 1) and #Macro(esHormigaB99) and #Macro(dir99) = 2 and #Macro(comida90) >= 2 }
rule : { 21001 } 1000 { #Macro(esHormigaB00) and #Macro(dir00) = 3 and #Macro(esComida90) and #Macro(esHormigaB91) and #Macro(dir91) = 0 and #Macro(esHormigaB80) and #Macro(dir80) = 1 and not (#Macro(esHormigaB99) and #Macro(dir99) = 2) and #Macro(comida90) >= 3 }
rule : { 21001 } 1000 { #Macro(esHormigaB00) and #Macro(dir00) = 3 and #Macro(esComida90) and #Macro(esHormigaB91) and #Macro(dir91) = 0 and not (#Macro(esHormigaB80) and #Macro(dir80) = 1) and #Macro(esHormigaB99) and #Macro(dir99) = 2 and #Macro(comida90) >= 3 }
rule : { 21001 } 1000 { #Macro(esHormigaB00) and #Macro(dir00) = 3 and #Macro(esComida90) and not (#Macro(esHormigaB91) and #Macro(dir91) = 0) and #Macro(esHormigaB80) and #Macro(dir80) = 1 and #Macro(esHormigaB99) and #Macro(dir99) = 2 and #Macro(comida90) >= 3 }
rule : { 21001 } 1000 { #Macro(esHormigaB00) and #Macro(dir00) = 3 and #Macro(esComida90) and #Macro(esHormigaB91) and #Macro(dir91) = 0 and #Macro(esHormigaB80) and #Macro(dir80) = 1 and #Macro(esHormigaB99) and #Macro(dir99) = 2 and #Macro(comida90) >= 4 }


% Soy una hormiga buscando comida, me muevo a una celda que quedara libre y nadie se mueve adonde yo estoy
rule : { 0 } 1000 { #Macro(esHormigaB00) and ((#Macro(esHormiga09) and #Macro(dir00) = 0) or (#Macro(esHormiga10) and #Macro(dir00) = 1) or (#Macro(esHormiga01) and #Macro(dir00) = 2) or (#Macro(esHormiga90) and #Macro(dir00) = 3)) and not (#Macro(esHormiga01) and #Macro(dir01) = 0) and not (#Macro(esHormiga90) and #Macro(dir90) = 1) and not (#Macro(esHormiga09) and #Macro(dir09) = 2) and not (#Macro(esHormiga10) and #Macro(dir10) = 3) }

rule : {30000} 1000 { #Macro(esHormigaB00) }

% Soy una celda vacia
% --- --- ----- -----
% Viene solo una hormiga b con direccion 0
rule : { #Macro(nuevaDireccionFeromonas) + 20000 } 1000 { #Macro(esNada00) and #Macro(fero00) and #Macro(esHormigaB01) and #Macro(dir01) = 0 and not (#Macro(esHormiga90) and #Macro(dir90) = 1) and not (#Macro(esHormiga09) and #Macro(dir09) = 2) and not (#Macro(esHormiga10) and #Macro(dir10) = 3) }
rule : { #Macro(nuevaDireccionComida) + 20000 } 1000 { #Macro(esNada00) and not #Macro(fero00) and #Macro(esHormigaB01) and #Macro(dir01) = 0 and not (#Macro(esHormiga90) and #Macro(dir90) = 1) and not (#Macro(esHormiga09) and #Macro(dir09) = 2) and not (#Macro(esHormiga10) and #Macro(dir10) = 3) }
% Viene solo una hormiga b con direccion 1
rule : { #Macro(nuevaDireccionFeromonas) + 20000 } 1000 { #Macro(esNada00) and #Macro(fero00) and not (#Macro(esHormiga01) and #Macro(dir01) = 0) and #Macro(esHormigaB90) and #Macro(dir90) = 1 and not (#Macro(esHormiga09) and #Macro(dir09) = 2) and not (#Macro(esHormiga10) and #Macro(dir10) = 3) }
rule : { #Macro(nuevaDireccionComida) + 20000 } 1000 { #Macro(esNada00) and not #Macro(fero00) and not (#Macro(esHormiga01) and #Macro(dir01) = 0) and #Macro(esHormigaB90) and #Macro(dir90) = 1 and not (#Macro(esHormiga09) and #Macro(dir09) = 2) and not (#Macro(esHormiga10) and #Macro(dir10) = 3) }
% Viene solo una hormiga b con direccion 2
rule : { #Macro(nuevaDireccionFeromonas) + 20000 } 1000 { #Macro(esNada00) and #Macro(fero00) and not (#Macro(esHormiga01) and #Macro(dir01) = 0) and not (#Macro(esHormiga90) and #Macro(dir90) = 1) and #Macro(esHormigaB09) and #Macro(dir09) = 2 and not (#Macro(esHormiga10) and #Macro(dir10) = 3) }
rule : { #Macro(nuevaDireccionComida) + 20000 } 1000 { #Macro(esNada00) and not #Macro(fero00) and not (#Macro(esHormiga01) and #Macro(dir01) = 0) and not (#Macro(esHormiga90) and #Macro(dir90) = 1) and #Macro(esHormigaB09) and #Macro(dir09) = 2 and not (#Macro(esHormiga10) and #Macro(dir10) = 3) }
% Viene solo una hormiga b con direccion 3
rule : { #Macro(nuevaDireccionFeromonas) + 20000 } 1000 { #Macro(esNada00) and #Macro(fero00) and not (#Macro(esHormiga01) and #Macro(dir01) = 0) and not (#Macro(esHormiga90) and #Macro(dir90) = 1) and not (#Macro(esHormiga09) and #Macro(dir09) = 2) and #Macro(esHormigaB10) and #Macro(dir10) = 3 }
rule : { #Macro(nuevaDireccionComida) + 20000 } 1000 { #Macro(esNada00) and not #Macro(fero00) and not (#Macro(esHormiga01) and #Macro(dir01) = 0) and not (#Macro(esHormiga90) and #Macro(dir90) = 1) and not (#Macro(esHormiga09) and #Macro(dir09) = 2) and #Macro(esHormigaB10) and #Macro(dir10) = 3 }

% Viene solo una hormiga c con direccion 0
rule : { 21100 + if(randint(1) = 0, 0, 3) } 1000 { #Macro(esNada00) and #Macro(esHormigaC01) and #Macro(dir01) = 0 and not (#Macro(esHormiga90) and #Macro(dir90) = 1) and not (#Macro(esHormiga09) and #Macro(dir09) = 2) and not (#Macro(esHormiga10) and #Macro(dir10) = 3) }
% Viene solo una hormiga c con direccion 1
rule : { 21100 + if(randint(1) = 0, 0, 3) } 1000 { #Macro(esNada00) and not (#Macro(esHormiga01) and #Macro(dir01) = 0) and #Macro(esHormigaC90) and #Macro(dir90) = 1 and not (#Macro(esHormiga09) and #Macro(dir09) = 2) and not (#Macro(esHormiga10) and #Macro(dir10) = 3) }
% Viene solo una hormiga c con direccion 2
rule : { 21100 + if(randint(1) = 0, 0, 3) } 1000 { #Macro(esNada00) and not (#Macro(esHormiga01) and #Macro(dir01) = 0) and not (#Macro(esHormiga90) and #Macro(dir90) = 1) and #Macro(esHormigaC09) and #Macro(dir09) = 2 and not (#Macro(esHormiga10) and #Macro(dir10) = 3) }
% Viene solo una hormiga c con direccion 3
rule : { 21100 + if(randint(1) = 0, 0, 3) } 1000 { #Macro(esNada00) and not (#Macro(esHormiga01) and #Macro(dir01) = 0) and not (#Macro(esHormiga90) and #Macro(dir90) = 1) and not (#Macro(esHormiga09) and #Macro(dir09) = 2) and #Macro(esHormigaC10) and #Macro(dir10) = 3 }

% Decremento las feromonas por el paso del tiempo
rule : { (0,0) - 10 } 1000 { #Macro(esNada00) and #Macro(fero00) }

% Soy una celda con comida
% --- --- ----- --- ------
rule : { if(#Macro(comida00) - (if(#Macro(esHormigaB01) and #Macro(dir01) = 0, 1, 0) + if(#Macro(esHormigaB90) and #Macro(dir90) = 1, 1, 0) + if(#Macro(esHormigaB09) and #Macro(dir09) = 2, 1, 0) + if(#Macro(esHormigaB10) and #Macro(dir10) = 3, 1, 0)) > 0, (#Macro(comida00) - (if(#Macro(esHormigaB01) and #Macro(dir01) = 0, 1, 0) + if(#Macro(esHormigaB90) and #Macro(dir90) = 1, 1, 0) + if(#Macro(esHormigaB09) and #Macro(dir09) = 2, 1, 0) + if(#Macro(esHormigaB10) and #Macro(dir10) = 3, 1, 0))) + 10000, 0 ) } 1000 { #Macro(esComida00) }


rule : {(0,0)} 10 {t}

[anguloSupIzq]
rule : {(0,0)} 10 {t}

[anguloSupDer]
rule : {(0,0)} 10 {t}

[anguloInfIzq]
rule : {(0,0)} 10 {t}

[anguloInfDer]
rule : {(0,0)} 10 {t}

[bordeSuperior]
% Viene una hormiga B del centro
rule : { 20002 } 1000 { #Macro(esNada00) and #Macro(esHormigaB01) and #Macro(dir01) = 0 and not #Macro(esHormigaC10) }
% Viene una hormiga C del centro y no colisiona
rule : { 21003 } 1000 { #Macro(esNada00) and #Macro(esHormigaC01) and #Macro(dir01) = 0 and not #Macro(esHormigaC10) }
% Viene una hormiga C del centro y colisiona
rule : { 21003 } 1000 { #Macro(esHormigaC01) and #Macro(dir01) = 0 and #Macro(esHormigaC10) and #Macro(dir10) = 3 }
% Viene una hormiga C por mi franja
rule : { 21003 } 1000 { #Macro(esHormigaC10) and #Macro(dir10) = 3 }
% Soy una hormiga C
% Si estoy llegando al hormiguero me convierto en una hormiga b
rule : { 20002 } 1000 { #Macro(esHormigaC00) and #Macro(dir00) = 3 and cellPos(0) = 1 }
% Sino, avanzo
rule : { 0 } 1000 { #Macro(esHormigaC00) and #Macro(dir00) = 3 }
% Soy una hormiga B
rule : { 0 } 1000 { #Macro(esHormigaB00) and #Macro(dir00) = 2 and #Macro(esNada01) and not ((#Macro(esHormiga91) and #Macro(dir91) = 1) or (#Macro(esHormiga11) and #Macro(dir11) = 3) or (#Macro(esHormiga02) and #Macro(dir02) = 0)) }

% Reglas para la ruptura del deadlock de dos hormigas al lado del hormiguero esperando salir
rule : { 21003 } 1000 { #Macro(esHormigaB00) and #Macro(dir00) = 2 and #Macro(esHormigaB91) and #Macro(dir91) = 1 }
rule : { 0 } 1000 { #Macro(esHormigaB00) and #Macro(dir00) = 2 and #Macro(esNadaHor01) }

rule : {(0,0)} 10 {t}


[bordeIzquierdo]
% Viene una hormiga B del centro
rule : { 20001 } 1000 { #Macro(esNada00) and #Macro(esHormigaB10) and #Macro(dir10) = 3 and not #Macro(esHormigaC01) }
% Viene una hormiga C del centro y no colisiona
rule : { 21000 } 1000 { #Macro(esNada00) and #Macro(esHormigaC10) and #Macro(dir10) = 3 and not #Macro(esHormigaC01) }
% Viene una hormiga C del centro y colisiona
rule : { 21000 } 1000 { #Macro(esHormigaC10) and #Macro(dir10) = 3 and #Macro(esHormigaC01) and #Macro(dir01) = 0 }
% Viene una hormiga C por mi franja
rule : { 21000 } 1000 { #Macro(esHormigaC01) and #Macro(dir01) = 0 }
% Soy una hormiga C
% Si estoy llegando al hormiguero me convierto en una hormiga b
rule : { 20001 } 1000 { #Macro(esHormigaC00) and #Macro(dir00) = 0 and cellPos(1) = 1 }
% Sino, avanzo
rule : { 0 } 1000 { #Macro(esHormigaC00) and #Macro(dir00) = 0 }
% Soy una hormiga B
rule : { 0 } 1000 { #Macro(esHormigaB00) and #Macro(esNada10) and not ((#Macro(esHormiga19) and #Macro(dir19) = 2) or (#Macro(esHormiga20) and #Macro(dir20) = 3) or (#Macro(esHormiga11) and #Macro(dir11) = 0)) }

rule : {(0,0)} 10 {t}


[bordeDerecho]
rule : { 20003 } 1000 { #Macro(esNada00) and #Macro(esHormigaB90) and #Macro(dir90) = 1 }
rule : { 0 } 1000 { #Macro(esHormiga00) and #Macro(esNada90) and not ((#Macro(esHormiga99) and #Macro(dir99) = 2) or (#Macro(esHormiga80) and #Macro(dir80) = 1) or (#Macro(esHormiga91) and #Macro(dir91) = 0)) }
rule : {(0,0)} 10 {t}

[bordeInferior]
rule : { 20000 } 1000 { #Macro(esNada00) and #Macro(esHormigaB09) and #Macro(dir09) = 2 }
rule : { 0 } 1000 { #Macro(esHormiga00) }
rule : { 0 } 1000 { #Macro(esHormiga00) and #Macro(esNada09) and not ((#Macro(esHormiga99) and #Macro(dir99) = 1) or (#Macro(esHormiga08) and #Macro(dir08) = 2) or (#Macro(esHormiga19) and #Macro(dir19) = 3)) }
rule : {(0,0)} 10 {t}
