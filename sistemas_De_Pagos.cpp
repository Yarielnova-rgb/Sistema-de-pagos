using System;

class Pago
{
    public virtual decimal Calcular(decimal monto)
    {
        return monto;
    }
}

class Efectivo : Pago
{
}

class Tarjeta : Pago
{
    private const decimal Comision = 0.03m;

    public override decimal Calcular(decimal monto)
    {
        return monto + (monto * Comision);
    }
}

class Transferencia : Pago
{
    private const decimal Comision = 0.01m;

    public override decimal Calcular(decimal monto)
    {
        return monto + (monto * Comision);
    }
}

class Program
{
    static void Main()
    {
        Pago[] pagos =
        {
            new Efectivo(),
            new Tarjeta(),
            new Transferencia()
        };

        decimal monto = 1000m;
        decimal total = 0m;

        foreach (Pago pago in pagos)
        {
            decimal resultado = pago.Calcular(monto);
            Console.WriteLine($"{pago.GetType().Name}: {resultado:F2}");
            total += resultado;
        }

        Console.WriteLine($"Total: {total:F2}");
    }
}
