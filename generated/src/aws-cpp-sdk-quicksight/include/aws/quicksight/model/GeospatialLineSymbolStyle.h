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
   * <p>The symbol style for a line layer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialLineSymbolStyle">AWS
   * API Reference</a></p>
   */
  class GeospatialLineSymbolStyle
  {
  public:
    AWS_QUICKSIGHT_API GeospatialLineSymbolStyle() = default;
    AWS_QUICKSIGHT_API GeospatialLineSymbolStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialLineSymbolStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    GeospatialLineSymbolStyle& WithFillColor(FillColorT&& value) { SetFillColor(std::forward<FillColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The width value for a line.</p>
     */
    inline const GeospatialLineWidth& GetLineWidth() const { return m_lineWidth; }
    inline bool LineWidthHasBeenSet() const { return m_lineWidthHasBeenSet; }
    template<typename LineWidthT = GeospatialLineWidth>
    void SetLineWidth(LineWidthT&& value) { m_lineWidthHasBeenSet = true; m_lineWidth = std::forward<LineWidthT>(value); }
    template<typename LineWidthT = GeospatialLineWidth>
    GeospatialLineSymbolStyle& WithLineWidth(LineWidthT&& value) { SetLineWidth(std::forward<LineWidthT>(value)); return *this;}
    ///@}
  private:

    GeospatialColor m_fillColor;
    bool m_fillColorHasBeenSet = false;

    GeospatialLineWidth m_lineWidth;
    bool m_lineWidthHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
