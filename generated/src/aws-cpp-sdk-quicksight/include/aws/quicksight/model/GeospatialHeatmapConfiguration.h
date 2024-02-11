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
    AWS_QUICKSIGHT_API GeospatialHeatmapConfiguration();
    AWS_QUICKSIGHT_API GeospatialHeatmapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialHeatmapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The color scale specification for the heatmap point style.</p>
     */
    inline const GeospatialHeatmapColorScale& GetHeatmapColor() const{ return m_heatmapColor; }

    /**
     * <p>The color scale specification for the heatmap point style.</p>
     */
    inline bool HeatmapColorHasBeenSet() const { return m_heatmapColorHasBeenSet; }

    /**
     * <p>The color scale specification for the heatmap point style.</p>
     */
    inline void SetHeatmapColor(const GeospatialHeatmapColorScale& value) { m_heatmapColorHasBeenSet = true; m_heatmapColor = value; }

    /**
     * <p>The color scale specification for the heatmap point style.</p>
     */
    inline void SetHeatmapColor(GeospatialHeatmapColorScale&& value) { m_heatmapColorHasBeenSet = true; m_heatmapColor = std::move(value); }

    /**
     * <p>The color scale specification for the heatmap point style.</p>
     */
    inline GeospatialHeatmapConfiguration& WithHeatmapColor(const GeospatialHeatmapColorScale& value) { SetHeatmapColor(value); return *this;}

    /**
     * <p>The color scale specification for the heatmap point style.</p>
     */
    inline GeospatialHeatmapConfiguration& WithHeatmapColor(GeospatialHeatmapColorScale&& value) { SetHeatmapColor(std::move(value)); return *this;}

  private:

    GeospatialHeatmapColorScale m_heatmapColor;
    bool m_heatmapColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
