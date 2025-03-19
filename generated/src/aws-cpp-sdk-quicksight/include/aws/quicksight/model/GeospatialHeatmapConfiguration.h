/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialHeatmapColorScale.h>
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
   * <p>The heatmap configuration of the geospatial point style.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialHeatmapConfiguration">AWS
   * API Reference</a></p>
   */
  class GeospatialHeatmapConfiguration
  {
  public:
    AWS_QUICKSIGHT_API GeospatialHeatmapConfiguration() = default;
    AWS_QUICKSIGHT_API GeospatialHeatmapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialHeatmapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The color scale specification for the heatmap point style.</p>
     */
    inline const GeospatialHeatmapColorScale& GetHeatmapColor() const { return m_heatmapColor; }
    inline bool HeatmapColorHasBeenSet() const { return m_heatmapColorHasBeenSet; }
    template<typename HeatmapColorT = GeospatialHeatmapColorScale>
    void SetHeatmapColor(HeatmapColorT&& value) { m_heatmapColorHasBeenSet = true; m_heatmapColor = std::forward<HeatmapColorT>(value); }
    template<typename HeatmapColorT = GeospatialHeatmapColorScale>
    GeospatialHeatmapConfiguration& WithHeatmapColor(HeatmapColorT&& value) { SetHeatmapColor(std::forward<HeatmapColorT>(value)); return *this;}
    ///@}
  private:

    GeospatialHeatmapColorScale m_heatmapColor;
    bool m_heatmapColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
