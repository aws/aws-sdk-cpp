﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/ElevationReference.h>
#include <aws/privatenetworks/model/ElevationUnit.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PrivateNetworks
{
namespace Model
{

  /**
   * <p>Information about a position.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/Position">AWS
   * API Reference</a></p>
   */
  class Position
  {
  public:
    AWS_PRIVATENETWORKS_API Position();
    AWS_PRIVATENETWORKS_API Position(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Position& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The elevation of the equipment at this position.</p>
     */
    inline double GetElevation() const{ return m_elevation; }
    inline bool ElevationHasBeenSet() const { return m_elevationHasBeenSet; }
    inline void SetElevation(double value) { m_elevationHasBeenSet = true; m_elevation = value; }
    inline Position& WithElevation(double value) { SetElevation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference point from which elevation is reported.</p>
     */
    inline const ElevationReference& GetElevationReference() const{ return m_elevationReference; }
    inline bool ElevationReferenceHasBeenSet() const { return m_elevationReferenceHasBeenSet; }
    inline void SetElevationReference(const ElevationReference& value) { m_elevationReferenceHasBeenSet = true; m_elevationReference = value; }
    inline void SetElevationReference(ElevationReference&& value) { m_elevationReferenceHasBeenSet = true; m_elevationReference = std::move(value); }
    inline Position& WithElevationReference(const ElevationReference& value) { SetElevationReference(value); return *this;}
    inline Position& WithElevationReference(ElevationReference&& value) { SetElevationReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The units used to measure the elevation of the position.</p>
     */
    inline const ElevationUnit& GetElevationUnit() const{ return m_elevationUnit; }
    inline bool ElevationUnitHasBeenSet() const { return m_elevationUnitHasBeenSet; }
    inline void SetElevationUnit(const ElevationUnit& value) { m_elevationUnitHasBeenSet = true; m_elevationUnit = value; }
    inline void SetElevationUnit(ElevationUnit&& value) { m_elevationUnitHasBeenSet = true; m_elevationUnit = std::move(value); }
    inline Position& WithElevationUnit(const ElevationUnit& value) { SetElevationUnit(value); return *this;}
    inline Position& WithElevationUnit(ElevationUnit&& value) { SetElevationUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latitude of the position.</p>
     */
    inline double GetLatitude() const{ return m_latitude; }
    inline bool LatitudeHasBeenSet() const { return m_latitudeHasBeenSet; }
    inline void SetLatitude(double value) { m_latitudeHasBeenSet = true; m_latitude = value; }
    inline Position& WithLatitude(double value) { SetLatitude(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The longitude of the position.</p>
     */
    inline double GetLongitude() const{ return m_longitude; }
    inline bool LongitudeHasBeenSet() const { return m_longitudeHasBeenSet; }
    inline void SetLongitude(double value) { m_longitudeHasBeenSet = true; m_longitude = value; }
    inline Position& WithLongitude(double value) { SetLongitude(value); return *this;}
    ///@}
  private:

    double m_elevation;
    bool m_elevationHasBeenSet = false;

    ElevationReference m_elevationReference;
    bool m_elevationReferenceHasBeenSet = false;

    ElevationUnit m_elevationUnit;
    bool m_elevationUnitHasBeenSet = false;

    double m_latitude;
    bool m_latitudeHasBeenSet = false;

    double m_longitude;
    bool m_longitudeHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
