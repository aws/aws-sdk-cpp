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
    AWS_QUICKSIGHT_API VisualPalette();
    AWS_QUICKSIGHT_API VisualPalette(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API VisualPalette& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The chart color options for the visual palette.</p>
     */
    inline const Aws::String& GetChartColor() const{ return m_chartColor; }
    inline bool ChartColorHasBeenSet() const { return m_chartColorHasBeenSet; }
    inline void SetChartColor(const Aws::String& value) { m_chartColorHasBeenSet = true; m_chartColor = value; }
    inline void SetChartColor(Aws::String&& value) { m_chartColorHasBeenSet = true; m_chartColor = std::move(value); }
    inline void SetChartColor(const char* value) { m_chartColorHasBeenSet = true; m_chartColor.assign(value); }
    inline VisualPalette& WithChartColor(const Aws::String& value) { SetChartColor(value); return *this;}
    inline VisualPalette& WithChartColor(Aws::String&& value) { SetChartColor(std::move(value)); return *this;}
    inline VisualPalette& WithChartColor(const char* value) { SetChartColor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color map options for the visual palette.</p>
     */
    inline const Aws::Vector<DataPathColor>& GetColorMap() const{ return m_colorMap; }
    inline bool ColorMapHasBeenSet() const { return m_colorMapHasBeenSet; }
    inline void SetColorMap(const Aws::Vector<DataPathColor>& value) { m_colorMapHasBeenSet = true; m_colorMap = value; }
    inline void SetColorMap(Aws::Vector<DataPathColor>&& value) { m_colorMapHasBeenSet = true; m_colorMap = std::move(value); }
    inline VisualPalette& WithColorMap(const Aws::Vector<DataPathColor>& value) { SetColorMap(value); return *this;}
    inline VisualPalette& WithColorMap(Aws::Vector<DataPathColor>&& value) { SetColorMap(std::move(value)); return *this;}
    inline VisualPalette& AddColorMap(const DataPathColor& value) { m_colorMapHasBeenSet = true; m_colorMap.push_back(value); return *this; }
    inline VisualPalette& AddColorMap(DataPathColor&& value) { m_colorMapHasBeenSet = true; m_colorMap.push_back(std::move(value)); return *this; }
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
