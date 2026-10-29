# Sistema-de-pagos
Sistema de pagos en C# que usa herencia, métodos virtuales y polimorfismo. Incluye pagos en efectivo, tarjeta (3 % de comisión) y transferencia, y muestra el total en consola.
# Sistema-de-Pagos-con-Polimorfismo
Programa en C# que aplica herencia, métodos virtuales y polimorfismo para calcular distintos tipos de pago - Lógica de Programación

# Sistema de pagos con herencia y polimorfismo

## Nombre de los participantes y matrículas
[Yariel Israel Nova Moreta 2025-0306]


## Descripción breve del programa
Este programa aplica los conceptos de herencia y polimorfismo en C#. Se define una clase base `Pago` con el método virtual `Calcular(decimal monto)`, que devuelve el monto sin cambios. A partir de ella se crean las clases `Efectivo` (sin comisión), `Tarjeta` (3 % de comisión, sobrescribiendo `Calcular()`) y `Transferencia` (1 % de comisión, agregada como reto extra sin modificar las demás clases). Los objetos se guardan como `Pago` en un arreglo, se recorren con un `foreach` y se muestra el resultado de cada uno junto con el total.

## Datos de entrada
- Monto a pagar (número decimal)

(El monto se define directamente en el código, con un valor de 1000 por defecto.)

## Datos que procesa
El programa almacena los tres tipos de pago como objetos de tipo `Pago` dentro de un arreglo. Recorre el arreglo y, para cada objeto, llama al método `Calcular()`, que ejecuta la versión propia de cada clase (sin comisión en `Efectivo`, 3 % en `Tarjeta` y 1 % en `Transferencia`). Los resultados se van sumando en una variable `total`.

## Datos de salida
- Monto calculado para cada tipo de pago (Efectivo, Tarjeta y Transferencia).
- Total de todos los pagos.

Con un monto de 1000, la salida es:

```text
Efectivo: 1000.00
Tarjeta: 1030.00
Transferencia: 1010.00
Total: 3040.00
```

## Importancia de usar polimorfismo y métodos virtuales
Usar un método `virtual` en la clase base junto con `override` en las clases hijas permite tratar todos los tipos de pago de la misma forma, a través del tipo `Pago`, mientras cada uno aplica su propio cálculo. Gracias a esto, el ciclo `foreach` no necesita saber qué tipo de pago está procesando ni usar condicionales como `if` o `switch` para decidir la comisión. También hace que el código sea fácil de ampliar: para agregar un nuevo tipo de pago, como `Transferencia`, solo se crea una nueva clase que herede de `Pago` y se agrega al arreglo, sin modificar las clases ni la lógica que ya funcionan.

## Cómo compilar y ejecutar el programa
**Paso 1.** Instalar el SDK de .NET 6.0 o superior, o usar Visual Studio.

**Paso 2.** Crear un proyecto de consola desde la terminal:

```bash
dotnet new console -n SistemaPagos
cd SistemaPagos
```

**Paso 3.** Reemplazar el contenido de `Program.cs` con el código del programa y ejecutar:

```bash
dotnet run
```

**Paso 4.** Si usas Visual Studio, crea un proyecto de aplicación de consola, pega el código en `Program.cs` y ejecuta con `Ctrl+F5`.

## Capturas de pantalla del programa en ejecución
<!-- Agrega aquí tus capturas de pantalla, por ejemplo: -->
<!-- <img width="1110" height="629" alt="image" src="URL_DE_TU_CAPTURA" /> -->
