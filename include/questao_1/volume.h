/**
 * @file	volume.h
 * @brief	Arquivo cabeçalho contendo a definição das funções 
 * 			que calculam o volume de figuras geométricas espaciais
 * @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
 * @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
 * @since	09/03/2017
 * @date	12/03/2017
 */


#ifndef VOLUME_H
#define VOLUME_H


/** 
 * @brief	Função que calcula o valor do volume da pirâmide
 * @param	base BASE valor da base da piramide
 * @param	altura ALTURA valor da altura da piramide
 * @return	volume da piramide
 */
float volumePiramide(float& base, float& altura);


/** 
 * @brief	Função que calcula o valor do volume do cubo
 * @param	aresta ARESTA valor da aresta do cubo
 * @return	volume do cubo
 */
float volumeCubo(float& aresta);


/** 
 * @brief	Função que calcula o valor do volume do paralelepípedo
 * @param	aresta1 ARESTA1 valor da aresta #1 do paralelepípedo
 * @param	aresta2 ARESTA2 valor da aresta #2 do paralelepípedo
 * @param	aresta3 ARESTA3 valor da aresta #3 do paralelepípedo
 * @return	valor do volume do paralelepipedo
 */
float volumeParalelepipedo(float& aresta1, float& aresta2, float& aresta3);


/** 
 * @brief	Função que calcula o valor do volume da esfera
 * @param	raio RAIO valor do raio do cubo
 * @return	volume da esfera
 */
float volumeEsfera(float& raio);

#endif