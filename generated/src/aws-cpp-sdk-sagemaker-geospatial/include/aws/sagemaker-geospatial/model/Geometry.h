/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>The structure representing a Geometry in terms of Type and Coordinates as per
   * GeoJson spec.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/Geometry">AWS
   * API Reference</a></p>
   */
  class Geometry
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API Geometry();
    AWS_SAGEMAKERGEOSPATIAL_API Geometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Geometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The coordinates of the GeoJson Geometry.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& GetCoordinates() const{ return m_coordinates; }

    /**
     * <p>The coordinates of the GeoJson Geometry.</p>
     */
    inline bool CoordinatesHasBeenSet() const { return m_coordinatesHasBeenSet; }

    /**
     * <p>The coordinates of the GeoJson Geometry.</p>
     */
    inline void SetCoordinates(const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& value) { m_coordinatesHasBeenSet = true; m_coordinates = value; }

    /**
     * <p>The coordinates of the GeoJson Geometry.</p>
     */
    inline void SetCoordinates(Aws::Vector<Aws::Vector<Aws::Vector<double>>>&& value) { m_coordinatesHasBeenSet = true; m_coordinates = std::move(value); }

    /**
     * <p>The coordinates of the GeoJson Geometry.</p>
     */
    inline Geometry& WithCoordinates(const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& value) { SetCoordinates(value); return *this;}

    /**
     * <p>The coordinates of the GeoJson Geometry.</p>
     */
    inline Geometry& WithCoordinates(Aws::Vector<Aws::Vector<Aws::Vector<double>>>&& value) { SetCoordinates(std::move(value)); return *this;}

    /**
     * <p>The coordinates of the GeoJson Geometry.</p>
     */
    inline Geometry& AddCoordinates(const Aws::Vector<Aws::Vector<double>>& value) { m_coordinatesHasBeenSet = true; m_coordinates.push_back(value); return *this; }

    /**
     * <p>The coordinates of the GeoJson Geometry.</p>
     */
    inline Geometry& AddCoordinates(Aws::Vector<Aws::Vector<double>>&& value) { m_coordinatesHasBeenSet = true; m_coordinates.push_back(std::move(value)); return *this; }


    /**
     * <p>GeoJson Geometry types like Polygon and MultiPolygon.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>GeoJson Geometry types like Polygon and MultiPolygon.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>GeoJson Geometry types like Polygon and MultiPolygon.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>GeoJson Geometry types like Polygon and MultiPolygon.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>GeoJson Geometry types like Polygon and MultiPolygon.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>GeoJson Geometry types like Polygon and MultiPolygon.</p>
     */
    inline Geometry& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>GeoJson Geometry types like Polygon and MultiPolygon.</p>
     */
    inline Geometry& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>GeoJson Geometry types like Polygon and MultiPolygon.</p>
     */
    inline Geometry& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::Vector<Aws::Vector<Aws::Vector<double>>> m_coordinates;
    bool m_coordinatesHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
