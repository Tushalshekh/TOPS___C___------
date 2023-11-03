#include <stdio.h>

int main() {
    char yatra, state, mahadev;

    printf("Select the Yatra: (A) 4 dham\n(B)12 Jyotiling\n");
    scanf("%c", &yatra);

    switch (yatra)
    {
    case 'A':
        printf(":4 Dham yatra:\nSelect the state:\n(A)Gujarat\n(B)Uttarakhand\n(C)Tamil Nadu\n(D)Odisha");
        scanf("%c", &state);

        switch (state)
        {
        case 'A':
            printf("Dham in Gujarat: Dwarka \n");
            break;

        case 'B':
            printf("Dham in Uttarakhand: Badrinath \n");
            break;

        case 'C':
            printf("Dham in Tamil Nadu: Rameswaram \n");
            break;

        case 'D':
            printf("Dham in Odisha: Jagannath Puri \n");
            break;
        }

        break;

    case 'B':
        printf("\n/*12 Jyotiling*\n Select The State:\n(A)Gujarat\n(B)Maharashtra\n(C)Madhya pradesh\n(D)Andhra pradesh\n(E)Uttarakhand\n(F)Tamil Nadu\n(G)Uttar pradesh\n");
        scanf("%c", &mahadev);

        {
            switch (mahadev)
            {

            case 'A':
                printf("(1)Somnath Mahadev\n(2)Nageshwar Mahadev\n");
                break;

            case 'B':
                printf("(1)Bhimashankar Mahadev\n(2)Trimbakeshwar Mahadev\n(3)Grishneshwar Mahadev\n(4)Vaijnath Mahadev\n");
                break;

            case 'C':
                printf("(1)Mahakaleshwar Mahadev\n(2)Omkareshwar Mahadev\n");
                break;

            case 'D':
                printf("(1)Mallikarjun Mahadev\n");
                break;

            case 'E':
                printf("(1)Kedarnath Mahadev\n");
                break;

            case 'F':
                printf("(1)Rameshwar Mahadev\n");
                break;

            case 'G':
                printf("Kashi Vishwanath Mahadev\n");
                break;

            default:
                printf("Not Available\n");
                break;
            }
        }
        break;

    default:
        printf("Not Found");
        break;
    }

    return 0;
}

// switch(state){
//     case 'A':
//     printf("somnath");
//     break;
// }

//  printf("Select the state: ");
// scanf("%c",&state);
