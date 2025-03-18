/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/LineChartMarkerShape.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Marker styles options for a line series in
   * <code>LineChartVisual</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LineChartMarkerStyleSettings">AWS
   * API Reference</a></p>
   */
  class LineChartMarkerStyleSettings
  {
  public:
    AWS_QUICKSIGHT_API LineChartMarkerStyleSettings() = default;
    AWS_QUICKSIGHT_API LineChartMarkerStyleSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LineChartMarkerStyleSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration option that determines whether to show the markers in the
     * series.</p>
     */
    inline Visibility GetMarkerVisibility() const { return m_markerVisibility; }
    inline bool MarkerVisibilityHasBeenSet() const { return m_markerVisibilityHasBeenSet; }
    inline void SetMarkerVisibility(Visibility value) { m_markerVisibilityHasBeenSet = true; m_markerVisibility = value; }
    inline LineChartMarkerStyleSettings& WithMarkerVisibility(Visibility value) { SetMarkerVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shape option for markers in the series.</p> <ul> <li> <p>
     * <code>CIRCLE</code>: Show marker as a circle.</p> </li> <li> <p>
     * <code>TRIANGLE</code>: Show marker as a triangle.</p> </li> <li> <p>
     * <code>SQUARE</code>: Show marker as a square.</p> </li> <li> <p>
     * <code>DIAMOND</code>: Show marker as a diamond.</p> </li> <li> <p>
     * <code>ROUNDED_SQUARE</code>: Show marker as a rounded square.</p> </li> </ul>
     */
    inline LineChartMarkerShape GetMarkerShape() const { return m_markerShape; }
    inline bool MarkerShapeHasBeenSet() const { return m_markerShapeHasBeenSet; }
    inline void SetMarkerShape(LineChartMarkerShape value) { m_markerShapeHasBeenSet = true; m_markerShape = value; }
    inline LineChartMarkerStyleSettings& WithMarkerShape(LineChartMarkerShape value) { SetMarkerShape(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Size of marker in the series.</p>
     */
    inline const Aws::String& GetMarkerSize() const { return m_markerSize; }
    inline bool MarkerSizeHasBeenSet() const { return m_markerSizeHasBeenSet; }
    template<typename MarkerSizeT = Aws::String>
    void SetMarkerSize(MarkerSizeT&& value) { m_markerSizeHasBeenSet = true; m_markerSize = std::forward<MarkerSizeT>(value); }
    template<typename MarkerSizeT = Aws::String>
    LineChartMarkerStyleSettings& WithMarkerSize(MarkerSizeT&& value) { SetMarkerSize(std::forward<MarkerSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Color of marker in the series.</p>
     */
    inline const Aws::String& GetMarkerColor() const { return m_markerColor; }
    inline bool MarkerColorHasBeenSet() const { return m_markerColorHasBeenSet; }
    template<typename MarkerColorT = Aws::String>
    void SetMarkerColor(MarkerColorT&& value) { m_markerColorHasBeenSet = true; m_markerColor = std::forward<MarkerColorT>(value); }
    template<typename MarkerColorT = Aws::String>
    LineChartMarkerStyleSettings& WithMarkerColor(MarkerColorT&& value) { SetMarkerColor(std::forward<MarkerColorT>(value)); return *this;}
    ///@}
  private:

    Visibility m_markerVisibility{Visibility::NOT_SET};
    bool m_markerVisibilityHasBeenSet = false;

    LineChartMarkerShape m_markerShape{LineChartMarkerShape::NOT_SET};
    bool m_markerShapeHasBeenSet = false;

    Aws::String m_markerSize;
    bool m_markerSizeHasBeenSet = false;

    Aws::String m_markerColor;
    bool m_markerColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
