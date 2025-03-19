/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/MultiPolygonGeometryInput.h>
#include <aws/sagemaker-geospatial/model/PolygonGeometryInput.h>
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
   * <p>A GeoJSON object representing the geographic extent in the coordinate
   * space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/AreaOfInterestGeometry">AWS
   * API Reference</a></p>
   */
  class AreaOfInterestGeometry
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API AreaOfInterestGeometry() = default;
    AWS_SAGEMAKERGEOSPATIAL_API AreaOfInterestGeometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API AreaOfInterestGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The structure representing the MultiPolygon Geometry.</p>
     */
    inline const MultiPolygonGeometryInput& GetMultiPolygonGeometry() const { return m_multiPolygonGeometry; }
    inline bool MultiPolygonGeometryHasBeenSet() const { return m_multiPolygonGeometryHasBeenSet; }
    template<typename MultiPolygonGeometryT = MultiPolygonGeometryInput>
    void SetMultiPolygonGeometry(MultiPolygonGeometryT&& value) { m_multiPolygonGeometryHasBeenSet = true; m_multiPolygonGeometry = std::forward<MultiPolygonGeometryT>(value); }
    template<typename MultiPolygonGeometryT = MultiPolygonGeometryInput>
    AreaOfInterestGeometry& WithMultiPolygonGeometry(MultiPolygonGeometryT&& value) { SetMultiPolygonGeometry(std::forward<MultiPolygonGeometryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure representing Polygon Geometry.</p>
     */
    inline const PolygonGeometryInput& GetPolygonGeometry() const { return m_polygonGeometry; }
    inline bool PolygonGeometryHasBeenSet() const { return m_polygonGeometryHasBeenSet; }
    template<typename PolygonGeometryT = PolygonGeometryInput>
    void SetPolygonGeometry(PolygonGeometryT&& value) { m_polygonGeometryHasBeenSet = true; m_polygonGeometry = std::forward<PolygonGeometryT>(value); }
    template<typename PolygonGeometryT = PolygonGeometryInput>
    AreaOfInterestGeometry& WithPolygonGeometry(PolygonGeometryT&& value) { SetPolygonGeometry(std::forward<PolygonGeometryT>(value)); return *this;}
    ///@}
  private:

    MultiPolygonGeometryInput m_multiPolygonGeometry;
    bool m_multiPolygonGeometryHasBeenSet = false;

    PolygonGeometryInput m_polygonGeometry;
    bool m_polygonGeometryHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
