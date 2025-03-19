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
    AWS_QUICKSIGHT_API GeospatialHeatmapColorScale() = default;
    AWS_QUICKSIGHT_API GeospatialHeatmapColorScale(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialHeatmapColorScale& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of colors to be used in heatmap point style.</p>
     */
    inline const Aws::Vector<GeospatialHeatmapDataColor>& GetColors() const { return m_colors; }
    inline bool ColorsHasBeenSet() const { return m_colorsHasBeenSet; }
    template<typename ColorsT = Aws::Vector<GeospatialHeatmapDataColor>>
    void SetColors(ColorsT&& value) { m_colorsHasBeenSet = true; m_colors = std::forward<ColorsT>(value); }
    template<typename ColorsT = Aws::Vector<GeospatialHeatmapDataColor>>
    GeospatialHeatmapColorScale& WithColors(ColorsT&& value) { SetColors(std::forward<ColorsT>(value)); return *this;}
    template<typename ColorsT = GeospatialHeatmapDataColor>
    GeospatialHeatmapColorScale& AddColors(ColorsT&& value) { m_colorsHasBeenSet = true; m_colors.emplace_back(std::forward<ColorsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GeospatialHeatmapDataColor> m_colors;
    bool m_colorsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
