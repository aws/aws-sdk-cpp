/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
   * <p>The symbol style for null data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialNullSymbolStyle">AWS
   * API Reference</a></p>
   */
  class GeospatialNullSymbolStyle
  {
  public:
    AWS_QUICKSIGHT_API GeospatialNullSymbolStyle();
    AWS_QUICKSIGHT_API GeospatialNullSymbolStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialNullSymbolStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The color and opacity values for the fill color.</p>
     */
    inline const Aws::String& GetFillColor() const{ return m_fillColor; }
    inline bool FillColorHasBeenSet() const { return m_fillColorHasBeenSet; }
    inline void SetFillColor(const Aws::String& value) { m_fillColorHasBeenSet = true; m_fillColor = value; }
    inline void SetFillColor(Aws::String&& value) { m_fillColorHasBeenSet = true; m_fillColor = std::move(value); }
    inline void SetFillColor(const char* value) { m_fillColorHasBeenSet = true; m_fillColor.assign(value); }
    inline GeospatialNullSymbolStyle& WithFillColor(const Aws::String& value) { SetFillColor(value); return *this;}
    inline GeospatialNullSymbolStyle& WithFillColor(Aws::String&& value) { SetFillColor(std::move(value)); return *this;}
    inline GeospatialNullSymbolStyle& WithFillColor(const char* value) { SetFillColor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color and opacity values for the stroke color.</p>
     */
    inline const Aws::String& GetStrokeColor() const{ return m_strokeColor; }
    inline bool StrokeColorHasBeenSet() const { return m_strokeColorHasBeenSet; }
    inline void SetStrokeColor(const Aws::String& value) { m_strokeColorHasBeenSet = true; m_strokeColor = value; }
    inline void SetStrokeColor(Aws::String&& value) { m_strokeColorHasBeenSet = true; m_strokeColor = std::move(value); }
    inline void SetStrokeColor(const char* value) { m_strokeColorHasBeenSet = true; m_strokeColor.assign(value); }
    inline GeospatialNullSymbolStyle& WithStrokeColor(const Aws::String& value) { SetStrokeColor(value); return *this;}
    inline GeospatialNullSymbolStyle& WithStrokeColor(Aws::String&& value) { SetStrokeColor(std::move(value)); return *this;}
    inline GeospatialNullSymbolStyle& WithStrokeColor(const char* value) { SetStrokeColor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The width of the border stroke.</p>
     */
    inline double GetStrokeWidth() const{ return m_strokeWidth; }
    inline bool StrokeWidthHasBeenSet() const { return m_strokeWidthHasBeenSet; }
    inline void SetStrokeWidth(double value) { m_strokeWidthHasBeenSet = true; m_strokeWidth = value; }
    inline GeospatialNullSymbolStyle& WithStrokeWidth(double value) { SetStrokeWidth(value); return *this;}
    ///@}
  private:

    Aws::String m_fillColor;
    bool m_fillColorHasBeenSet = false;

    Aws::String m_strokeColor;
    bool m_strokeColorHasBeenSet = false;

    double m_strokeWidth;
    bool m_strokeWidthHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
