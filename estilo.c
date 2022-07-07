
*{
    padding: 0;
    box-sizing: border-box;
    list-style: none;
    font-family: 'Raleway', sans-serif;
}
.margen{
    margin: auto;
}

.fondo1{
    background-image: url(imagenes/fondo1.jpg);
    background-size: cover;
    background-position: center;
    
}
.nav-bar-fijo{
    position: fixed;
    width: 100%;
}

.grid1{
    width: 90%;
    height: 90vh;
    display: grid;
    grid-template-columns: repeat(12,1fr);
    gap: 10px;
    overflow: hidden;
    text-align: center;
    margin: auto;
}
.titulo{
    width: 100%;
    height: 100%;
    display: flex;
    justify-content:flex-start;
    align-items: center;
    font-weight: 600;
    font-size: 50px;

}
.titulo--justif{
    text-align: justify;
}
.frase{
    grid-column: 7/13;
    display: flex;
    align-items:flex-end;
    padding-bottom: 50px;
}

.redes{
    position: fixed;
    top: 40%;
    right: 20px;
}
.item{
    padding: 20px 0;
    color: aliceblue;

}
.item a{
    color: white;
}
.grid2{
    width: 60%;
    height: 90vh;
    display: grid;
    grid-template-columns: repeat(6,1fr);
    gap: 10px;
    text-align:center;
    margin: auto 0 auto auto;

}


.pie{
    width: 100%;
    height: 10vh;
    display: flex;
    justify-content: center;
    align-items: center;
    background-color: rgba(0, 0, 0, 0.363);
}
.pie p {
    color:white;
    font-size: 20px;

}
/* Acerca de mi */

.grid3{
    width: 90%;
    height: 84vh;
    text-align: center;
    display: grid;
    grid-template-columns: repeat(12,1fr);
    gap: 10px;
    margin: auto;
}
.fondo--acerca_de_mi{
    background-image: url(/imagenes/AcercaDeMi/imagen\ Acerda\ de\ mi.jpg);
    background-size: cover;
    background-position: center;
}
.cabecera-arcedaDeMi{
    grid-column: 1/-1;
}
.cabecera__titulo{
    font-size: 50px;
    padding-top: 125px;
    padding-bottom: 70px;
}
.acercaDeMi{
    background-color: rgba(0, 0, 0, 0.39);

}
.volver{
    position: fixed;
    left: 0;
    color: red;
    top: 60PX;
}
.volver a{
    color :black
}
.volver a:hover{
    color:  rgb(255, 255, 255);
}
/* articulos */
.fondo-aritulos{
    background:url(imagenes/articulo.jpg);
    background-size: cover;
    background-color: azure;
}

.centar{
    display: flex;
    justify-content: center;
    align-items: center;
}

.cabecera-ar{
    width: 100%;
    height: 20vh;
    background: url(imagenes/articulos/fondo-titulo.jpg);
    background-size: cover;
}
.titulo-ar{
    width: 100%;
    height: 100%;
    display: flex;
    justify-content: center;
    align-items: center;
    color: rgba(0, 0, 0, 0.884);
    background: rgb(254,254,254);
    background: linear-gradient(90deg, rgba(254,254,254,0.15216508966867992) 0%, rgba(255,255,255,1) 50%, rgba(254,254,254,0.17457405325411413) 100%);
}
.nav-articulos{
    grid-column: 1/-1;
}
.pie-articulos{
    width: 100%;
    height: 10vh;
    background:url(imagenes/articulos/fondo-pieDePagina.jpg);
    background-size: cover;
    
}
.parra-articulos{
    display: flex;
    justify-content: center;
    align-items: center;
    width: 100%;
    height: 100%;
    background: rgb(254,254,254);
background: linear-gradient(90deg, rgba(254,254,254,0.6115488431700805) 0%, rgba(255,255,255,1) 50%, rgba(254,254,254,0.6227533249627977) 100%);

}
.items-articulos{
    width: 100%;
    height: 100%;
    display: flex;
    flex-wrap: wrap;
    justify-content: space-evenly;
    align-items:center;
    padding-left: 50px;
}
.item-ar{
    display:block;
    width: 40%;
    background-color: rgba(0, 0, 0, 0.295);
    transition: all 1s;
}
.item-ar:hover{
    transform: scale(1.5);
    padding: 2px;
}
.item-ar a{
    color: rgb(0, 0, 0);
    text-decoration: none;
    font-size: 30px;
    font-weight: 700;
}
/* articulo  */
.arriba{
    position: fixed;
    bottom:10%;
    right: 20px;
}
.arriba a{
    text-decoration: none;
    color: black;
    transition: all 1s;
}
.arriba:hover{
    transform: scale(1.5);

}
.fondo-ar-veggies{

    background-image: url(imagenes/articulos/veggies/veggies.jpg);
    background-size: cover;
    background-position: right;

}
.fondo-ar-sobrePesoObesidad{
    background-image: url(imagenes/articulos/SobrepesoObesidad/fondo-sobrepesoObesidad.jpg);
    background-size: cover;
    background-position: right;

}
.veggies-titulo{
    background-color: rgba(255, 255, 255, 0.342);
    border-radius: 10px;
    padding: 20px;
    text-align: center;
}
.sobrepesoObesidad-titulo{
    background: rgb(238,174,202);
background: radial-gradient(circle, rgba(238,174,202,0) 0%, rgba(245,245,245,1) 100%);
}
.posicion{
    position: fixed;
    top:50%;
    left: 0;
}
.items-articulos{
    grid-column: 7/13;
}
.medidas{
    width: 100%;
    height: 100%;
}
.flex-articulos{
    width: 100%;
    height: 100%;
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: space-evenly;
}
.flex-articulos li a {
    text-decoration: none;
    list-style: none;
    color: white;
}
.articulos-ar{
    background-color: rgba(255, 255, 255, 0.397);
    color: white;
    padding: 10px;
    transition: all 1s;
    border-radius: 5px;
}

.grid-articulo{
    padding-top: 40px;
    width: 80%;
    height: 90vh;
    margin:10px auto;
    display: grid;
    grid-template-columns: repeat(3,1fr);
    grid-template-rows: repeat(6,1fr);
    border-bottom: 2px solid black;
    
}
.titulo-articulo-ar{
    grid-column: 1/4;
    display: flex;
    justify-content: center;
    align-items: center;
}
.titulo-articulo-ar h3{
    font-size: 25px;
    color:rgb(5, 5, 5);
}

.parrafo-ar1{

    width: 100%;
    height: 100%;
    display: flex;
    justify-content: center;
    align-items: flex-start;
    grid-column: 1/4;
    padding-top: 30px;

}


.ar-img{
    grid-column: 3/4;
    grid-row: 3/7;
    width: 100%;
    height: 300px;
    display: flex;
    align-items: center;
    justify-content: center;
}
.img{
    margin-top: 60px;
    width: 100%;
    height: 100%;
    text-align: center;
    object-fit: cover;

}
.grid-final-pagina{
    width: 90%;
    height: 90vh;
    display: grid;
    grid-template-columns: repeat(12,1fr);
    gap: 10px;
    overflow: hidden;
    text-align: center;
    margin: auto;

}
/* RECETAS */
.grid-recetas{
    width: 90%;
    padding-top: 70px;
    margin: auto;
    display: grid;
    grid-template-columns: repeat(6,1fr);
    grid-template-rows: repeat(2, 450px);
    gap: 30px;
}
 .card-1{
        grid-column: 1/3;
 }
.card-2{
        grid-column: 3/5;
 }
.card-3{
        grid-column:5/7;
}
.card-4{
        grid-column:1/4;
 }
.card-5{
        grid-column:4/7;
}
.card-4-1{
    grid-column: 1/3;

}
.card-5-2{
    grid-column: 3/5;
    
}
.card-6-3{
    grid-column:5/7;
    margin-bottom: 30px;
    
}

.cabecera-re{
    width: 100%;
    height: 20vh;
    background: url(imagenes/fondo1.jpg);
    background-size: cover;
    background-position: center;
}
.animacion{
    width: 18rem;
    transition: all;
    transition-duration: 1s;
}
.animacion:hover{
    cursor:pointer;
    width: 22rem;
    height: 27rem;
}
/* turnos */
.columbas-email{
    grid-column: 1/5;
}
.columbas-tel{
    grid-column: 5/9;

}
.columbas-insta{
    grid-column: 9/13;
}
.contactos-centrar{
    width: 100%;
    height: 100%;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
}
/* media queri */

@media only screen and (max-width: 600px){
    .titulo{
        grid-column: 1/-1;
        justify-content: center;
    }
    .titulo--justif{
        font-size: 50px;
        text-align: center
    }
    .frase{
        grid-column: 1/-1;
        justify-content: center;

    }
    .item-ar{
        width: 100%;
        border: 2px black solid;
        padding: 0;

        margin: auto auto auto auto;
    }
    .nav-articulos{
        grid-column: 1/-1;
    }
    .items-articulos{
        display: flex;
        flex-direction: column;
        justify-content: center;
        align-items: flex-start;padding-left: 0;

    }
    .items-articulos{
        grid-column: 1/-1;;
    }
    .flecha{
        display: none
    }
    .posicion{
       display: none;
    }
    .grid-recetas{
        grid-template-rows: repeat(5,450px);
    }
    .card-1{
        grid-column: 1/7;
    }
    .card-2{
        grid-column: 1/7;
    }
    .card-3{
        grid-column:1/7;
    }
    .card-4{
        grid-column:1/7;
    }
    .card-5{
        grid-column:1/7;
    }
    .card-4-1{
        grid-column: 1/7;
    
    }
    .card-5-2{
        grid-column: 1/7;
        
    }
    .card-6-3{
        grid-column:1/7;
        
    }
}

@media only screen and (min-width: 601px) and (max-width: 1000px){
    .grid-recetas {
        grid-template-rows: repeat(3,450px);
    }
    .card-1{
        grid-column: 1/4;
        grid-row: 1/2;
    }
    .card-2{

        grid-column: 4/7;
        grid-row: 1/2;
    }
    .card-3{
        
        grid-column:1/4;
        grid-row: 2/3;
    }
    .card-4{
        grid-column:4/7;
        grid-row: 2/3;
    }
    .card-5{
        grid-column:1/7;
        grid-row: 3/4;
    }
    .card-4-1{
        grid-column: 4/7;
    
    }
    .card-5-2{
        grid-column: 1/4;
        
    }
    .card-6-3{
        grid-column:4/7;
        
    }

};


    