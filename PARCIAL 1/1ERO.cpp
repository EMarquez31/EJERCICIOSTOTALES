#include <iostream>
#include <math.h>

using namespace std;

int main (){


    int menu;



    

    cout<<"\nLa Fundacion para el desarrollo sostenible social y comunitario de Colombia - PROSPERAR, aqui te contamos un poco sobre nosotros, ¿Que deseas saber? "<<endl;
    cout<<"1 - Quienes somos?"<<endl<<"2 - Equipo de trabajo"<<endl<<"3 - Proyectos desarrollados"<<endl<<"4 - Realiza una donacion "<<endl<<"5 - Contacto"<<endl<<"6 - Estadisticas ambientales en el mundo"<<endl<<"7 - Salir "<<endl;
    cin>>menu;

        if(menu<1 || menu>7){

        cout<<"\nSolo valores entre 1 y 7"<<endl;
        return main();
    }
    
    else{

    if (menu == 1){
        cout<<"\nPROSPERAR - Somos una Organizacion No Gubernamental con mucha experiencia y credibilidad, dedicada a desarrollar proyectos de impacto Ambiental y Social, compuesta por un equipo tecnico altamente calificado con una vasta experiencia, y fundamentado en principios eticos, valores morales y superacion personal."<<endl;

    }
     if(menu == 2){

        cout<<"\nContamos con un amplio equipo de trabajo, una gran familia, entre ellos:"<<endl<<"Margarita Buitrago - DIRECTORA"<<endl<<"Hernan Carmona - CIENTIFICO"<<endl<<"Jose Felipe Mesa - DIR. PROYECTOS Y FUNDADOR"<<endl<<"Jaime Humberto Mesa - DIR JURIDICO"<<endl<<"Eduardo Andres Mesa - DIR OPERATIVO"<<endl<<"Maria Margarita Mesa - ASESORA JURIDICA"<<endl<<"Consuelo Rodriguez - DIR CULTURAL"<<endl;
    }

    if( menu== 3){
        int menu3;
        cout<<"\nHemos desarrollado programas como :"<<endl<<"1-RECICLATE"<<endl<<"2 - ESTRATEGIAS DE LA CONSERVACION"<<endl<<"3 - MUSEO SUBACUATICO TAIRONA"<<endl<<"Sobre cuál quiere saber?"<<endl;
        cin>>menu3;

        if(menu3 >= 1 || menu >= 3){
            
        if(menu3==1){
            cout<<"\nEsta iniciativa, acerca a las personas del Departamento del Atlantico a ver su realidad ambiental ante la degradacion de los recursos naturales y sus repercusiones en la calidad de vida de los seres humanos promoviendo mecanismos eficaces de jovenes atlanticenses con el reciclaje en la lucha por la disminucion del Calentamiento Global. Reciclate llego no solo a los colegios y los parques, tambien se articularon universidades, empresas, asociaciones, organizaciones del estado y organizaciones no gubernamentales, convirtiendose en una herramienta generadora de rentabilidad social ambiental."<<endl;
        }
        if(menu3==2){
            cout<<"\nEs una plataforma conformada por una serie de actividades que promover cultura ambientalmente solidaria y sostenible.En sus comienzos fue diseñada como una gran iniciativa de educación ambiental rodeada de una serie de actividades de divulgacion a todo nivel y en diversos escenarios con el proposito de lograr la mayor cobertura en el menor tiempo posible.Reciclate Al Colegio, Reciclate Al Parque, Reciclate Al Centro Comercial, Esfera Azul Radio, Esfera Azul Spots Para Television Regional (Telecaribe) Y Nuestra Fauna En Libertad, fueron algunas de esas iniciativas.";
        }
        if(menu3==3){
            cout<<"\nLa Fundacion Prosperar lidero esta iniciativa desarrollando actividades que ayudaran a proteger los arrecifes naturales existentes y a promover la formacion de arrecifes artificiales. De alli surgio la idea de crear un museo subacuatico en uno de los lugares cuyos arrecifes coralinos han ganado fama por ser una productiva fuente de pesca y por ofrecer excelentes condiciones para el buceo recreativo: Taganga."<<endl<<"Se planteo el museo como un lugar de acceso libre al publico que contara con obras de tres tipos:"<<endl<<"1. Relativas a las culturas indigenas precolombinas del pais"<<"2. Obras contemporaneas de artistas reconocidos"<<endl<<"3. Obras de arquitectura y naufragios"<<endl<<"Es una iniciativa que articulara la participacion activa de la empresa privada, la academia y entidades publicas de cara a la proteccion y fomento del medio ambiente. A la fecha se ha contado con la importante participación de actores como Distoyota, Aerorepublica, La Universidad Jorge Tadeo Lozano, la Dimar a traves de la Capitania de Puerto de Magdalena, el Hotel ballena Azul, cuatro centros de buceo, la revista Panorama de Copa Airlines y otros medios de comunicacion como El Tiempo, El Espectador, el Programa Travesias de Caracol Internacional, la radio Nacional, entre otros.En la actualidad estamos perfeccionando los mecanismos y gestionando los recursos para dar continuidad a esta iniciativa.";
        }
        }
        else{
            return main();
        }


    }
    if( menu==4){
        cout<<"\nEs importante para nosotros que usted crea en PROSPERAR realice la donacion atraves de recarga de celular oficial a cualquiera de estos numeros :"<<endl<<"+57 313 684 1532"<<endl<<"+57 316 8711321"<<endl;
    }
    if( menu == 5){

        cout<<"\nContactenos desde medios moviles a el numero"<<endl<<" 317 423 1486"<<endl<<"PBX: (+57) 3095548"<<endl<<"Correo : contacto@funprosperar.org"<<endl;

    }
    if(menu == 7){
        cout<<"\nGracias por su tiempo"<<endl;
        return 0;
    }
    if(menu==6){

        cout<<"\n- Segun estimaciones de 2016, la contaminacion atmosferica en las ciudades y zonas rurales de todo el mundo provoca cada año 4,2 millones de defunciones prematuras."<<endl<<"- Cerca del 93% de los niños y niñas del mundo menores de 15 años (es decir, 1800 millones de niños y niñas) respiran aire tan contaminado que pone en grave peligro su salud y su crecimiento. la tasa de mortalidad es de un 33 %, entre todas las infecciones respiratorias de menores a nivel mundial."<<endl<<"- 3000 millones de personas —mas del 40% de la poblacion mundial— siguen sin tener acceso a combustibles y tecnologias de coccion limpios en sus hogares, lo que constituye la principal causa de contaminacion del aire domestico."<<endl<<"Muchas megalopolis de todo el mundo quintuplican con creces los niveles fijados en las directrices de la OMS sobre la calidad del aire, lo que representa un riesgo considerable para la salud de las personas."<<endl<<"\n Claves para frenar la contaminacion del aire"<<endl<<"\n- Reducir las emisiones de las principales industrias y fuentes de fabricacion."<<endl<<"- Adoptar y hacer cumplir las emisiones de los vehículos."<<endl<<"- Aumentar la inversion en energias renovables y eficiencia energetica"<<endl;

    }
    return main();
}
}