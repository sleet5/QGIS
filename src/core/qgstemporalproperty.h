/***************************************************************************
                         qgstemporalproperty.h
                         ---------------
    begin                : January 2020
    copyright            : (C) 2020 by Samweli Mwakisambwe
    email                : samweli at kartoza dot com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSTEMPORALPROPERTY_H
#define QGSTEMPORALPROPERTY_H


#include "qgis_core.h"
#include "qgis_sip.h"


/**
 * \class QgsTemporalProperty
 * \ingroup core
 * Base class for temporal property.
 *
 * \since QGIS 3.14
 */

class CORE_EXPORT QgsTemporalProperty
{
  public:

    /**
     * Constructor for QgsTemporalProperty.
     *
     * The \a active argument specifies whether the property is initially active (see isActive()).
     */
    QgsTemporalProperty( bool active = false );

    virtual ~QgsTemporalProperty() = default;

    /**
     * Sets whether the temporal property is \a active.
     *
     * \see isActive()
     */
    void setIsActive( bool active );

    /**
     * Returns TRUE if the temporal property is active.
     *
     * \see setIsActive()
    */
    bool isActive() const;

  private:

    bool mActive = false;

};

#endif // QGSTEMPORALPROPERTY_H
