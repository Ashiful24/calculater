#include<stdio.h>
#include<string.h>
#include<math.h>


void Kelvin_to_Fahrenheit()
{
    printf("\n\t\t\tKelvin_to_Fahrenheit\n\n");
    float kelvin,fahrenheit;
    printf("Enter Kelvins : ");
    scanf("%f",&kelvin);
    fahrenheit=1.8*(kelvin-273)+32;
    printf("Fahrenheit = %.3f",fahrenheit);
}

void Fahrenheit_to_Celsius()
{
  printf("\n\t\t\tFahrenheit_to_Celsius\n\n");
}

void Kelvin_to_Celsius()
{
  printf("\n\t\t\tKelvin_to_Celsius\n\n");
}

void Fahrenheit_to_Kelvin()
{
  printf("\n\t\t\tFahrenheit_to_Kelvin\n\n");
}

void Celsius_to_Fahrenheit()
{
  printf("\n\t\t\tCelsius_to_Fahrenheit\n\n");

    float celsius=0,fahrenheit;
    printf("Enter temparature in celsius : ");
    scanf("%f",&celsius);
    fahrenheit=(1.8*celsius)+32;
    printf("celsius=%.2f and fahrenheit=%.2f",celsius,fahrenheit);
}

void Celsius_to_Kelvin()
{
  printf("\n\t\t\tCelsius_to_Kelvin\n\n");
}

void parallelogram()
{
    printf("\n\t\t\tParallelogram\n\n");
    float base, altitude;
    float area;

    printf("Enter base of the given Parallelogram: \n ");
    scanf("%f",&base);
    printf("Enter altitude of the given Parallelogram: \n ");
    scanf("%f",&altitude);
    area = base * altitude;
    printf("Area of Parallelogram is: %.3f\n", area);

}

void rhombus()
{
    printf("\n\t\t\tRhombus\n\n");
    float diagonal1, diagonal2;
    float area;

    printf("Enter length of  a diagonal = ");
    scanf("%f", &diagonal1);
    printf("Enter the length of  another diagonal = ");
    scanf("%f", &diagonal2);
    area = 0.5 * diagonal1 * diagonal2;
    printf("Area of rhombus is: %.3f \n", area);

}

void rectangle()
{
    float length, breadth, area;
    printf("\n\t\t\tRectangle\n\n");
    printf("\nEnter the Length of Rectangle : ");
    scanf("%f", &length);

   printf("\nEnter the Breadth of Rectangle : ");
   scanf("%f", &breadth);

   area = length * breadth;
   printf("\nArea of Rectangle : %.3f", area);

}

void square()
{
     printf("\n\t\t\tSquare\n\n");
     int side,area;
    printf("Enter the length of side : ");
    scanf("%D",&side);
    area=side*side;
    printf("\nArea of square : %d",area);
}

void circle()
{
     printf("\n\t\t\tCircle\n\n");

    float area,radius,pi=3.1416;
    printf("Enter the radius of the circle = ");
    scanf("%f",&radius);

    area=pi*radius*radius;
    printf("Area of the circle is %.2f\n",area);

}


void triangle()
{
     printf("\n\t\t\tTriangle\n\n");
     float base, height, area;

    printf("Enter base of the triangle: ");
    scanf("%f", &base);
    printf("Enter height of the triangle: ");
    scanf("%f", &height);
    area = (base * height)/2;
    printf("Area of the triangle = %.2f", area);

}


void multiplication_of_matrix()
{
    printf("\n\t\t\tMultiplication\n\n");

    int A[10][10],B[10][10],C[10][10];
    int row1,row2,colum1,colum2,i,j,k,sum=0;

    printf("Enter row and colum number of A matrix = \n");
    scanf("%d%d",&row1,&colum1);

    printf("Enter rows and colums number of B matrix = \n");
    scanf("%d%d",&row2,&colum2);

    while (colum1!=row2)
    {
      printf("please try again.Colum of A matrix and rows of B matrix must be same.\n\n");

    printf("Enter rows and colum number of A matrix = \n");
    scanf("%d%d",&row1,&colum1);

    printf("Enter rows and colum number of B matrix = \n");
    scanf("%d%d",&row2,&colum2);


    }

    //scaning A matrix
    printf("Enter elements of A matrix.\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<colum1;j++)
        {
          printf("A[%d][%d] = ",i,j);
          scanf("%d",&A[i][j]);
        }
        printf("\n");
    }


 //scaning B matrix
    printf("Enter elements of B matrix.\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<colum2;j++)
        {
          printf("B[%d][%d] = ",i,j);
          scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

   //printing A matrix
    printf("A = ");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<colum1;j++)
        {
          printf("\t%d ",A[i][j]);
        }
       printf("\n");
    }


    //printing B matrix
    printf("\nB = ");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<colum2;j++)
        {
          printf("\t%d ",B[i][j]);
        }
       printf("\n");
    }


   //multiplying A*B
   for(i=0;i<row1;i++)
   {
       for(j=0;j<colum2;j++)
       {
           for(k=0;k<colum1;k++)
           {
             sum=sum+A[i][k]*B[k][j];
           }
          C[i][j]=sum;
           sum=0;
       }

   }
    printf("\n");
   //printing A*B
    printf("A*B = ");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<colum2;j++)
        {
          printf("\t%d ",C[i][j]);
        }
       printf("\n");
    }



}

void subtraction_of_matrix()
{
    printf("\n\t\t\tSubtraction\n\n");
    int A[10][10],B[10][10],C[10][10];
    int i,j,row,colum;

    printf("Enter rows  number =\n");
    scanf("%d",&row);
    printf("Enter columns number =\n");
    scanf("%d",&colum);

    //scaning A matrix
    printf("Enter A matrix's elements\n");
    for (i=0;i<row;i++)
    {
      for(j=0;j<colum;j++)
      {
          printf("A[%d][%d]=",i,j);
          scanf("%d",&A[i][j]);
      }
      printf("\n");
    }

    //scaning B matrix
    printf("Enter B matrix's elements\n");
    for (i=0;i<row;i++)
    {
      for(j=0;j<colum;j++)
      {
          printf("B[%d][%d]=",i,j);
          scanf("%d",&B[i][j]);
      }
        printf("\n");
    }

    //printing A matrix
    printf("A = ");
   for (i=0;i<row;i++)
    {
      for(j=0;j<colum;j++)
      {
          printf("\t%d",A[i][j]);

      }
    printf("\n");
    }

    printf("\n");

    //printing B matrix
    printf("B = ");
    for (i=0;i<row;i++)
    {
      for(j=0;j<colum;j++)
      {
          printf("\t%d",B[i] [j]);

      }
      printf("\n");
    }


     //Subtraction A and B matrix

    for (i=0;i<row;i++)
    {
      for(j=0;j<colum;j++)
      {

        C[i][j] = A[i][j] - B[i][j];
      }

    }
    printf("\n");
    //printing A-B matrix
    printf("A-B = ");
    for (i=0;i<row;i++)
    {
      for(j=0;j<colum;j++)
      {
          printf("\t%d",C[i] [j]);

      }
      printf("\n");
    }
}

void addition_0f_matrix()
{
      printf("\n\t\t\tAddition\n\n");
      int A[10][10],B[10][10],C[10][10];
    int i,j,row,colum;

    printf("Enter rows  number =\n");
    scanf("%d",&row);
    printf("Enter columns number =\n");
    scanf("%d",&colum);

    //scaning A matrix
    printf("Enter A matrix's elements\n");
    for (i=0;i<row;i++)
    {
      for(j=0;j<colum;j++)
      {
          printf("A[%d][%d]=",i,j);
          scanf("%d",&A[i][j]);
      }
      printf("\n");
    }

    //scaning B matrix
    printf("Enter B matrix's elements\n");
    for (i=0;i<row;i++)
    {
      for(j=0;j<colum;j++)
      {
          printf("B[%d][%d]=",i,j);
          scanf("%d",&B[i][j]);
      }
        printf("\n");
    }

    //printing A matrix
    printf("A = ");
   for (i=0;i<row;i++)
    {
      for(j=0;j<colum;j++)
      {
          printf("\t%d",A[i][j]);

      }
    printf("\n");
    }

    printf("\n");

    //printing B matrix
    printf("B = ");
    for (i=0;i<row;i++)
    {
      for(j=0;j<colum;j++)
      {
          printf("\t%d",B[i] [j]);

      }
      printf("\n");
    }

    //Sum A and B matrix

    for (i=0;i<row;i++)
    {
      for(j=0;j<colum;j++)
      {

        C[i][j] = A[i][j] + B[i][j];
      }

    }
    printf("\n");
    //printing A+B matrix
    printf("A+B = ");
    for (i=0;i<row;i++)
    {
      for(j=0;j<colum;j++)
      {
          printf("\t%d",C[i] [j]);

      }
      printf("\n");
    }

}


void Temperature_scale()
{
     int option7;
     printf("\n\t\t\tTemperature scale\n\n");
     printf("1.Celsius to Kelvin\n2.Celsius to Fahrenheit\n3.Fahrenheit to Kelvin\n");
     printf("4.Kelvin to Celsius\n5.Fahrenheit to Celsius\n6.Kelvin to Fahrenheit\n");
     printf("Choose your option = ");
      scanf("%d",&option7);

     switch(option7)
     {
        case 1:Celsius_to_Kelvin();
            break;
        case 2:Celsius_to_Fahrenheit();
            break;
        case 3:Fahrenheit_to_Kelvin();
            break;
        case 4:Kelvin_to_Celsius();
            break;
        case 5:Fahrenheit_to_Celsius();
            break;
        case 6:Kelvin_to_Fahrenheit();
            break;

     }
}

void area()
{
     int option6;
     printf("\n\t\t\t\tArea\n\n");
     printf("1.Area of Triangle\n2.Area of circle\n3.Area of Square\n");
     printf("4.Area of Rectangle\n5.Area of Rhombus\n6.Area of Parallelogram");
     printf("\nChoose your option = ");
     scanf("%d",&option6);

     switch(option6)
     {
        case 1:triangle();
            break;
        case 2:circle();
            break;
        case 3:square();
            break;
        case 4:rectangle();
            break;
        case 5:rhombus();
            break;
        case 6:parallelogram();
            break;

     }

}

void matrix()
{
    int option4;
    printf("\n\t\t\tMatrix\n\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n");
    printf("\nSelect your operator = ");
    scanf("%d",&option4);

    switch(option4){
    case 1:addition_0f_matrix();
    break;
    case 2:subtraction_of_matrix();
    break;
    case 3:multiplication_of_matrix();
    break;}
}

void BMI()
{
     printf("\n\t\t\t BMI\n\n");
         float height,weight,BMI;
    printf("Enter your height in meter = ");
    scanf("%f",&height);
    printf("Enter your weight in kg = ");
    scanf("%f",&weight);
    BMI=weight/(height*height);
    printf("BMI = %.1f\n",BMI);
    if (BMI<18.5){
        printf("Under Weight");
    }
    else if(BMI>24.9){
        printf("Over Weight");
    }
    else {
        printf("Normal Weight");
    }
}

void Trigonometric_ratios()
{
    printf("\n\t\t\tTrigonometric ratios\n\n");
    float degree,radian;
    const float PI=3.14159;
    int option5;
    printf("1.sin\n2.cos\n3.tan\n4.cosec\n5.sec\n6.cot\n");
    printf("Choose your ratio (1 to 6) = ");
    scanf("%d",&option5);


    printf("Enter your Degree = ");
    scanf("%f",&degree);

    radian = degree * (PI / 180.0 );

    switch(option5)
    {
       case 1:printf("sin(%.2f) = %f\n",degree,sin(radian));
        break;
       case 2:printf("cos(%.2f) = %f\n",degree,cos(radian));
        break;
       case 3:printf("tan(%.2f) = %f\n",degree,tan(radian));
        break;
       case 4:printf("cosec(%.2f) = %f\n",degree,1/sin(radian));
        break;
       case 5:printf("sec(%.2f) = %f\n",degree,1/cos(radian));
        break;
       case 6:printf("cot(%.2f) = %f\n",degree,1/tan(radian));
        break;

    }

}
void percentage()
{
   printf("\n\t\t\tPercentage\n\n");
    float value,percentage_value,percentage;
    printf("Enter your value = ");
    scanf("%f",&value);
    printf("Enter your percentage value = ");
    scanf("%f",&percentage_value);

    percentage = (value * percentage_value)/100;

    printf("%.2f percent of %.2f is %.2f",percentage_value,value,percentage);
}

void factorial()
{
    printf("\n\t\t\tFactorial\n\n");
    int number,factorial=1,i;
    printf("Enter your number : ");
    scanf("%d",&number);
    for(i=number;i>=1;i--)
    {
        factorial=factorial*i;
    }
    printf("Factorial : %d",factorial);

}

void power_of_number()
{
     printf("\n\t\t\tPower of number\n\n");
     int base,expo,power=1,exponent;
    double powers=1.0;
    printf("Enter the base : ");
    scanf("%d",&base);
    printf("Enter the exponent : ");
    scanf("%d",&exponent);
    expo=exponent;
    if(exponent>0)
    {
        while(exponent!=0)
        {
            power=power*base;
            exponent--;
        }
        printf("%d to the power of %d is %d",base,expo,power);
    }
    else{
        while(exponent!=0)
        {
            powers=powers*(1.0/base);
            exponent++;
        }
        printf("%d to the power of %d is %.2f",base,expo,powers);
    }

}

void square_root()
{
     printf("\n\t\t\tSquare_root\n\n");
     float number,root;
    printf("Enter number : ");
    scanf("%f",&number);
    root=sqrt(number);
    printf("\nSquare root of %.2f = %.2f",number,root);

}

void average()
{


    int number, i;
    printf("\n\t\t\tAverage\n\n");
    float numbers[100], sum = 0.0, average;

    printf("Enter the numbers of elements: ");
    scanf("%d", &number);

    while (number > 100 || number < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &number);
    }

    for (i = 0; i <number; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

   average = sum / number;
    printf("\nAverage = %.2f", average);

}

void modulus()
{
    printf("\n\t\t\tModulus\n\n");
    int dividend,divisor;
    int remainder,quotient;
    printf("Enter the dividend =");
    scanf("%d",&dividend);
    printf("Enter the divisor =");
    scanf("%d",&divisor);
    remainder = dividend % divisor;
    quotient = dividend / divisor;

    printf("quotient = %d\n",quotient);
    printf("Remainder = %d",remainder);
}

void division()
{
    printf("\n\t\t\tDivision\n\n");
    float dividend,divisor,quotient;
    printf("Enter the dividend =");
    scanf("%f",&dividend);
    printf("Enter the divisor =");
    scanf("%f",&divisor);
    quotient = dividend / divisor ;

    printf("\n%.2f/%.2f = %.2f\n",dividend,divisor,quotient);
    printf("(%.2f divided by %.2f equal %.2f)",dividend,divisor,quotient);
}

void multiplication()
{
 printf("\n\t\t\tMultiplication\n\n");
  int numbers;
    //printf("\n\t\t\tAddition\n\n");
    printf("How many number you want to calculate = ");
    scanf("%d",&numbers);
    int num[100];
    printf("Enter your numbers = \n");
    for(int i=1,k=0;i<=numbers;i++)
    {

      // printf("Enter your No.%d value :\n",i);
        scanf("%d",&num[k]);
        if(k<numbers)
        k++;
    }
    int Multiplication=num[0];
    for (int k=1;k<numbers;k++)
    {
        Multiplication=Multiplication*num[k];

    }

    printf("Multiplication is = %d",Multiplication);


}

void subtraction()
{
    printf("\n\t\t\tSubtraction\n\n");
    int number1,number2;
    printf("Enter the value of 1st number :\n");
    scanf("%d",&number1);
    printf("Enter the value of 2nd number :\n");
    scanf("%d",&number2);

    printf("%d - %d = %d",number1,number2,number1-number2);

}

void addition()
{
    int numbers;
    printf("\n\t\t\tAddition\n\n");
    printf("How many number you want to calculate = ");
    scanf("%d",&numbers);
    int num[100];
    printf("Enter your numbers = \n");
    for(int i=1,k=0;i<=numbers;i++)
    {

      // printf("Enter your No.%d value :\n",i);
        scanf("%d",&num[k]);
        if(k<numbers)
        k++;
    }
    int sum=0;
    for (int k=0;k<numbers;k++)
    {
        sum=sum+num[k];

    }

    printf("total = %d",sum);

}

void home_page()
{
    int option2,option3;
    printf("----Welcome to Home Page----\n\n");
    printf("1.Addition(+)\n2.Subtraction(-)\n3.Multiplication(*)\n4.Division(/)\n");
    printf("5.Modulus(%)\n6.Average\n7.Square root\n8.power of number\n9.Factorial(!)\n");
    printf("10.Percentage(%)\n11.Trigonometric ratios\n12.BMI\n");
    printf("13.Matrix\n14.Area\n15.Temperature scale\n\n");
    printf("Please Choose your operator = ");
    scanf("%d",&option2);
    switch (option2)
    {
     case 1:addition();
     break;
     case 2:subtraction();
     break;
     case 3:multiplication();
     break;
     case 4:division();
     break;
     case 5:modulus();
     break;
     case 6:average();
     break;
     case 7:square_root();
     break;
     case 8:power_of_number();
     break;
     case 9:factorial();
     break;
     case 10:percentage();
     break;
     case 11:Trigonometric_ratios();
     break;
     case 12:BMI();
     break;
     case 13:matrix();
     break;
     case 14:area();
     break;
     case 15:Temperature_scale();
     break;
    }

    printf("\n\nDo you want to continue??\n");
    printf("1.Yes\n2.No\n");
    printf("Select your option = ");
    scanf("%d",&option3);
    if(option3==1)
    {
        printf("\n");
        home_page();
    }
    else printf("Thank you");


}

int login()
{
    FILE *user_reg;
    user_reg= fopen("regg.txt", "r");
    char admin_id_pass[20];
    int count = 0;

    char phone_number2[20];
    char password2[20];
    printf("\n----Welcome to login section----\n\n");
    printf("Enter your phone number = ");
    scanf(" %[^\n]",phone_number2);
    printf ("Enter your password = ");
    scanf(" %[^\n]",&password2);

    while(fscanf(user_reg, "%s", &admin_id_pass) != EOF)
    {
        count++;
        if(count == 1)
        {
            if(strcmp(phone_number2, admin_id_pass) != 0) {
                printf("INVALID!!!!\n");

                return 0;
            }
        }
        if(count == 2)
        {
            if(strcmp(password2, admin_id_pass) != 0) {
                printf("INVALID!!!!\n");
                return 0;
            }
        }
    }
    printf("LOGIN successfull.\n\n");
    return 1;
}

struct reg
{
    char Name[50];
    char phone_number[20];
    char password[20];
};

void registration()
{
    FILE *fp;
    fp = fopen("regg.txt", "w");
    struct reg user;
    printf("\n-----registration-----\n ");
    printf("\nName = ");
    scanf(" %[^\n]",&user.Name);

    printf("Phone number = ");
    scanf(" %[^\n]",&user.phone_number);
    fprintf(fp, "%s\n", user.phone_number);

    printf("Create a password = ");
    scanf(" %[^\n]",&user.password);
    fprintf(fp, "%s\n", user.password);

    if(login()){
       home_page();
    }
}

void account()
{
    int option;
    printf("\t\t\t\t\t  **************************\n");
    printf("\t\t\t\t\t ****************************\n");
    printf("\t\t\t\t\t**** Welcome to Calculator ***\n");
    printf("\t\t\t\t\t ****************************\n");
    printf("\t\t\t\t\t  **************************\n\n");
    printf("1.Create a new account \n2.I have a account \n\n");
    printf("Choose your option(between 1 & 2) = ");
    scanf("%d",&option);
    if (option==1)
    {
        registration();
    }
    else if(option==2)
    {
        if(login()){
            home_page();
        };
    }
    else
        {printf("You choose wrong option.Please try again.\n\n");
        account();}

}
int main()
{
    account();
    return 0;
}


