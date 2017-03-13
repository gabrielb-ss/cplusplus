/**
 * @file	volume.h
 * @brief	Arquivo cabecalho contendo a definicao das funções 
 * 			que calculam o volume de figuras geométricas espaciais
 * @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
 * @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
 * @since	09/03/2017
 * @date	12/03/2017
 */


#ifndef VOLUME_H
#define VOLUME_H


/** 
 * @brief Funcao que calcula o valor do volume da piramide
 * @param base valor da base da piramide
 * @param altura valor da altura da piramide
 * @return volume da piramide
 */
float volumePiramide(float& base, float& altura);


/** 
 * @brief Funcao que calcula o valor do volume do cubo
 * @param aresta valor da aresta do cubo
 * @return volume do cubo
 */
float volumeCubo(float& aresta);


/** 
 * @brief Funcao que calcula o valor do volume do paralelepipedo
 * @param aresta1 valor da aresta #1 do paralelepipedo
 * @param aresta2 valor da aresta #2 do paralelepipedo
 * @param aresta3 valor da aresta #3 do paralelepipedo
 * @return valor do volume do paralelepipedo
 */
float volumeParalelepipedo(float& aresta1, float& aresta2, float& aresta3);


/** 
 * @brief Funcao que calcula o valor do volume da esfera
 * @param raio valor do raio do cubo
 * @return volume da esfera
 */
float volumeEsfera(float& raio);

#endif