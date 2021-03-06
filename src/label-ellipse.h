/*
 *  label-ellipse.h
 *  Copyright (C) 2001-2009  Jim Evins <evins@snaught.com>.
 *
 *  This file is part of gLabels.
 *
 *  gLabels is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  gLabels is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with gLabels.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __LABEL_ELLIPSE_H__
#define __LABEL_ELLIPSE_H__

#include "label-object.h"


G_BEGIN_DECLS


#define GL_TYPE_LABEL_ELLIPSE            (gl_label_ellipse_get_type ())
#define GL_LABEL_ELLIPSE(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GL_TYPE_LABEL_ELLIPSE, glLabelEllipse))
#define GL_LABEL_ELLIPSE_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), GL_TYPE_LABEL_ELLIPSE, glLabelEllipseClass))
#define GL_IS_LABEL_ELLIPSE(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GL_TYPE_LABEL_ELLIPSE))
#define GL_IS_LABEL_ELLIPSE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GL_TYPE_LABEL_ELLIPSE))

typedef struct _glLabelEllipse          glLabelEllipse;
typedef struct _glLabelEllipseClass     glLabelEllipseClass;

typedef struct _glLabelEllipsePrivate   glLabelEllipsePrivate;

struct _glLabelEllipse {
	glLabelObject          object;

	glLabelEllipsePrivate *priv;
};

struct _glLabelEllipseClass {
	glLabelObjectClass     parent_class;
};

GType           gl_label_ellipse_get_type       (void) G_GNUC_CONST;

GObject        *gl_label_ellipse_new            (glLabel        *label,
                                                 gboolean        checkpoint);

G_END_DECLS

#endif /* __LABEL_ELLIPSE_H__ */




/*
 * Local Variables:       -- emacs
 * mode: C                -- emacs
 * c-basic-offset: 8      -- emacs
 * tab-width: 8           -- emacs
 * indent-tabs-mode: nil  -- emacs
 * End:                   -- emacs
 */
