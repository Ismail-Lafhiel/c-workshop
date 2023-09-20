#include <stdio.h>

int ecole()
{
    int notes[100], nbrDesNotes, NoteMax = 0, NoteMin = 20, sommeNotes = 0;

    // Saisir les notes et les mémoriser dans un tableau

    printf("entrer des notes entre 0 et 20: \n");

    while (1)
    {
        int note;

        // Compter les notes saisies et afficher leur nombre

        printf("entrer la note d'eleve numero %d: ", nbrDesNotes + 1);
        scanf("%d", &note);

        if (note < 0 || note > 20)
        {
            break;
        }
        notes[nbrDesNotes] = note;
        nbrDesNotes++;
        sommeNotes += note;

        if (note < NoteMin)
        {
            NoteMin = note;
        }
        if (note > NoteMax)
        {
            NoteMax = note;
        }
    }
    printf("\n--------------------------------------\n");
    if (nbrDesNotes == 0)
    {
        printf("Aucune note saisie");
    }
    else
    {
        // Calculer la moyenne
        float moyenne = (float)sommeNotes / nbrDesNotes;

        // nbr des notes
        printf("\nle nombre des notes est: %d\n", nbrDesNotes);

        // Afficher la moyenne

        printf("\nla moyenne des notes est: %.2f\n", moyenne);

        printf("\n--------------------------------------\n");

        // Comparer chaque note à la moyenne et ajouter, dans l’affichage précédent "égal", "inférieur" ou "supérieur à la moyenne"

        for (int i = 0; i < nbrDesNotes; i++)
        {
            printf("\nNote d'eleve numero %d : %d\n", i + 1, notes[i]);

            if (notes[i] == moyenne)
            {
                printf("\negale la moyenne\n");
                printf("\n--------------------------------------\n");
            }

            else if (notes[i] > moyenne)
            {
                printf("\nSuperieur la moyenne\n");
                printf("\n--------------------------------------\n");
            }
            else
            {
                printf("\nInferieur la moyenne\n");
                printf("\n--------------------------------------\n");
            }
        }
        // Compter et afficher combien il y a de notes supérieures à la moyenne

        int nbrNoteSuperieurMoyenne = 0;
        for (int i = 0; i < nbrDesNotes; i++)
        {
            if (notes[i] > moyenne)
                nbrNoteSuperieurMoyenne++;
        }
        printf("\nNombre de notes supérieures à la moyenne : %d\n", nbrNoteSuperieurMoyenne);

        // Dans le tableau de notes, chercher la note la plus petite. Afficher cette note et sa position dans le tableau
        // Même chose pour la note la plus grande.

        printf("\nNote minimale : %d\n", NoteMin);
        printf("\nNote maximale : %d\n", NoteMax);
    }
}

#include <stdio.h>

int main()
{
    ecole();

    return 0;
}
