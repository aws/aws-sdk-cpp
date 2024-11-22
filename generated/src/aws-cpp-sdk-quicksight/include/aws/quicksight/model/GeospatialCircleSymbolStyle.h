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
    AWS_QUICKSIGHT_API GeospatialCircleSymbolStyle();
    AWS_QUICKSIGHT_API GeospatialCircleSymbolStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialCircleSymbolStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The color and opacity values for the fill color.</p>
     */
    inline const GeospatialColor& GetFillColor() const{ return m_fillColor; }
    inline bool FillColorHasBeenSet() const { return m_fillColorHasBeenSet; }
    inline void SetFillColor(const GeospatialColor& value) { m_fillColorHasBeenSet = true; m_fillColor = value; }
    inline void SetFillColor(GeospatialColor&& value) { m_fillColorHasBeenSet = true; m_fillColor = std::move(value); }
    inline GeospatialCircleSymbolStyle& WithFillColor(const GeospatialColor& value) { SetFillColor(value); return *this;}
    inline GeospatialCircleSymbolStyle& WithFillColor(GeospatialColor&& value) { SetFillColor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color and opacity values for the stroke color.</p>
     */
    inline const GeospatialColor& GetStrokeColor() const{ return m_strokeColor; }
    inline bool StrokeColorHasBeenSet() const { return m_strokeColorHasBeenSet; }
    inline void SetStrokeColor(const GeospatialColor& value) { m_strokeColorHasBeenSet = true; m_strokeColor = value; }
    inline void SetStrokeColor(GeospatialColor&& value) { m_strokeColorHasBeenSet = true; m_strokeColor = std::move(value); }
    inline GeospatialCircleSymbolStyle& WithStrokeColor(const GeospatialColor& value) { SetStrokeColor(value); return *this;}
    inline GeospatialCircleSymbolStyle& WithStrokeColor(GeospatialColor&& value) { SetStrokeColor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The width of the stroke (border).</p>
     */
    inline const GeospatialLineWidth& GetStrokeWidth() const{ return m_strokeWidth; }
    inline bool StrokeWidthHasBeenSet() const { return m_strokeWidthHasBeenSet; }
    inline void SetStrokeWidth(const GeospatialLineWidth& value) { m_strokeWidthHasBeenSet = true; m_strokeWidth = value; }
    inline void SetStrokeWidth(GeospatialLineWidth&& value) { m_strokeWidthHasBeenSet = true; m_strokeWidth = std::move(value); }
    inline GeospatialCircleSymbolStyle& WithStrokeWidth(const GeospatialLineWidth& value) { SetStrokeWidth(value); return *this;}
    inline GeospatialCircleSymbolStyle& WithStrokeWidth(GeospatialLineWidth&& value) { SetStrokeWidth(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The radius of the circle.</p>
     */
    inline const GeospatialCircleRadius& GetCircleRadius() const{ return m_circleRadius; }
    inline bool CircleRadiusHasBeenSet() const { return m_circleRadiusHasBeenSet; }
    inline void SetCircleRadius(const GeospatialCircleRadius& value) { m_circleRadiusHasBeenSet = true; m_circleRadius = value; }
    inline void SetCircleRadius(GeospatialCircleRadius&& value) { m_circleRadiusHasBeenSet = true; m_circleRadius = std::move(value); }
    inline GeospatialCircleSymbolStyle& WithCircleRadius(const GeospatialCircleRadius& value) { SetCircleRadius(value); return *this;}
    inline GeospatialCircleSymbolStyle& WithCircleRadius(GeospatialCircleRadius&& value) { SetCircleRadius(std::move(value)); return *this;}
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
