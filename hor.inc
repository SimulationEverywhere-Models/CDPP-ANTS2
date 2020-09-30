% Macros para (0,-2)
#BeginMacro(esNada08)
trunc(remainder((0,-2)/10000,10)) = 0
#EndMacro

#BeginMacro(esComida08)
trunc(remainder((0,-2)/10000,10)) = 1
#EndMacro

#BeginMacro(esNadaHor08)
((trunc(remainder((0,-2)/10000,10)) = 0) or (trunc(remainder((0,-2)/10000,10)) = 2))
#EndMacro

#BeginMacro(esHormiga08)
trunc(remainder((0,-2)/10000,10)) = 2
#EndMacro

#BeginMacro(esHormigaB08)
(trunc(remainder((0,-2)/10000,10)) = 2 and trunc(remainder((0,-2) / 1000,10)) = 0)
#EndMacro

#BeginMacro(esHormigaC08)
(trunc(remainder((0,-2)/10000,10)) = 2 and trunc(remainder((0,-2) / 1000,10)) = 1)
#EndMacro

#BeginMacro(esObstaculo08)
trunc(remainder((0,-2)/10000,10)) = 3
#EndMacro

#BeginMacro(dir08)
trunc(remainder((0,-2),10))
#EndMacro

#BeginMacro(dirOp08)
if(trunc(remainder((0,-2),10)) > 1,trunc(remainder((0,-2),10)) - 2,trunc(remainder((0,-2),10)) + 2)
#EndMacro

#BeginMacro(comida08)
trunc(remainder((0,-2), 100))
#EndMacro

#BeginMacro(fero08)
(remainder(trunc((0,-2)/10), 100) > 0)
#EndMacro

% Macros para (-1,-1)
#BeginMacro(esNada99)
trunc(remainder((-1,-1)/10000,10)) = 0
#EndMacro

#BeginMacro(esComida99)
trunc(remainder((-1,-1)/10000,10)) = 1
#EndMacro

#BeginMacro(esNadaHor99)
((trunc(remainder((-1,-1)/10000,10)) = 0) or (trunc(remainder((-1,-1)/10000,10)) = 2))
#EndMacro

#BeginMacro(esHormiga99)
trunc(remainder((-1,-1)/10000,10)) = 2
#EndMacro

#BeginMacro(esHormigaB99)
(trunc(remainder((-1,-1)/10000,10)) = 2 and trunc(remainder((-1,-1) / 1000,10)) = 0)
#EndMacro

#BeginMacro(esHormigaC99)
(trunc(remainder((-1,-1)/10000,10)) = 2 and trunc(remainder((-1,-1) / 1000,10)) = 1)
#EndMacro

#BeginMacro(esObstaculo99)
trunc(remainder((-1,-1)/10000,10)) = 3
#EndMacro

#BeginMacro(dir99)
trunc(remainder((-1,-1),10))
#EndMacro

#BeginMacro(dirOp99)
if(trunc(remainder((-1,-1),10)) > 1,trunc(remainder((-1,-1),10)) - 2,trunc(remainder((-1,-1),10)) + 2)
#EndMacro

#BeginMacro(comida99)
trunc(remainder((-1,-1), 100))
#EndMacro

#BeginMacro(fero99)
(remainder(trunc((-1,-1)/10), 100) > 0)
#EndMacro

% Macros para (0,-1)
#BeginMacro(esNada09)
trunc(remainder((0,-1)/10000,10)) = 0
#EndMacro

#BeginMacro(esComida09)
trunc(remainder((0,-1)/10000,10)) = 1
#EndMacro

#BeginMacro(esNadaHor09)
((trunc(remainder((0,-1)/10000,10)) = 0) or (trunc(remainder((0,-1)/10000,10)) = 2))
#EndMacro

#BeginMacro(esHormiga09)
trunc(remainder((0,-1)/10000,10)) = 2
#EndMacro

#BeginMacro(esHormigaB09)
(trunc(remainder((0,-1)/10000,10)) = 2 and trunc(remainder((0,-1) / 1000,10)) = 0)
#EndMacro

#BeginMacro(esHormigaC09)
(trunc(remainder((0,-1)/10000,10)) = 2 and trunc(remainder((0,-1) / 1000,10)) = 1)
#EndMacro

#BeginMacro(esObstaculo09)
trunc(remainder((0,-1)/10000,10)) = 3
#EndMacro

#BeginMacro(dir09)
trunc(remainder((0,-1),10))
#EndMacro

#BeginMacro(dirOp09)
if(trunc(remainder((0,-1),10)) > 1,trunc(remainder((0,-1),10)) - 2,trunc(remainder((0,-1),10)) + 2)
#EndMacro

#BeginMacro(comida09)
trunc(remainder((0,-1), 100))
#EndMacro

#BeginMacro(fero09)
(remainder(trunc((0,-1)/10), 100) > 0)
#EndMacro

% Macros para (1,-1)
#BeginMacro(esNada19)
trunc(remainder((1,-1)/10000,10)) = 0
#EndMacro

#BeginMacro(esComida19)
trunc(remainder((1,-1)/10000,10)) = 1
#EndMacro

#BeginMacro(esNadaHor19)
((trunc(remainder((1,-1)/10000,10)) = 0) or (trunc(remainder((1,-1)/10000,10)) = 2))
#EndMacro

#BeginMacro(esHormiga19)
trunc(remainder((1,-1)/10000,10)) = 2
#EndMacro

#BeginMacro(esHormigaB19)
(trunc(remainder((1,-1)/10000,10)) = 2 and trunc(remainder((1,-1) / 1000,10)) = 0)
#EndMacro

#BeginMacro(esHormigaC19)
(trunc(remainder((1,-1)/10000,10)) = 2 and trunc(remainder((1,-1) / 1000,10)) = 1)
#EndMacro

#BeginMacro(esObstaculo19)
trunc(remainder((1,-1)/10000,10)) = 3
#EndMacro

#BeginMacro(dir19)
trunc(remainder((1,-1),10))
#EndMacro

#BeginMacro(dirOp19)
if(trunc(remainder((1,-1),10)) > 1,trunc(remainder((1,-1),10)) - 2,trunc(remainder((1,-1),10)) + 2)
#EndMacro

#BeginMacro(comida19)
trunc(remainder((1,-1), 100))
#EndMacro

#BeginMacro(fero19)
(remainder(trunc((1,-1)/10), 100) > 0)
#EndMacro

% Macros para (-2,0)
#BeginMacro(esNada80)
trunc(remainder((-2,0)/10000,10)) = 0
#EndMacro

#BeginMacro(esComida80)
trunc(remainder((-2,0)/10000,10)) = 1
#EndMacro

#BeginMacro(esNadaHor80)
((trunc(remainder((-2,0)/10000,10)) = 0) or (trunc(remainder((-2,0)/10000,10)) = 2))
#EndMacro

#BeginMacro(esHormiga80)
trunc(remainder((-2,0)/10000,10)) = 2
#EndMacro

#BeginMacro(esHormigaB80)
(trunc(remainder((-2,0)/10000,10)) = 2 and trunc(remainder((-2,0) / 1000,10)) = 0)
#EndMacro

#BeginMacro(esHormigaC80)
(trunc(remainder((-2,0)/10000,10)) = 2 and trunc(remainder((-2,0) / 1000,10)) = 1)
#EndMacro

#BeginMacro(esObstaculo80)
trunc(remainder((-2,0)/10000,10)) = 3
#EndMacro

#BeginMacro(dir80)
trunc(remainder((-2,0),10))
#EndMacro

#BeginMacro(dirOp80)
if(trunc(remainder((-2,0),10)) > 1,trunc(remainder((-2,0),10)) - 2,trunc(remainder((-2,0),10)) + 2)
#EndMacro

#BeginMacro(comida80)
trunc(remainder((-2,0), 100))
#EndMacro

#BeginMacro(fero80)
(remainder(trunc((-2,0)/10), 100) > 0)
#EndMacro

% Macros para (-1,0)
#BeginMacro(esNada90)
trunc(remainder((-1,0)/10000,10)) = 0
#EndMacro

#BeginMacro(esComida90)
trunc(remainder((-1,0)/10000,10)) = 1
#EndMacro

#BeginMacro(esNadaHor90)
((trunc(remainder((-1,0)/10000,10)) = 0) or (trunc(remainder((-1,0)/10000,10)) = 2))
#EndMacro

#BeginMacro(esHormiga90)
trunc(remainder((-1,0)/10000,10)) = 2
#EndMacro

#BeginMacro(esHormigaB90)
(trunc(remainder((-1,0)/10000,10)) = 2 and trunc(remainder((-1,0) / 1000,10)) = 0)
#EndMacro

#BeginMacro(esHormigaC90)
(trunc(remainder((-1,0)/10000,10)) = 2 and trunc(remainder((-1,0) / 1000,10)) = 1)
#EndMacro

#BeginMacro(esObstaculo90)
trunc(remainder((-1,0)/10000,10)) = 3
#EndMacro

#BeginMacro(dir90)
trunc(remainder((-1,0),10))
#EndMacro

#BeginMacro(dirOp90)
if(trunc(remainder((-1,0),10)) > 1,trunc(remainder((-1,0),10)) - 2,trunc(remainder((-1,0),10)) + 2)
#EndMacro

#BeginMacro(comida90)
trunc(remainder((-1,0), 100))
#EndMacro

#BeginMacro(fero90)
(remainder(trunc((-1,0)/10), 100) > 0)
#EndMacro

% Macros para (0,0)
#BeginMacro(esNada00)
trunc(remainder((0,0)/10000,10)) = 0
#EndMacro

#BeginMacro(esComida00)
trunc(remainder((0,0)/10000,10)) = 1
#EndMacro

#BeginMacro(esNadaHor00)
((trunc(remainder((0,0)/10000,10)) = 0) or (trunc(remainder((0,0)/10000,10)) = 2))
#EndMacro

#BeginMacro(esHormiga00)
trunc(remainder((0,0)/10000,10)) = 2
#EndMacro

#BeginMacro(esHormigaB00)
(trunc(remainder((0,0)/10000,10)) = 2 and trunc(remainder((0,0) / 1000,10)) = 0)
#EndMacro

#BeginMacro(esHormigaC00)
(trunc(remainder((0,0)/10000,10)) = 2 and trunc(remainder((0,0) / 1000,10)) = 1)
#EndMacro

#BeginMacro(esObstaculo00)
trunc(remainder((0,0)/10000,10)) = 3
#EndMacro

#BeginMacro(dir00)
trunc(remainder((0,0),10))
#EndMacro

#BeginMacro(dirOp00)
if(trunc(remainder((0,0),10)) > 1,trunc(remainder((0,0),10)) - 2,trunc(remainder((0,0),10)) + 2)
#EndMacro

#BeginMacro(comida00)
trunc(remainder((0,0), 100))
#EndMacro

#BeginMacro(fero00)
(remainder(trunc((0,0)/10), 100) > 0)
#EndMacro

% Macros para (1,0)
#BeginMacro(esNada10)
trunc(remainder((1,0)/10000,10)) = 0
#EndMacro

#BeginMacro(esComida10)
trunc(remainder((1,0)/10000,10)) = 1
#EndMacro

#BeginMacro(esNadaHor10)
((trunc(remainder((1,0)/10000,10)) = 0) or (trunc(remainder((1,0)/10000,10)) = 2))
#EndMacro

#BeginMacro(esHormiga10)
trunc(remainder((1,0)/10000,10)) = 2
#EndMacro

#BeginMacro(esHormigaB10)
(trunc(remainder((1,0)/10000,10)) = 2 and trunc(remainder((1,0) / 1000,10)) = 0)
#EndMacro

#BeginMacro(esHormigaC10)
(trunc(remainder((1,0)/10000,10)) = 2 and trunc(remainder((1,0) / 1000,10)) = 1)
#EndMacro

#BeginMacro(esObstaculo10)
trunc(remainder((1,0)/10000,10)) = 3
#EndMacro

#BeginMacro(dir10)
trunc(remainder((1,0),10))
#EndMacro

#BeginMacro(dirOp10)
if(trunc(remainder((1,0),10)) > 1,trunc(remainder((1,0),10)) - 2,trunc(remainder((1,0),10)) + 2)
#EndMacro

#BeginMacro(comida10)
trunc(remainder((1,0), 100))
#EndMacro

#BeginMacro(fero10)
(remainder(trunc((1,0)/10), 100) > 0)
#EndMacro

% Macros para (2,0)
#BeginMacro(esNada20)
trunc(remainder((2,0)/10000,10)) = 0
#EndMacro

#BeginMacro(esComida20)
trunc(remainder((2,0)/10000,10)) = 1
#EndMacro

#BeginMacro(esNadaHor20)
((trunc(remainder((2,0)/10000,10)) = 0) or (trunc(remainder((2,0)/10000,10)) = 2))
#EndMacro

#BeginMacro(esHormiga20)
trunc(remainder((2,0)/10000,10)) = 2
#EndMacro

#BeginMacro(esHormigaB20)
(trunc(remainder((2,0)/10000,10)) = 2 and trunc(remainder((2,0) / 1000,10)) = 0)
#EndMacro

#BeginMacro(esHormigaC20)
(trunc(remainder((2,0)/10000,10)) = 2 and trunc(remainder((2,0) / 1000,10)) = 1)
#EndMacro

#BeginMacro(esObstaculo20)
trunc(remainder((2,0)/10000,10)) = 3
#EndMacro

#BeginMacro(dir20)
trunc(remainder((2,0),10))
#EndMacro

#BeginMacro(dirOp20)
if(trunc(remainder((2,0),10)) > 1,trunc(remainder((2,0),10)) - 2,trunc(remainder((2,0),10)) + 2)
#EndMacro

#BeginMacro(comida20)
trunc(remainder((2,0), 100))
#EndMacro

#BeginMacro(fero20)
(remainder(trunc((2,0)/10), 100) > 0)
#EndMacro

% Macros para (-1,1)
#BeginMacro(esNada91)
trunc(remainder((-1,1)/10000,10)) = 0
#EndMacro

#BeginMacro(esComida91)
trunc(remainder((-1,1)/10000,10)) = 1
#EndMacro

#BeginMacro(esNadaHor91)
((trunc(remainder((-1,1)/10000,10)) = 0) or (trunc(remainder((-1,1)/10000,10)) = 2))
#EndMacro

#BeginMacro(esHormiga91)
trunc(remainder((-1,1)/10000,10)) = 2
#EndMacro

#BeginMacro(esHormigaB91)
(trunc(remainder((-1,1)/10000,10)) = 2 and trunc(remainder((-1,1) / 1000,10)) = 0)
#EndMacro

#BeginMacro(esHormigaC91)
(trunc(remainder((-1,1)/10000,10)) = 2 and trunc(remainder((-1,1) / 1000,10)) = 1)
#EndMacro

#BeginMacro(esObstaculo91)
trunc(remainder((-1,1)/10000,10)) = 3
#EndMacro

#BeginMacro(dir91)
trunc(remainder((-1,1),10))
#EndMacro

#BeginMacro(dirOp91)
if(trunc(remainder((-1,1),10)) > 1,trunc(remainder((-1,1),10)) - 2,trunc(remainder((-1,1),10)) + 2)
#EndMacro

#BeginMacro(comida91)
trunc(remainder((-1,1), 100))
#EndMacro

#BeginMacro(fero91)
(remainder(trunc((-1,1)/10), 100) > 0)
#EndMacro

% Macros para (0,1)
#BeginMacro(esNada01)
trunc(remainder((0,1)/10000,10)) = 0
#EndMacro

#BeginMacro(esComida01)
trunc(remainder((0,1)/10000,10)) = 1
#EndMacro

#BeginMacro(esNadaHor01)
((trunc(remainder((0,1)/10000,10)) = 0) or (trunc(remainder((0,1)/10000,10)) = 2))
#EndMacro

#BeginMacro(esHormiga01)
trunc(remainder((0,1)/10000,10)) = 2
#EndMacro

#BeginMacro(esHormigaB01)
(trunc(remainder((0,1)/10000,10)) = 2 and trunc(remainder((0,1) / 1000,10)) = 0)
#EndMacro

#BeginMacro(esHormigaC01)
(trunc(remainder((0,1)/10000,10)) = 2 and trunc(remainder((0,1) / 1000,10)) = 1)
#EndMacro

#BeginMacro(esObstaculo01)
trunc(remainder((0,1)/10000,10)) = 3
#EndMacro

#BeginMacro(dir01)
trunc(remainder((0,1),10))
#EndMacro

#BeginMacro(dirOp01)
if(trunc(remainder((0,1),10)) > 1,trunc(remainder((0,1),10)) - 2,trunc(remainder((0,1),10)) + 2)
#EndMacro

#BeginMacro(comida01)
trunc(remainder((0,1), 100))
#EndMacro

#BeginMacro(fero01)
(remainder(trunc((0,1)/10), 100) > 0)
#EndMacro

% Macros para (1,1)
#BeginMacro(esNada11)
trunc(remainder((1,1)/10000,10)) = 0
#EndMacro

#BeginMacro(esComida11)
trunc(remainder((1,1)/10000,10)) = 1
#EndMacro

#BeginMacro(esNadaHor11)
((trunc(remainder((1,1)/10000,10)) = 0) or (trunc(remainder((1,1)/10000,10)) = 2))
#EndMacro

#BeginMacro(esHormiga11)
trunc(remainder((1,1)/10000,10)) = 2
#EndMacro

#BeginMacro(esHormigaB11)
(trunc(remainder((1,1)/10000,10)) = 2 and trunc(remainder((1,1) / 1000,10)) = 0)
#EndMacro

#BeginMacro(esHormigaC11)
(trunc(remainder((1,1)/10000,10)) = 2 and trunc(remainder((1,1) / 1000,10)) = 1)
#EndMacro

#BeginMacro(esObstaculo11)
trunc(remainder((1,1)/10000,10)) = 3
#EndMacro

#BeginMacro(dir11)
trunc(remainder((1,1),10))
#EndMacro

#BeginMacro(dirOp11)
if(trunc(remainder((1,1),10)) > 1,trunc(remainder((1,1),10)) - 2,trunc(remainder((1,1),10)) + 2)
#EndMacro

#BeginMacro(comida11)
trunc(remainder((1,1), 100))
#EndMacro

#BeginMacro(fero11)
(remainder(trunc((1,1)/10), 100) > 0)
#EndMacro

% Macros para (0,2)
#BeginMacro(esNada02)
trunc(remainder((0,2)/10000,10)) = 0
#EndMacro

#BeginMacro(esComida02)
trunc(remainder((0,2)/10000,10)) = 1
#EndMacro

#BeginMacro(esNadaHor02)
((trunc(remainder((0,2)/10000,10)) = 0) or (trunc(remainder((0,2)/10000,10)) = 2))
#EndMacro

#BeginMacro(esHormiga02)
trunc(remainder((0,2)/10000,10)) = 2
#EndMacro

#BeginMacro(esHormigaB02)
(trunc(remainder((0,2)/10000,10)) = 2 and trunc(remainder((0,2) / 1000,10)) = 0)
#EndMacro

#BeginMacro(esHormigaC02)
(trunc(remainder((0,2)/10000,10)) = 2 and trunc(remainder((0,2) / 1000,10)) = 1)
#EndMacro

#BeginMacro(esObstaculo02)
trunc(remainder((0,2)/10000,10)) = 3
#EndMacro

#BeginMacro(dir02)
trunc(remainder((0,2),10))
#EndMacro

#BeginMacro(dirOp02)
if(trunc(remainder((0,2),10)) > 1,trunc(remainder((0,2),10)) - 2,trunc(remainder((0,2),10)) + 2)
#EndMacro

#BeginMacro(comida02)
trunc(remainder((0,2), 100))
#EndMacro

#BeginMacro(fero02)
(remainder(trunc((0,2)/10), 100) > 0)
#EndMacro

#BeginMacro(nuevaDireccionComida)
if(trunc(remainder((0,-1)/10000,10)) = 1,0,if(trunc(remainder((1,0)/10000,10)) = 1,1,if(trunc(remainder((0,1)/10000,10)) = 1,2,if(trunc(remainder((-1,0)/10000,10)) = 1,3,randint(3)))))
#EndMacro
#BeginMacro(nuevaDireccionFeromonas)
if((trunc(remainder((0,-1)/10000,10)) = 0) and (remainder(trunc((0,-1)/10), 100) > 0) and (trunc(remainder((0,-1),10)) = 2),0,if((trunc(remainder((1,0)/10000,10)) = 0) and (remainder(trunc((1,0)/10), 100) > 0) and (trunc(remainder((1,0),10)) = 3),1,if((trunc(remainder((0,1)/10000,10)) = 0) and (remainder(trunc((0,1)/10), 100) > 0) and (trunc(remainder((0,1),10)) = 0),2,if((trunc(remainder((-1,0)/10000,10)) = 0) and (remainder(trunc((-1,0)/10), 100) > 0) and (trunc(remainder((-1,0),10)) = 2),3,randint(3)))))
#EndMacro
