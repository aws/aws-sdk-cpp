/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/GeospatialHeatmapDataColor.h>
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
   * <p>The color scale specification for the heatmap point style.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialHeatmapColorScale">AWS
   * API Reference</a></p>
   */
  class GeospatialHeatmapColorScale
  {
  public:
    AWS_QUICKSIGHT_API GeospatialHeatmapColorScale();
    AWS_QUICKSIGHT_API GeospatialHeatmapColorScale(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialHeatmapColorScale& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of colors to be used in heatmap point style.</p>
     */
    inline const Aws::Vector<GeospatialHeatmapDataColor>& GetColors() const{ return m_colors; }

    /**
     * <p>The list of colors to be used in heatmap point style.</p>
     */
    inline bool ColorsHasBeenSet() const { return m_colorsHasBeenSet; }

    /**
     * <p>The list of colors to be used in heatmap point style.</p>
     */
    inline void SetColors(const Aws::Vector<GeospatialHeatmapDataColor>& value) { m_colorsHasBeenSet = true; m_colors = value; }

    /**
     * <p>The list of colors to be used in heatmap point style.</p>
     */
    inline void SetColors(Aws::Vector<GeospatialHeatmapDataColor>&& value) { m_colorsHasBeenSet = true; m_colors = std::move(value); }

    /**
     * <p>The list of colors to be used in heatmap point style.</p>
     */
    inline GeospatialHeatmapColorScale& WithColors(const Aws::Vector<GeospatialHeatmapDataColor>& value) { SetColors(value); return *this;}

    /**
     * <p>The list of colors to be used in heatmap point style.</p>
     */
    inline GeospatialHeatmapColorScale& WithColors(Aws::Vector<GeospatialHeatmapDataColor>&& value) { SetColors(std::move(value)); return *this;}

    /**
     * <p>The list of colors to be used in heatmap point style.</p>
     */
    inline GeospatialHeatmapColorScale& AddColors(const GeospatialHeatmapDataColor& value) { m_colorsHasBeenSet = true; m_colors.push_back(value); return *this; }

    /**
     * <p>The list of colors to be used in heatmap point style.</p>
     */
    inline GeospatialHeatmapColorScale& AddColors(GeospatialHeatmapDataColor&& value) { m_colorsHasBeenSet = true; m_colors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<GeospatialHeatmapDataColor> m_colors;
    bool m_colorsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
