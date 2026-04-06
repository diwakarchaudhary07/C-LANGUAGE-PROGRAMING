#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n=0, choice, roll, found;

    do {
        printf("\n1. Add Student\n2. Display All\n3. Search\n4. Exit\n");
        scanf("%d", &choice);

        if(choice==1) {
            printf("Enter Roll, Name, Marks: ");
            scanf("%d %s %f", &s[n].roll, s[n].name, &s[n].marks);
            n++;
        }
        else if(choice==2) {
            for(int i=0; i<n; i++)
                printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
        }
        else if(choice==3) {
            printf("Enter Roll to search: ");
            scanf("%d", &roll);
            found=0;
            for(int i=0; i<n; i++) {
                if(s[i].roll==roll) {
                    printf("Found: %d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
                    found=1;
                    break;
                }
            }
            if(!found) printf("Not Found\n");
        }
    } while(choice!=4);

    return 0;
}
