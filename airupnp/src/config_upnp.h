/*
 *  Squeeze2upnp - LMS to uPNP gateway
 *
 *  Squeezelite : (c) Adrian Smith 2012-2014, triode1@btinternet.com
 *  Additions & gateway : (c) Philippe 2014, philippe_44@outlook.com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __CONFIG_XML_H
#define __CONFIG_XML_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "ixml.h" /* for IXML_Document, IXML_Element */

void	  	SaveConfig(char *name, void *ref, bool full);
void*		LoadConfig(char *name, struct sMRConfig *Conf);
void*		FindMRConfig(void *ref, char *UDN);
void*		LoadMRConfig(void *ref, char *UDN, struct sMRConfig *Conf);

#endif
