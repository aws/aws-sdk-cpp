/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialColor.h>
#include <aws/quicksight/model/GeospatialLineWidth.h>
#include <aws/quicksight/model/GeospatialCircleRadius.h>
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
   * <p>The properties for a circle symbol style.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialCircleSymbolStyle">AWS
   * API Reference</a></p>
   */
  class GeospatialCircleSymbolStyle
  {
  public:
    AWS_QUICKSIGHT_API GeospatialCircleSymbolStyle() = default;
    AWS_QUICKSIGHT_API GeospatialCircleSymbolStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialCircleSymbolStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The color and opacity values for the fill color.</p>
     */
    inline const GeospatialColor& GetFillColor() const { return m_fillColor; }
    inline bool FillColorHasBeenSet() const { return m_fillColorHasBeenSet; }
    template<typename FillColorT = GeospatialColor>
    void SetFillColor(FillColorT&& value) { m_fillColorHasBeenSet = true; m_fillColor = std::forward<FillColorT>(value); }
    template<typename FillColorT = GeospatialColor>
    GeospatialCircleSymbolStyle& WithFillColor(FillColorT&& value) { SetFillColor(std::forward<FillColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color and opacity values for the stroke color.</p>
     */
    inline const GeospatialColor& GetStrokeColor() const { return m_strokeColor; }
    inline bool StrokeColorHasBeenSet() const { return m_strokeColorHasBeenSet; }
    template<typename StrokeColorT = GeospatialColor>
    void SetStrokeColor(StrokeColorT&& value) { m_strokeColorHasBeenSet = true; m_strokeColor = std::forward<StrokeColorT>(value); }
    template<typename StrokeColorT = GeospatialColor>
    GeospatialCircleSymbolStyle& WithStrokeColor(StrokeColorT&& value) { SetStrokeColor(std::forward<StrokeColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The width of the stroke (border).</p>
     */
    inline const GeospatialLineWidth& GetStrokeWidth() const { return m_strokeWidth; }
    inline bool StrokeWidthHasBeenSet() const { return m_strokeWidthHasBeenSet; }
    template<typename StrokeWidthT = GeospatialLineWidth>
    void SetStrokeWidth(StrokeWidthT&& value) { m_strokeWidthHasBeenSet = true; m_strokeWidth = std::forward<StrokeWidthT>(value); }
    template<typename StrokeWidthT = GeospatialLineWidth>
    GeospatialCircleSymbolStyle& WithStrokeWidth(StrokeWidthT&& value) { SetStrokeWidth(std::forward<StrokeWidthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The radius of the circle.</p>
     */
    inline const GeospatialCircleRadius& GetCircleRadius() const { return m_circleRadius; }
    inline bool CircleRadiusHasBeenSet() const { return m_circleRadiusHasBeenSet; }
    template<typename CircleRadiusT = GeospatialCircleRadius>
    void SetCircleRadius(CircleRadiusT&& value) { m_circleRadiusHasBeenSet = true; m_circleRadius = std::forward<CircleRadiusT>(value); }
    template<typename CircleRadiusT = GeospatialCircleRadius>
    GeospatialCircleSymbolStyle& WithCircleRadius(CircleRadiusT&& value) { SetCircleRadius(std::forward<CircleRadiusT>(value)); return *this;}
    ///@}
  private:

    GeospatialColor m_fillColor;
    bool m_fillColorHasBeenSet = false;

    GeospatialColor m_strokeColor;
    bool m_strokeColorHasBeenSet = false;

    GeospatialLineWidth m_strokeWidth;
    bool m_strokeWidthHasBeenSet = false;

    GeospatialCircleRadius m_circleRadius;
    bool m_circleRadiusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
