#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    // Check args.
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " PINCTRLVAL" << std::endl;
        return EXIT_FAILURE;
    }

    // Parse PINCTRLVAL to numeric value.
    std::string input = argv[1];
    int pinctrlval = std::stoi(input);

    // Determine attributes.
    int sre = pinctrlval & 0x1;
    if (sre == 0)
    {
        std::cout << "PAD_CTL_SRE_SLOW" << std::endl;
    }
    else
    {
        std::cout <<  "PAD_CTL_SRE_FAST" << std::endl;
    }
    
    int dse = pinctrlval & 0x38;
    if (dse == 0)
    {
        std::cout << "PAD_CTL_DSE_DISABLE" << std::endl;
    }
    else if (dse == 1)
    {
        std::cout << "PAD_CTL_DSE_240ohm" << std::endl;
    }
    else if (dse == 2)
    {
        std::cout << "PAD_CTL_DSE_120ohm" << std::endl;
    }
    else if (dse == 3)
    {
        std::cout << "PAD_CTL_DSE_80ohm" << std::endl;
    }
    else if (dse == 4)
    {
        std::cout << "PAD_CTL_DSE_60ohm" << std::endl;
    }
    else if (dse == 5)
    {
        std::cout << "PAD_CTL_DSE_48ohm" << std::endl;
    }
    else if (dse == 6)
    {
        std::cout << "PAD_CTL_DSE_40ohm" << std::endl;
    }
    else if (dse == 7)
    {
        std::cout << "PAD_CTL_DSE_34ohm" << std::endl;
    }

    int speed = pinctrlval & 0x7C0;
    if (speed == 0)
    {
        std::cout << "PAD_CTL_SPEED_LOW" << std::endl;
    }
    else if (speed == 1)
    {
        std::cout << "PAD_CTL_SPEED_MED" << std::endl;
    }
    else if (speed == 2)
    {
        std::cout << "PAD_CTL_SPEED_MED" << std::endl;
    }
    else if (speed == 3)
    {
        std::cout << "PAD_CTL_SPEED_HIGH" << std::endl;
    }

    int ode = pinctrlval & 0x800;
    if (ode == 1)
    {
        std::cout << "PAD_CTL_ODE" << std::endl;
    }

    int pke = pinctrlval & 0x1000;
    if (pke == 1)
    {
        std::cout << "PAD_CTL_PKE" << std::endl;
    }

    int pue = pinctrlval & 0x2000;
    if (pue == 1)
    {
        std::cout << "PAD_CTL_PUE" << std::endl;
    }

    int pus = pinctrlval & 0xC000;
    if (pus == 0)
    {
        std::cout << "PAD_CTL_PUS_100K_DOWN" << std::endl;
    }
    else if (pus == 1)
    {
        std::cout << "PAD_CTL_PUS_47K_UP" << std::endl;
    }
    else if (pus == 2)
    {
        std::cout << "PAD_CTL_PUS_100K_UP" << std::endl;
    }
    else if (pus == 3)
    {
        std::cout << "PAD_CTL_PUS_22K_UP" << std::endl;
    }

    int hys = pinctrlval & 0x10000;
    if (hys)
    {
        std::cout << "PAD_CTL_HYS" << std::endl;
    }

    return EXIT_SUCCESS;
}