/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/LegendOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/GeospatialMapState.h>
#include <aws/quicksight/model/GeospatialMapStyle.h>
#include <aws/quicksight/model/VisualInteractionOptions.h>
#include <aws/quicksight/model/GeospatialLayerItem.h>
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
   * <p>The map definition that defines map state, map style, and geospatial
   * layers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialLayerMapConfiguration">AWS
   * API Reference</a></p>
   */
  class GeospatialLayerMapConfiguration
  {
  public:
    AWS_QUICKSIGHT_API GeospatialLayerMapConfiguration();
    AWS_QUICKSIGHT_API GeospatialLayerMapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialLayerMapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const LegendOptions& GetLegend() const{ return m_legend; }
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }
    inline void SetLegend(const LegendOptions& value) { m_legendHasBeenSet = true; m_legend = value; }
    inline void SetLegend(LegendOptions&& value) { m_legendHasBeenSet = true; m_legend = std::move(value); }
    inline GeospatialLayerMapConfiguration& WithLegend(const LegendOptions& value) { SetLegend(value); return *this;}
    inline GeospatialLayerMapConfiguration& WithLegend(LegendOptions&& value) { SetLegend(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The geospatial layers to visualize on the map.</p>
     */
    inline const Aws::Vector<GeospatialLayerItem>& GetMapLayers() const{ return m_mapLayers; }
    inline bool MapLayersHasBeenSet() const { return m_mapLayersHasBeenSet; }
    inline void SetMapLayers(const Aws::Vector<GeospatialLayerItem>& value) { m_mapLayersHasBeenSet = true; m_mapLayers = value; }
    inline void SetMapLayers(Aws::Vector<GeospatialLayerItem>&& value) { m_mapLayersHasBeenSet = true; m_mapLayers = std::move(value); }
    inline GeospatialLayerMapConfiguration& WithMapLayers(const Aws::Vector<GeospatialLayerItem>& value) { SetMapLayers(value); return *this;}
    inline GeospatialLayerMapConfiguration& WithMapLayers(Aws::Vector<GeospatialLayerItem>&& value) { SetMapLayers(std::move(value)); return *this;}
    inline GeospatialLayerMapConfiguration& AddMapLayers(const GeospatialLayerItem& value) { m_mapLayersHasBeenSet = true; m_mapLayers.push_back(value); return *this; }
    inline GeospatialLayerMapConfiguration& AddMapLayers(GeospatialLayerItem&& value) { m_mapLayersHasBeenSet = true; m_mapLayers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The map state properties for the map.</p>
     */
    inline const GeospatialMapState& GetMapState() const{ return m_mapState; }
    inline bool MapStateHasBeenSet() const { return m_mapStateHasBeenSet; }
    inline void SetMapState(const GeospatialMapState& value) { m_mapStateHasBeenSet = true; m_mapState = value; }
    inline void SetMapState(GeospatialMapState&& value) { m_mapStateHasBeenSet = true; m_mapState = std::move(value); }
    inline GeospatialLayerMapConfiguration& WithMapState(const GeospatialMapState& value) { SetMapState(value); return *this;}
    inline GeospatialLayerMapConfiguration& WithMapState(GeospatialMapState&& value) { SetMapState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The map style properties for the map.</p>
     */
    inline const GeospatialMapStyle& GetMapStyle() const{ return m_mapStyle; }
    inline bool MapStyleHasBeenSet() const { return m_mapStyleHasBeenSet; }
    inline void SetMapStyle(const GeospatialMapStyle& value) { m_mapStyleHasBeenSet = true; m_mapStyle = value; }
    inline void SetMapStyle(GeospatialMapStyle&& value) { m_mapStyleHasBeenSet = true; m_mapStyle = std::move(value); }
    inline GeospatialLayerMapConfiguration& WithMapStyle(const GeospatialMapStyle& value) { SetMapStyle(value); return *this;}
    inline GeospatialLayerMapConfiguration& WithMapStyle(GeospatialMapStyle&& value) { SetMapStyle(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const VisualInteractionOptions& GetInteractions() const{ return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    inline void SetInteractions(const VisualInteractionOptions& value) { m_interactionsHasBeenSet = true; m_interactions = value; }
    inline void SetInteractions(VisualInteractionOptions&& value) { m_interactionsHasBeenSet = true; m_interactions = std::move(value); }
    inline GeospatialLayerMapConfiguration& WithInteractions(const VisualInteractionOptions& value) { SetInteractions(value); return *this;}
    inline GeospatialLayerMapConfiguration& WithInteractions(VisualInteractionOptions&& value) { SetInteractions(std::move(value)); return *this;}
    ///@}
  private:

    LegendOptions m_legend;
    bool m_legendHasBeenSet = false;

    Aws::Vector<GeospatialLayerItem> m_mapLayers;
    bool m_mapLayersHasBeenSet = false;

    GeospatialMapState m_mapState;
    bool m_mapStateHasBeenSet = false;

    GeospatialMapStyle m_mapStyle;
    bool m_mapStyleHasBeenSet = false;

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
