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
    AWS_SAGEMAKERGEOSPATIAL_API AreaOfInterestGeometry();
    AWS_SAGEMAKERGEOSPATIAL_API AreaOfInterestGeometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API AreaOfInterestGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The structure representing the MultiPolygon Geometry.</p>
     */
    inline const MultiPolygonGeometryInput& GetMultiPolygonGeometry() const{ return m_multiPolygonGeometry; }
    inline bool MultiPolygonGeometryHasBeenSet() const { return m_multiPolygonGeometryHasBeenSet; }
    inline void SetMultiPolygonGeometry(const MultiPolygonGeometryInput& value) { m_multiPolygonGeometryHasBeenSet = true; m_multiPolygonGeometry = value; }
    inline void SetMultiPolygonGeometry(MultiPolygonGeometryInput&& value) { m_multiPolygonGeometryHasBeenSet = true; m_multiPolygonGeometry = std::move(value); }
    inline AreaOfInterestGeometry& WithMultiPolygonGeometry(const MultiPolygonGeometryInput& value) { SetMultiPolygonGeometry(value); return *this;}
    inline AreaOfInterestGeometry& WithMultiPolygonGeometry(MultiPolygonGeometryInput&& value) { SetMultiPolygonGeometry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure representing Polygon Geometry.</p>
     */
    inline const PolygonGeometryInput& GetPolygonGeometry() const{ return m_polygonGeometry; }
    inline bool PolygonGeometryHasBeenSet() const { return m_polygonGeometryHasBeenSet; }
    inline void SetPolygonGeometry(const PolygonGeometryInput& value) { m_polygonGeometryHasBeenSet = true; m_polygonGeometry = value; }
    inline void SetPolygonGeometry(PolygonGeometryInput&& value) { m_polygonGeometryHasBeenSet = true; m_polygonGeometry = std::move(value); }
    inline AreaOfInterestGeometry& WithPolygonGeometry(const PolygonGeometryInput& value) { SetPolygonGeometry(value); return *this;}
    inline AreaOfInterestGeometry& WithPolygonGeometry(PolygonGeometryInput&& value) { SetPolygonGeometry(std::move(value)); return *this;}
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
