#include <iostream>
using namespace std;

struct Anime_List
{
    string Anime_Attack_on_Titan, Anime_Naruto, Anime_One_Piece, Anime_Death_Note, Anime_Demon_Slayer, Anime_Jujutsu_Kaisen, Anime_My_Hero_Academia, Anime_Hunter_x_Hunter, Anime_One_Punch_Man, Anime_Detective_Conan;
   
    string Eren, Naruto, Luffy, Light, Tanjiro, Satoru, Katsuki, Killua, Saitama, Conan;
   
    string Info_Eren, Info_Naruto, Info_Luffy, Info_Light, Info_Tanjiro, Info_Satoru, Info_Katsuki, Info_Killua, Info_Saitama, Info_Conan;
};

// Anime Name DATA :] 

void Anime_Attack_on_Titan()
{
    Anime_List DATA;

    DATA.Anime_Attack_on_Titan = "Attack on Titan";
    cout << "Your Anime is : " << DATA.Anime_Attack_on_Titan << endl;

    DATA.Info_Eren = "Hot-tempered, stubborn, and possesses an iron will for freedom.";
    cout << "Character Info : " << DATA.Info_Eren;
}

void Anime_Naruto()
{
    Anime_List DATA;

    DATA.Anime_Naruto = "Naruto";
    cout << "Your Anime is : " <<  DATA.Anime_Naruto << endl;

    DATA.Info_Naruto = "Energetic, loves ramen, and aims to become Hokage.";
    cout << "Character Info : " << DATA.Info_Naruto;
}

void Anime_One_Piece()
{
    Anime_List DATA;

    DATA.Anime_One_Piece = "One Piece";
    cout << "Your Anime is : " << DATA.Anime_One_Piece << endl;
    
    DATA.Info_Luffy = "Cheerful captain, loves food, and wants to become the Pirate King.";
    cout << "Character Info : " << DATA.Info_Luffy;
}
void Anime_Death_Note ()
{
    Anime_List DATA;

    DATA.Anime_Death_Note = "Death Note";
    cout << "Your Anime is : " << DATA.Anime_Death_Note << endl;

    DATA.Info_Light = "Genius, cold-hearted, and sees himself as the savior of the world.";
    cout << "Character Info : " << DATA.Info_Light;

}
void Anime_Demon_Slayer()
{
    Anime_List DATA;

    DATA.Anime_Demon_Slayer = "Demon Slayer";
    cout << "Your Anime is : " << DATA.Anime_Demon_Slayer << endl;

    DATA.Info_Tanjiro = "Kind-hearted, has a strong sense of smell, and fights to save his sister.";
    cout << "Character Info : " << DATA.Info_Tanjiro;

}
void Anime_Jujutsu_Kaisen()
{
    Anime_List DATA;

    DATA.Anime_Jujutsu_Kaisen = "Jujutsu Kaisen";
    cout << "Your Anime is : " << DATA.Anime_Jujutsu_Kaisen << endl;

    DATA.Info_Satoru = "Extremely powerful, playful, and wears a blindfold over his eyes.";
    cout << "Character info : " << DATA.Info_Satoru;
}
void Anime_My_Hero_Academia()
{
    Anime_List DATA;

    DATA.Anime_My_Hero_Academia = "My Hero Academia";
    cout << "Your Anime is : " << DATA.Anime_My_Hero_Academia << endl;

    DATA.Info_Katsuki = "Aggressive, explosive power, and fiercely competitive.";
    cout << "Character Info : " << DATA.Info_Katsuki;
}
void Anime_Hunter_x_Hunter()
{
    Anime_List DATA;

    DATA.Anime_Hunter_x_Hunter = "Hunter x Hunter";
    cout << "Your Anime is : " << DATA.Anime_Hunter_x_Hunter << endl;

    DATA.Info_Killua = "Smart, cold-headed assassin, and a very loyal friend.";
    cout << "Character" << DATA.Info_Killua;
}
void Anime_One_Punch_Man()
{
    Anime_List DATA;

    DATA.Anime_One_Punch_Man = "One Punch Man";
    cout << "Your Anime is : " << DATA.Anime_One_Punch_Man << endl;

    DATA.Info_Saitama = "Defeats any enemy with one punch, bald, and bored of his power.";
    cout << "Characteer Info : " << DATA.Info_Saitama;
}
void Anime_Detective_Conan()
{
    Anime_List DATA;

    DATA.Anime_Detective_Conan = "Detective Conan";
    cout << "Your Anime is : " << DATA.Anime_Detective_Conan << endl;

    DATA.Info_Conan = "Genius detective trapped in a child's body using cool gadgets.";
    cout << "Character Info : " << DATA.Info_Conan;
}


int main()
{
    Anime_List DATA;

    while (true)
    {
        Anime_Attack_on_Titan();
        cin >> DATA.Eren;

        if (DATA.Eren == "Eren")
        {
            cout << "Curect :)" << endl;
            break;
        }
        else
        {
            cout << "Noob, Try Again! :(" << endl;
        }
        
        
    }    

    
    while (true)
    {
        Anime_Naruto();
        cin >> DATA.Naruto;

        if (DATA.Naruto == "Naruto")
        {
            cout << "Curect :)" << endl;
            break;
        }
        else
        {
            cout << "Noob, Try Again! :(" << endl;   
        }
        
    }

    
    while (true)
    {
        Anime_One_Piece();
        cin >> DATA.Luffy;

        if (DATA.Luffy == "Luffy")
        {
            cout << "Curect :)" << endl;
            break;
        }
        else
        {
            cout << "Noob, Try Again! :(" << endl;   
        }
    }

    
    while (true)
    {
        Anime_Death_Note();
        cin >> DATA.Light;
        
        if (DATA.Light == "Light")
        {
            cout << "Curect :)" << endl;
            break;
        }
        else
        {
            cout << "Noob, Try Again! :(" << endl;   
        }
    }

    
    while (true)
    {
        Anime_Demon_Slayer();
        cin >> DATA.Tanjiro;

        if (DATA.Tanjiro == "Tanjiro")
        {
            cout << "Curect :)" << endl;
            break;
        }
        else
        {
            cout << "Noob, Try Again! :(" << endl;   
        }
    }

    
    while (true)
    {
        Anime_Jujutsu_Kaisen();
        cin >> DATA.Satoru;

        if (DATA.Satoru == "Satoru")
        {
            cout << "Curect :)" << endl;
            break;
        }
        else
        {
            cout << "Noob, Try Again! :(" << endl;   
        }
    }
    
    
    while (true)
    { 
        Anime_My_Hero_Academia();
        cin >> DATA.Katsuki;
        if (DATA.Katsuki == "Katsuki")
        {
            cout << "Curect :)" << endl;
            break;
        }
        else
        {
            cout << "Noob, Try Again! :(" << endl;   
        }
    }

    
    while (true)
    {
        Anime_Hunter_x_Hunter();
        cin >> DATA.Killua;

        if (DATA.Killua == "Killua")
        {
            cout << "Curect :)" << endl;
            break;
        }
        else
        {
            cout << "Noob, Try Again! :(" << endl;   
        }
    }

    
    while (true)
    {
        Anime_One_Punch_Man();
        cin >> DATA.Saitama;

        if (DATA.Saitama == "Saitama")
        {
            cout << "Curect :)" << endl;
            break;
        }
        else
        {
            cout << "Noob, Try Again! :(" << endl;   
        }
    }

    
    while (true)
    {
        Anime_Detective_Conan();
        cin >> DATA.Conan;

        if (DATA.Conan == "Conan")
        {
            cout << "Curect :)" << endl;
            break;
        }
        else
        {
            cout << "Noob, Try Again! :(" << endl;   
        }
    }

    cout << "Congratulations on finishing the game. Shahm Maatouki";
    
    
    
    
    
 
    return 0;

}