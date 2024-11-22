/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialColor.h>
#include <aws/quicksight/model/GeospatialLineWidth.h>
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
   * <p>The polygon symbol style for a polygon layer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialPolygonSymbolStyle">AWS
   * API Reference</a></p>
   */
  class GeospatialPolygonSymbolStyle
  {
  public:
    AWS_QUICKSIGHT_API GeospatialPolygonSymbolStyle();
    AWS_QUICKSIGHT_API GeospatialPolygonSymbolStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialPolygonSymbolStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The color and opacity values for the fill color.</p>
     */
    inline const GeospatialColor& GetFillColor() const{ return m_fillColor; }
    inline bool FillColorHasBeenSet() const { return m_fillColorHasBeenSet; }
    inline void SetFillColor(const GeospatialColor& value) { m_fillColorHasBeenSet = true; m_fillColor = value; }
    inline void SetFillColor(GeospatialColor&& value) { m_fillColorHasBeenSet = true; m_fillColor = std::move(value); }
    inline GeospatialPolygonSymbolStyle& WithFillColor(const GeospatialColor& value) { SetFillColor(value); return *this;}
    inline GeospatialPolygonSymbolStyle& WithFillColor(GeospatialColor&& value) { SetFillColor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color and opacity values for the stroke color.</p>
     */
    inline const GeospatialColor& GetStrokeColor() const{ return m_strokeColor; }
    inline bool StrokeColorHasBeenSet() const { return m_strokeColorHasBeenSet; }
    inline void SetStrokeColor(const GeospatialColor& value) { m_strokeColorHasBeenSet = true; m_strokeColor = value; }
    inline void SetStrokeColor(GeospatialColor&& value) { m_strokeColorHasBeenSet = true; m_strokeColor = std::move(value); }
    inline GeospatialPolygonSymbolStyle& WithStrokeColor(const GeospatialColor& value) { SetStrokeColor(value); return *this;}
    inline GeospatialPolygonSymbolStyle& WithStrokeColor(GeospatialColor&& value) { SetStrokeColor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The width of the border stroke.</p>
     */
    inline const GeospatialLineWidth& GetStrokeWidth() const{ return m_strokeWidth; }
    inline bool StrokeWidthHasBeenSet() const { return m_strokeWidthHasBeenSet; }
    inline void SetStrokeWidth(const GeospatialLineWidth& value) { m_strokeWidthHasBeenSet = true; m_strokeWidth = value; }
    inline void SetStrokeWidth(GeospatialLineWidth&& value) { m_strokeWidthHasBeenSet = true; m_strokeWidth = std::move(value); }
    inline GeospatialPolygonSymbolStyle& WithStrokeWidth(const GeospatialLineWidth& value) { SetStrokeWidth(value); return *this;}
    inline GeospatialPolygonSymbolStyle& WithStrokeWidth(GeospatialLineWidth&& value) { SetStrokeWidth(std::move(value)); return *this;}
    ///@}
  private:

    GeospatialColor m_fillColor;
    bool m_fillColorHasBeenSet = false;

    GeospatialColor m_strokeColor;
    bool m_strokeColorHasBeenSet = false;

    GeospatialLineWidth m_strokeWidth;
    bool m_strokeWidthHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
