/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The structure representing Polygon Geometry based on the <a
   * href="https://www.rfc-editor.org/rfc/rfc7946#section-3.1.6">GeoJson
   * spec</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/PolygonGeometryInput">AWS
   * API Reference</a></p>
   */
  class PolygonGeometryInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API PolygonGeometryInput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API PolygonGeometryInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API PolygonGeometryInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Coordinates representing a Polygon based on the <a
     * href="https://www.rfc-editor.org/rfc/rfc7946#section-3.1.6">GeoJson
     * spec</a>.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& GetCoordinates() const { return m_coordinates; }
    inline bool CoordinatesHasBeenSet() const { return m_coordinatesHasBeenSet; }
    template<typename CoordinatesT = Aws::Vector<Aws::Vector<Aws::Vector<double>>>>
    void SetCoordinates(CoordinatesT&& value) { m_coordinatesHasBeenSet = true; m_coordinates = std::forward<CoordinatesT>(value); }
    template<typename CoordinatesT = Aws::Vector<Aws::Vector<Aws::Vector<double>>>>
    PolygonGeometryInput& WithCoordinates(CoordinatesT&& value) { SetCoordinates(std::forward<CoordinatesT>(value)); return *this;}
    template<typename CoordinatesT = Aws::Vector<Aws::Vector<double>>>
    PolygonGeometryInput& AddCoordinates(CoordinatesT&& value) { m_coordinatesHasBeenSet = true; m_coordinates.emplace_back(std::forward<CoordinatesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::Vector<Aws::Vector<double>>> m_coordinates;
    bool m_coordinatesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
