// *** Coded By SahilJoseph *** //
# include <iostream>

int main(int argc, char const *argv[]) {

    while (true) {

        int input;

        std::cout<<"Enter the number : ";
        std::cin>>input;

        for (int i = 0; i <= 10; i++) {

            std::cout<<input<<" X "<<i<<" = "<<(input * i)<<std::endl;

        }

    }

    return 0;
}