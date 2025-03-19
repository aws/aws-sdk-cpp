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
    AWS_SAGEMAKERGEOSPATIAL_API Geometry() = default;
    AWS_SAGEMAKERGEOSPATIAL_API Geometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Geometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The coordinates of the GeoJson Geometry.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& GetCoordinates() const { return m_coordinates; }
    inline bool CoordinatesHasBeenSet() const { return m_coordinatesHasBeenSet; }
    template<typename CoordinatesT = Aws::Vector<Aws::Vector<Aws::Vector<double>>>>
    void SetCoordinates(CoordinatesT&& value) { m_coordinatesHasBeenSet = true; m_coordinates = std::forward<CoordinatesT>(value); }
    template<typename CoordinatesT = Aws::Vector<Aws::Vector<Aws::Vector<double>>>>
    Geometry& WithCoordinates(CoordinatesT&& value) { SetCoordinates(std::forward<CoordinatesT>(value)); return *this;}
    template<typename CoordinatesT = Aws::Vector<Aws::Vector<double>>>
    Geometry& AddCoordinates(CoordinatesT&& value) { m_coordinatesHasBeenSet = true; m_coordinates.emplace_back(std::forward<CoordinatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>GeoJson Geometry types like Polygon and MultiPolygon.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    Geometry& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Vector<Aws::Vector<double>>> m_coordinates;
    bool m_coordinatesHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
