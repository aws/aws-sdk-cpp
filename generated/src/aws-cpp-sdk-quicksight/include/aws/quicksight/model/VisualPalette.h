/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DataPathColor.h>
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
   * <p>The visual display options for the visual palette.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VisualPalette">AWS
   * API Reference</a></p>
   */
  class VisualPalette
  {
  public:
    AWS_QUICKSIGHT_API VisualPalette() = default;
    AWS_QUICKSIGHT_API VisualPalette(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API VisualPalette& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The chart color options for the visual palette.</p>
     */
    inline const Aws::String& GetChartColor() const { return m_chartColor; }
    inline bool ChartColorHasBeenSet() const { return m_chartColorHasBeenSet; }
    template<typename ChartColorT = Aws::String>
    void SetChartColor(ChartColorT&& value) { m_chartColorHasBeenSet = true; m_chartColor = std::forward<ChartColorT>(value); }
    template<typename ChartColorT = Aws::String>
    VisualPalette& WithChartColor(ChartColorT&& value) { SetChartColor(std::forward<ChartColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color map options for the visual palette.</p>
     */
    inline const Aws::Vector<DataPathColor>& GetColorMap() const { return m_colorMap; }
    inline bool ColorMapHasBeenSet() const { return m_colorMapHasBeenSet; }
    template<typename ColorMapT = Aws::Vector<DataPathColor>>
    void SetColorMap(ColorMapT&& value) { m_colorMapHasBeenSet = true; m_colorMap = std::forward<ColorMapT>(value); }
    template<typename ColorMapT = Aws::Vector<DataPathColor>>
    VisualPalette& WithColorMap(ColorMapT&& value) { SetColorMap(std::forward<ColorMapT>(value)); return *this;}
    template<typename ColorMapT = DataPathColor>
    VisualPalette& AddColorMap(ColorMapT&& value) { m_colorMapHasBeenSet = true; m_colorMap.emplace_back(std::forward<ColorMapT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_chartColor;
    bool m_chartColorHasBeenSet = false;

    Aws::Vector<DataPathColor> m_colorMap;
    bool m_colorMapHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
