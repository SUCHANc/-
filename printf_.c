#include <stdio.h>

int main()
{
    printf("===============\n");
printf("My name is %s\n", "Hong Gil Dong\n");
printf("i am %d years old \n", 37);
printf("===============\n");
printf("   *   \n");
printf(" *   * \n");
printf("   *   \n");
printf("===============\n");
printf("%s \n", "서식 문자로 출력하는 방법입니다.\n");
printf("%s \n", "이것은 문자열을 나타냅니다.");
printf("%s \n", "수를 출력할 때는 따옴표를 생략합니다.");
printf("%d\n", 123 );
printf("%.1f\n", 6.5);
printf("===============\n");
printf("%s\n", "My height");
printf("%d\n", 172);
printf("%s\n", "My weight");
printf("%d\n", 78);
printf("===============\n");
printf("%s\n", "수식을 출력하면 계산 결과가 출력됩니다.");
printf("%d + %d = %d\n", 10, 5, 10 + 5);
printf("내 생년월일은 %d년 %d월 %d일 입니다 만 나이는 %d살 입니다.\n", 1984, 9, 22, 2024 - 1984);
printf("===============\n");
printf("%d Dan\n", 5);
printf("%d * %d = %d \n", 5, 2, 5 * 2);
printf("================\n");
printf("%-8s%6s\n","subject","score");
printf("================\n");
printf("%-8s%6d\n","Korean", 90);
printf("%-8s%6d\n","English", 100);
printf("%-8s%6d\n","Computer", 80);
printf("===============\n");
printf("%10s%10s%10s\n", "Item","Count","Price");
printf("%10s%10d%10d\n", "Pen",20,100);
printf("%10s%10d%10d\n", "Note",5,95);
printf("%10s%10d%10d\n", "Eraser",110,97); 



return 0;
}
