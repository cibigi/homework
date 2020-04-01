/*
Christian Battista Giannarelli, 3^BINF, 4 marzo 2020
Inversione di un vettore
*/

import java.util.Scanner;

public class Inversione {
    //Dimensione fissa del vettore
    final short DIM= 100;

    //Vettore
    private int[] vet= new int[DIM];

    //Vettore nuovo
    private int[] vetInvertito= new int[DIM];

    //Numero di elementi effettivi
    private short n;

    //Oggetto della classe Scanner (lettura)
    Scanner leggi = new Scanner(System.in);

    //Funzione di lettura della dimensione effettiva del vettore
    public void dimensioneReale() {
        //Lettura dimensione effettiva del vettore
        do {
            System.out.println("Inserire la dimensione effettiva dei vettori, max= " + DIM);
            n= leggi.nextShort();
        } while(n>DIM || n<=1);
    }

    //Funzione di caricamento
    public void carica() {
        //Ciclo di caricamento
        for(int i= 0; i<n; i++) {
            System.out.println("Inserire il valore " + Integer.sum(i, 1));
            vet[i]= leggi.nextInt();
        }

        //Chiusura scanner
        leggi.close();
    }

    //Funzione di attribuzione inversa dei valori del vettore al nuovo vettore (inversione del vettore)
    public void inversione() {
        /* Inversione, attribuzione del vettore al nuovo vettore.
        Iniziando dalla posizione n-1 nel vettore e dalla posizione 0 nel nuovo vettore */
        int posizioneVet= n-1;
        for(int i= 0; i<n; i++) { 
            vetInvertito[i]= vet[posizioneVet];
            posizioneVet--;
        }
    }

    //Funzione di stampa del vettore invertito
    public void stampa() {
        System.out.println("\n");
    
        //Ciclo di stampa
        for(int i= 0; i<n; i++) {
            System.out.println("Posizione " + Integer.sum(i, 1) + ") - " + vetInvertito[i]);
        }
    }

    public static void main(String args[]) {
        //Oggetto della classe Inversione
        Inversione inv= new Inversione();

        //Ottenimento dimensione effettiva
        inv.dimensioneReale();

        //Caricamento del vettore
        inv.carica();

        //Inversione del vettore
        inv.inversione();

        //Stampa del vettore invertito
        inv.stampa();
    }
}