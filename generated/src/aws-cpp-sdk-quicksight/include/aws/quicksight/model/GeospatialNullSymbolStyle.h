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
    AWS_QUICKSIGHT_API GeospatialNullSymbolStyle() = default;
    AWS_QUICKSIGHT_API GeospatialNullSymbolStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialNullSymbolStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The color and opacity values for the fill color.</p>
     */
    inline const Aws::String& GetFillColor() const { return m_fillColor; }
    inline bool FillColorHasBeenSet() const { return m_fillColorHasBeenSet; }
    template<typename FillColorT = Aws::String>
    void SetFillColor(FillColorT&& value) { m_fillColorHasBeenSet = true; m_fillColor = std::forward<FillColorT>(value); }
    template<typename FillColorT = Aws::String>
    GeospatialNullSymbolStyle& WithFillColor(FillColorT&& value) { SetFillColor(std::forward<FillColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color and opacity values for the stroke color.</p>
     */
    inline const Aws::String& GetStrokeColor() const { return m_strokeColor; }
    inline bool StrokeColorHasBeenSet() const { return m_strokeColorHasBeenSet; }
    template<typename StrokeColorT = Aws::String>
    void SetStrokeColor(StrokeColorT&& value) { m_strokeColorHasBeenSet = true; m_strokeColor = std::forward<StrokeColorT>(value); }
    template<typename StrokeColorT = Aws::String>
    GeospatialNullSymbolStyle& WithStrokeColor(StrokeColorT&& value) { SetStrokeColor(std::forward<StrokeColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The width of the border stroke.</p>
     */
    inline double GetStrokeWidth() const { return m_strokeWidth; }
    inline bool StrokeWidthHasBeenSet() const { return m_strokeWidthHasBeenSet; }
    inline void SetStrokeWidth(double value) { m_strokeWidthHasBeenSet = true; m_strokeWidth = value; }
    inline GeospatialNullSymbolStyle& WithStrokeWidth(double value) { SetStrokeWidth(value); return *this;}
    ///@}
  private:

    Aws::String m_fillColor;
    bool m_fillColorHasBeenSet = false;

    Aws::String m_strokeColor;
    bool m_strokeColorHasBeenSet = false;

    double m_strokeWidth{0.0};
    bool m_strokeWidthHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
