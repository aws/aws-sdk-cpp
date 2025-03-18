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
    AWS_QUICKSIGHT_API GeospatialLayerDefinition() = default;
    AWS_QUICKSIGHT_API GeospatialLayerDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialLayerDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The definition for a point layer.</p>
     */
    inline const GeospatialPointLayer& GetPointLayer() const { return m_pointLayer; }
    inline bool PointLayerHasBeenSet() const { return m_pointLayerHasBeenSet; }
    template<typename PointLayerT = GeospatialPointLayer>
    void SetPointLayer(PointLayerT&& value) { m_pointLayerHasBeenSet = true; m_pointLayer = std::forward<PointLayerT>(value); }
    template<typename PointLayerT = GeospatialPointLayer>
    GeospatialLayerDefinition& WithPointLayer(PointLayerT&& value) { SetPointLayer(std::forward<PointLayerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition for a line layer.</p>
     */
    inline const GeospatialLineLayer& GetLineLayer() const { return m_lineLayer; }
    inline bool LineLayerHasBeenSet() const { return m_lineLayerHasBeenSet; }
    template<typename LineLayerT = GeospatialLineLayer>
    void SetLineLayer(LineLayerT&& value) { m_lineLayerHasBeenSet = true; m_lineLayer = std::forward<LineLayerT>(value); }
    template<typename LineLayerT = GeospatialLineLayer>
    GeospatialLayerDefinition& WithLineLayer(LineLayerT&& value) { SetLineLayer(std::forward<LineLayerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition for a polygon layer.</p>
     */
    inline const GeospatialPolygonLayer& GetPolygonLayer() const { return m_polygonLayer; }
    inline bool PolygonLayerHasBeenSet() const { return m_polygonLayerHasBeenSet; }
    template<typename PolygonLayerT = GeospatialPolygonLayer>
    void SetPolygonLayer(PolygonLayerT&& value) { m_polygonLayerHasBeenSet = true; m_polygonLayer = std::forward<PolygonLayerT>(value); }
    template<typename PolygonLayerT = GeospatialPolygonLayer>
    GeospatialLayerDefinition& WithPolygonLayer(PolygonLayerT&& value) { SetPolygonLayer(std::forward<PolygonLayerT>(value)); return *this;}
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
