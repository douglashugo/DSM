/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package javaapplication1_calculadora;

/**
 *
 * @author dougl
 */
import java.io.InputStream;

public class calculadora {
    
    public float var1;
    public float var2; 
    public float var3;
    
    
    public float somar(float var1, float var2){
        float result;
        result =  var1 + var2;
        return result;
    } 
    
    public float subtrair(float var1, float var2, float var3){
        float result, soma;
        result =  var1 - var2;
        soma = result + var3;
        return soma;
    } 
    
    public float multiplic(float var1, float var2){
        float result;
        result =  var1 * var2;
        return result;
    }
    
    public float divisao(float var1, float var2){
        float result;
        if(var2 == 0)
        {
           System.out.println("Não é possível dividir por 0");
        }
       
           result =  var1 / var2;
   
       return result;
        
    } 
    
    
    
    
    
    
}
