#ifndef SINGLE_SOURCE_COMPILE

/*
 * caption_menu.cpp - context menu with a caption
 *
 * Copyright (c) 2007 Javier Serrano Polo <jasp00/at/users.sourceforge.net>
 * 
 * This file is part of Linux MultiMedia Studio - http://lmms.sourceforge.net
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program (see COPYING); if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 *
 */


#include "caption_menu.h"




captionMenu::captionMenu( const QString & _title, QWidget * _parent ) :
	QMenu( _title, _parent )
{
	QAction * caption = addAction( _title );
	caption->setEnabled( FALSE );
}




captionMenu::~captionMenu()
{
}




#include "caption_menu.moc"


#endif
