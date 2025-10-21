#include <stdio.h>
#include <math.h>

int main() {
  int score;
  while (1) {
        printf("Enter the NFL score (Enter 1 to stop):");
        scanf("%d", &score);
        if (score < 1) {
            printf("Invalid input. Please enter a positive integer.\n");
        } else if (score == 1) {
            return 0;
        } else {
            printf("Possible combinations of scoring plays if a team's score is %d:", score);

            int td, fg, safety, td1, td2;

            for (td2 = 0; td2 <= score / 8; td2++) {            // TD + 2pt
                for (td1 = 0; td1 <= score / 7; td1++) {        // TD + FG (7)
                    for (td = 0; td <= score / 6; td++) {       // Regular TD (6)
                        for (fg = 0; fg <= score / 3; fg++) {   // Field Goal (3)
                            for (safety = 0; safety <= score / 2; safety++) { // Safety (2)
                                int total = td2 * 8 + td1 * 7 + td * 6 + fg * 3 + safety * 2;
                                if (total == score) {
                                    printf("\n%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety",
                                        td2, td1, td, fg, safety);
                                }
                            }
                        }
                    }
                }
            }

            printf("\n");
        }
    }
    return 0;
}
