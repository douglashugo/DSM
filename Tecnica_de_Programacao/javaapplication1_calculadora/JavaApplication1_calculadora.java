/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaapplication1_calculadora;


import java.util.Scanner;
/**
 *
 * @author dougl
 */
public class JavaApplication1_calculadora {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
    Scanner calculadora = new Scanner(System.in);
        
        float var1, var2, var3, exibir;
        
        System.out.println("==== Insira os valores para a Soma ====");
        System.out.println("Digite o primeiro valor: ");
        var1 = calculadora.nextFloat();
        System.out.println("Digite o segundo valor: ");
        var2 = calculadora.nextFloat();
        System.out.println("Digite o terceiro valor: ");
        var3 = calculadora.nextFloat();
        
        calculadora calcula = new calculadora();
        
        exibir = calcula.somar(var1, var2);
        System.out.println("Resultado da Soma: "+exibir);
        
        exibir = calcula.subtrair(var1, var2, var3);
        System.out.println("Resultado da Subtracao mais a soma do terceiro parametro: "+exibir);
        
        exibir = calcula.multiplic(var1, var2);
        System.out.println("Resultado da Multiplicacao: "+exibir);
        
        exibir = calcula.divisao(var1, var2);
        System.out.println("Resultado da Divisao: "+exibir);
        
        
    
        
        
    }
    
}
