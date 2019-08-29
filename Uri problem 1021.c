#include<stdio.h>
#include<math.h>
void main(){
    double handerd=100.00, fifty=50.00, twinty=20.00,ten=10.00,five=5.00,two=2.00,one=1.00,mfifty=0.50,mtwintyFive=0.25,mten=0.10,mfive=0.05,monen=0.01;
    double n;
     scanf("%lf",&n);
            fmod(n,handerd);
        printf("NOTAS:\n");
       int count_handerd=n/handerd;
        printf("%d nota(s) de R$ 100.00 \n",count_handerd);
            fmod(fmod(n,handerd),fifty);

        int count_fifty= fmod(n,handerd)/fifty;
        printf("%d nota(s) de R$ 50.00 \n",count_fifty);
            fmod(fmod(fmod(n,handerd),fifty),twinty);

        int count_twinty= fmod(fmod(n,handerd),fifty)/twinty;
        printf("%d nota(s) de R$ 20.00 \n",count_twinty);
            fmod(fmod(fmod(fmod(n,handerd),fifty),twinty),ten);

        int count_ten= fmod(fmod(fmod(n,handerd),fifty),twinty)/ten;
        printf("%d nota(s) de R$ 10.00 \n",count_ten);
            fmod(fmod(fmod(fmod(fmod(n,handerd),fifty),twinty),ten),five);

        int count_five= fmod(fmod(fmod(fmod(n,handerd),fifty),twinty),ten)/five;
        printf("%d nota(s) de R$ 5.00 \n",count_five);
            fmod(fmod(fmod(fmod(fmod(fmod(n,handerd),fifty),twinty),ten),five),two);

        int count_two= fmod(fmod(fmod(fmod(fmod(n,handerd),fifty),twinty),ten),five)/two;
        printf("%d nota(s) de R$ 2.00 \n",count_two);

        printf("MOEDAS:\n");
            fmod(fmod(fmod(fmod(fmod(fmod(fmod(n,handerd),fifty),twinty),ten),five),two),one);
        int count_one= fmod(fmod(fmod(fmod(fmod(fmod(n,handerd),fifty),twinty),ten),five),two)/one;
        printf("%d moeda(s) de R$ 1.00 \n",count_one);

          fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(n,handerd),fifty),twinty),ten),five),two),one),mfifty);
        int count_mfifty= fmod(fmod(fmod(fmod(fmod(fmod(fmod(n,handerd),fifty),twinty),ten),five),two),one)/mfifty;
        printf("%d moeda(s) de R$ 0.50 \n",count_mfifty);

        fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(n,handerd),fifty),twinty),ten),five),two),one),mfifty),mtwintyFive);
        int count_mtwintyFive= fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(n,handerd),fifty),twinty),ten),five),two),one),mfifty)/mtwintyFive;
        printf("%d moeda(s) de R$ 0.25 \n",count_mtwintyFive);

        fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(n,handerd),fifty),twinty),ten),five),two),one),mfifty),mtwintyFive),mten);
        int count_mten= fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(n,handerd),fifty),twinty),ten),five),two),one),mfifty),mtwintyFive)/mten;
        printf("%d moeda(s) de R$ 0.10 \n",count_mten);

        fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(n,handerd),fifty),twinty),ten),five),two),one),mfifty),mtwintyFive),mten),mfive);
        int count_mfive= fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(n,handerd),fifty),twinty),ten),five),two),one),mfifty),mtwintyFive),mten)/mfive;
        printf("%d moeda(s) de R$ 0.05 \n",count_mfive);

        fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(n,handerd),fifty),twinty),ten),five),two),one),mfifty),mtwintyFive),mten),mfive),monen);
        int count_monen= fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(n,handerd),fifty),twinty),ten),five),two),one),mfifty),mtwintyFive),mten),mfive)/monen;
        printf("%d moeda(s) de R$ 0.01 \n",count_monen);

}


