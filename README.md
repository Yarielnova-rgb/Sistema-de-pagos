# Sistema-de-pagos
Sistema de pagos en C# que usa herencia, métodos virtuales y polimorfismo. Incluye pagos en efectivo, tarjeta (3 % de comisión) y transferencia, y muestra el total en consola.

# Sistema de pagos en C#

Programa de consola en C# que usa herencia, métodos virtuales y polimorfismo para calcular distintos tipos de pago.

## Descripción

La clase base `Pago` define el método virtual `Calcular(decimal monto)`, que devuelve el monto. Las clases `Efectivo`, `Tarjeta` y `Transferencia` heredan de ella, y cada una calcula el total a su manera.

## Clases

| Clase | Comisión | Comportamiento |
| --- | --- | --- |
| `Pago` | 0 % | Clase base, devuelve el monto sin cambios |
| `Efectivo` | 0 % | Usa el `Calcular()` de la clase base |
| `Tarjeta` | 3 % | Sobrescribe `Calcular()` y suma la comisión |
| `Transferencia` | 1 % | Reto extra, sobrescribe `Calcular()` |

## Requisitos

- .NET SDK 6.0 o superior

## Cómo ejecutarlo

Crea un proyecto de consola:

```bash
dotnet new console -n SistemaPagos
cd SistemaPagos
```

Reemplaza el contenido de `Program.cs` con el código del programa y ejecuta:

```bash
dotnet run
```

## Salida esperada

Con un monto de 1000:

```text
Efectivo: 1000.00
Tarjeta: 1030.00
Transferencia: 1010.00
Total: 3040.00
```

## Cómo funciona

Los tres objetos se guardan en un arreglo de tipo `Pago`. Al recorrerlo con un `foreach`, cada objeto ejecuta su propia versión de `Calcular()` (polimorfismo) y los resultados se suman para mostrar el total.

## Agregar un nuevo tipo de pago

Crea una clase que herede de `Pago`, sobrescribe `Calcular()` y agrégala al arreglo en `Main`:

```csharp
class Paypal : Pago
{
    public override decimal Calcular(decimal monto)
    {
        return monto + (monto * 0.04m);
    }
}
```


- Se usa `decimal` para los montos, que es el tipo recomendado para dinero en C#.
- Los valores se muestran con el formato `F2` (dos decimales) para evitar problemas con símbolos de moneda en la consola.
- La comisión de `Transferencia` (1 %) es un valor de ejemplo y se puede cambiar.
