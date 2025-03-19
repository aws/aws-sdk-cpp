/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialSelectedPointStyle.h>
#include <aws/quicksight/model/ClusterMarkerConfiguration.h>
#include <aws/quicksight/model/GeospatialHeatmapConfiguration.h>
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
   * <p>The point style of the geospatial map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialPointStyleOptions">AWS
   * API Reference</a></p>
   */
  class GeospatialPointStyleOptions
  {
  public:
    AWS_QUICKSIGHT_API GeospatialPointStyleOptions() = default;
    AWS_QUICKSIGHT_API GeospatialPointStyleOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialPointStyleOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The selected point styles (point, cluster) of the geospatial map.</p>
     */
    inline GeospatialSelectedPointStyle GetSelectedPointStyle() const { return m_selectedPointStyle; }
    inline bool SelectedPointStyleHasBeenSet() const { return m_selectedPointStyleHasBeenSet; }
    inline void SetSelectedPointStyle(GeospatialSelectedPointStyle value) { m_selectedPointStyleHasBeenSet = true; m_selectedPointStyle = value; }
    inline GeospatialPointStyleOptions& WithSelectedPointStyle(GeospatialSelectedPointStyle value) { SetSelectedPointStyle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster marker configuration of the geospatial point style.</p>
     */
    inline const ClusterMarkerConfiguration& GetClusterMarkerConfiguration() const { return m_clusterMarkerConfiguration; }
    inline bool ClusterMarkerConfigurationHasBeenSet() const { return m_clusterMarkerConfigurationHasBeenSet; }
    template<typename ClusterMarkerConfigurationT = ClusterMarkerConfiguration>
    void SetClusterMarkerConfiguration(ClusterMarkerConfigurationT&& value) { m_clusterMarkerConfigurationHasBeenSet = true; m_clusterMarkerConfiguration = std::forward<ClusterMarkerConfigurationT>(value); }
    template<typename ClusterMarkerConfigurationT = ClusterMarkerConfiguration>
    GeospatialPointStyleOptions& WithClusterMarkerConfiguration(ClusterMarkerConfigurationT&& value) { SetClusterMarkerConfiguration(std::forward<ClusterMarkerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The heatmap configuration of the geospatial point style.</p>
     */
    inline const GeospatialHeatmapConfiguration& GetHeatmapConfiguration() const { return m_heatmapConfiguration; }
    inline bool HeatmapConfigurationHasBeenSet() const { return m_heatmapConfigurationHasBeenSet; }
    template<typename HeatmapConfigurationT = GeospatialHeatmapConfiguration>
    void SetHeatmapConfiguration(HeatmapConfigurationT&& value) { m_heatmapConfigurationHasBeenSet = true; m_heatmapConfiguration = std::forward<HeatmapConfigurationT>(value); }
    template<typename HeatmapConfigurationT = GeospatialHeatmapConfiguration>
    GeospatialPointStyleOptions& WithHeatmapConfiguration(HeatmapConfigurationT&& value) { SetHeatmapConfiguration(std::forward<HeatmapConfigurationT>(value)); return *this;}
    ///@}
  private:

    GeospatialSelectedPointStyle m_selectedPointStyle{GeospatialSelectedPointStyle::NOT_SET};
    bool m_selectedPointStyleHasBeenSet = false;

    ClusterMarkerConfiguration m_clusterMarkerConfiguration;
    bool m_clusterMarkerConfigurationHasBeenSet = false;

    GeospatialHeatmapConfiguration m_heatmapConfiguration;
    bool m_heatmapConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
