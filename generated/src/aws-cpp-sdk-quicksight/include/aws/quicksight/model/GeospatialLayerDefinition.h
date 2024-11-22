/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialPointLayer.h>
#include <aws/quicksight/model/GeospatialLineLayer.h>
#include <aws/quicksight/model/GeospatialPolygonLayer.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The definition properties for a geospatial layer.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialLayerDefinition">AWS
   * API Reference</a></p>
   */
  class GeospatialLayerDefinition
  {
  public:
    AWS_QUICKSIGHT_API GeospatialLayerDefinition();
    AWS_QUICKSIGHT_API GeospatialLayerDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialLayerDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The definition for a point layer.</p>
     */
    inline const GeospatialPointLayer& GetPointLayer() const{ return m_pointLayer; }
    inline bool PointLayerHasBeenSet() const { return m_pointLayerHasBeenSet; }
    inline void SetPointLayer(const GeospatialPointLayer& value) { m_pointLayerHasBeenSet = true; m_pointLayer = value; }
    inline void SetPointLayer(GeospatialPointLayer&& value) { m_pointLayerHasBeenSet = true; m_pointLayer = std::move(value); }
    inline GeospatialLayerDefinition& WithPointLayer(const GeospatialPointLayer& value) { SetPointLayer(value); return *this;}
    inline GeospatialLayerDefinition& WithPointLayer(GeospatialPointLayer&& value) { SetPointLayer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition for a line layer.</p>
     */
    inline const GeospatialLineLayer& GetLineLayer() const{ return m_lineLayer; }
    inline bool LineLayerHasBeenSet() const { return m_lineLayerHasBeenSet; }
    inline void SetLineLayer(const GeospatialLineLayer& value) { m_lineLayerHasBeenSet = true; m_lineLayer = value; }
    inline void SetLineLayer(GeospatialLineLayer&& value) { m_lineLayerHasBeenSet = true; m_lineLayer = std::move(value); }
    inline GeospatialLayerDefinition& WithLineLayer(const GeospatialLineLayer& value) { SetLineLayer(value); return *this;}
    inline GeospatialLayerDefinition& WithLineLayer(GeospatialLineLayer&& value) { SetLineLayer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition for a polygon layer.</p>
     */
    inline const GeospatialPolygonLayer& GetPolygonLayer() const{ return m_polygonLayer; }
    inline bool PolygonLayerHasBeenSet() const { return m_polygonLayerHasBeenSet; }
    inline void SetPolygonLayer(const GeospatialPolygonLayer& value) { m_polygonLayerHasBeenSet = true; m_polygonLayer = value; }
    inline void SetPolygonLayer(GeospatialPolygonLayer&& value) { m_polygonLayerHasBeenSet = true; m_polygonLayer = std::move(value); }
    inline GeospatialLayerDefinition& WithPolygonLayer(const GeospatialPolygonLayer& value) { SetPolygonLayer(value); return *this;}
    inline GeospatialLayerDefinition& WithPolygonLayer(GeospatialPolygonLayer&& value) { SetPolygonLayer(std::move(value)); return *this;}
    ///@}
  private:

    GeospatialPointLayer m_pointLayer;
    bool m_pointLayerHasBeenSet = false;

    GeospatialLineLayer m_lineLayer;
    bool m_lineLayerHasBeenSet = false;

    GeospatialPolygonLayer m_polygonLayer;
    bool m_polygonLayerHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
