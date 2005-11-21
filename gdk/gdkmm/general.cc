// -*- c++ -*-
/* $Id$ */

/* Copyright 2002      The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gdkmm/general.h>
#include <gdk/gdk.h>

namespace Gdk
{

int screen_width()
{
  return gdk_screen_width();
}

int screen_height()
{
  return gdk_screen_height();
}

int screen_width_mm()
{
  return gdk_screen_width_mm();
}

int screen_height_mm()
{
  return gdk_screen_height_mm();
}


void flush()
{
  gdk_flush();
}

namespace Cairo
{

void set_source_color(Context& context, const Gdk::Color& color)
{
  gdk_cairo_set_source_color(context, const_cast<GdkColor*>(color.gobj()));
}

void set_source_pixbuf(Context& context, const Glib::RefPtr<Gdk::Pixbuf>& pixbuf, double pixbuf_x, double pixbuf_y)
{
  gdk_cairo_set_source_pixbuf(context, pixbuf->gobj(), pixbuf_x, pixbuf_y);
}

void rectangle(Context& context, const Gdk::Rectangle& rectangle)
{
  gdk_cairo_rectangle(context, const_cast<GdkRectangle*>(rectangle.gobj()));
}

void region(Context& context, const Gdk::Region& region)
{
  gdk_cairo_region(context, const_cast<GdkRegion*>(region.gobj()));
}

} //namespace Cairo

} //namespace Gdk

