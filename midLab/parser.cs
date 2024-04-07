using System;

class MainClass
{
    // Global variables
    static int count = 0; // Counter to keep track of the position in the expression string
    static string expr;   // Input expression

    // Main method
    static void Main(string[] args)
    {
        string[] arr = { "kgk", "g", "%g&kgk", "gkg", "ggk", "%&&k" };
        // Append "$" to the end of the expression to indicate the end
        foreach (string s in arr)
        {
            expr = s;
            expr += "$";

            try
            {
                S();
            } catch (Exception)
            {
                Console.WriteLine("Rejected");
            } finally
            {
                // Check if the entire expression has been parsed
                Console.Write(expr.Length == count ? "Accepted" : "Rejected");
                Console.WriteLine(" the string: " + expr);
                count = 0;
            }


            
        }
    }

    // Parse S
    static void S()
    {
        Console.WriteLine("S->X$");
        X();
        Validate('$');
    }

    // Parse X
    static void X()
    {
        Console.WriteLine("X->YX'");
        Y();
        Xp();
    }

    // Parse X prime
    static void Xp()
    {
        if (MatchAndMove('%'))
        {
            Console.WriteLine("X'->%YX'");
            Y();
            Xp();
        }
        else
        {
            Console.WriteLine("X'->ε");
        }
    }

    // Parse Y
    static void Y()
    {
        Console.WriteLine("Y->ZY'");
        Z();
        Yp();
    }

    // Parse Y prime
    static void Yp()
    {
        if (MatchAndMove('&'))
        {
            Console.WriteLine("Y'->&ZY'");
            Z();
            Yp();
        }
        else
        {
            Console.WriteLine("Y'->ε");
        }
    }

    // Parse Z
    static void Z()
    {
        if (MatchAndMove('k'))
        {
            Console.WriteLine("Z->kXk");
            X();
            Validate('k');
        }
        else if (MatchAndMove('g'))
        {
            Console.WriteLine("Z->g");
        }
    }

    // Helper function to check if the next character in the expression matches the expected character and move the counter
    static bool MatchAndMove(char expected)
    {
        if (expr[count] == expected)
        {
            count++;
            return true;
        }
        return false;
    }

    // Helper function to validate if the next character in the expression matches the expected character, otherwise reject
    static void Validate(char expected)
    {
        if (!MatchAndMove(expected))
        {
            throw new Exception("Rejected");
        }
    }
}
