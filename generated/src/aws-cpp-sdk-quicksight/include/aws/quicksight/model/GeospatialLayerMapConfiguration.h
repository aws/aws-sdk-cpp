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
    AWS_QUICKSIGHT_API GeospatialLayerMapConfiguration() = default;
    AWS_QUICKSIGHT_API GeospatialLayerMapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialLayerMapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const LegendOptions& GetLegend() const { return m_legend; }
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }
    template<typename LegendT = LegendOptions>
    void SetLegend(LegendT&& value) { m_legendHasBeenSet = true; m_legend = std::forward<LegendT>(value); }
    template<typename LegendT = LegendOptions>
    GeospatialLayerMapConfiguration& WithLegend(LegendT&& value) { SetLegend(std::forward<LegendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The geospatial layers to visualize on the map.</p>
     */
    inline const Aws::Vector<GeospatialLayerItem>& GetMapLayers() const { return m_mapLayers; }
    inline bool MapLayersHasBeenSet() const { return m_mapLayersHasBeenSet; }
    template<typename MapLayersT = Aws::Vector<GeospatialLayerItem>>
    void SetMapLayers(MapLayersT&& value) { m_mapLayersHasBeenSet = true; m_mapLayers = std::forward<MapLayersT>(value); }
    template<typename MapLayersT = Aws::Vector<GeospatialLayerItem>>
    GeospatialLayerMapConfiguration& WithMapLayers(MapLayersT&& value) { SetMapLayers(std::forward<MapLayersT>(value)); return *this;}
    template<typename MapLayersT = GeospatialLayerItem>
    GeospatialLayerMapConfiguration& AddMapLayers(MapLayersT&& value) { m_mapLayersHasBeenSet = true; m_mapLayers.emplace_back(std::forward<MapLayersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The map state properties for the map.</p>
     */
    inline const GeospatialMapState& GetMapState() const { return m_mapState; }
    inline bool MapStateHasBeenSet() const { return m_mapStateHasBeenSet; }
    template<typename MapStateT = GeospatialMapState>
    void SetMapState(MapStateT&& value) { m_mapStateHasBeenSet = true; m_mapState = std::forward<MapStateT>(value); }
    template<typename MapStateT = GeospatialMapState>
    GeospatialLayerMapConfiguration& WithMapState(MapStateT&& value) { SetMapState(std::forward<MapStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The map style properties for the map.</p>
     */
    inline const GeospatialMapStyle& GetMapStyle() const { return m_mapStyle; }
    inline bool MapStyleHasBeenSet() const { return m_mapStyleHasBeenSet; }
    template<typename MapStyleT = GeospatialMapStyle>
    void SetMapStyle(MapStyleT&& value) { m_mapStyleHasBeenSet = true; m_mapStyle = std::forward<MapStyleT>(value); }
    template<typename MapStyleT = GeospatialMapStyle>
    GeospatialLayerMapConfiguration& WithMapStyle(MapStyleT&& value) { SetMapStyle(std::forward<MapStyleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VisualInteractionOptions& GetInteractions() const { return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    template<typename InteractionsT = VisualInteractionOptions>
    void SetInteractions(InteractionsT&& value) { m_interactionsHasBeenSet = true; m_interactions = std::forward<InteractionsT>(value); }
    template<typename InteractionsT = VisualInteractionOptions>
    GeospatialLayerMapConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
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
