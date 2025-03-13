/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/LineInterpolation.h>
#include <aws/quicksight/model/LineChartLineStyle.h>
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
   * <p>Line styles options for a line series in
   * <code>LineChartVisual</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LineChartLineStyleSettings">AWS
   * API Reference</a></p>
   */
  class LineChartLineStyleSettings
  {
  public:
    AWS_QUICKSIGHT_API LineChartLineStyleSettings() = default;
    AWS_QUICKSIGHT_API LineChartLineStyleSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LineChartLineStyleSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration option that determines whether to show the line for the
     * series.</p>
     */
    inline Visibility GetLineVisibility() const { return m_lineVisibility; }
    inline bool LineVisibilityHasBeenSet() const { return m_lineVisibilityHasBeenSet; }
    inline void SetLineVisibility(Visibility value) { m_lineVisibilityHasBeenSet = true; m_lineVisibility = value; }
    inline LineChartLineStyleSettings& WithLineVisibility(Visibility value) { SetLineVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Interpolation style for line series.</p> <ul> <li> <p> <code>LINEAR</code>:
     * Show as default, linear style.</p> </li> <li> <p> <code>SMOOTH</code>: Show as a
     * smooth curve.</p> </li> <li> <p> <code>STEPPED</code>: Show steps in line.</p>
     * </li> </ul>
     */
    inline LineInterpolation GetLineInterpolation() const { return m_lineInterpolation; }
    inline bool LineInterpolationHasBeenSet() const { return m_lineInterpolationHasBeenSet; }
    inline void SetLineInterpolation(LineInterpolation value) { m_lineInterpolationHasBeenSet = true; m_lineInterpolation = value; }
    inline LineChartLineStyleSettings& WithLineInterpolation(LineInterpolation value) { SetLineInterpolation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Line style for line series.</p> <ul> <li> <p> <code>SOLID</code>: Show as a
     * solid line.</p> </li> <li> <p> <code>DOTTED</code>: Show as a dotted line.</p>
     * </li> <li> <p> <code>DASHED</code>: Show as a dashed line.</p> </li> </ul>
     */
    inline LineChartLineStyle GetLineStyle() const { return m_lineStyle; }
    inline bool LineStyleHasBeenSet() const { return m_lineStyleHasBeenSet; }
    inline void SetLineStyle(LineChartLineStyle value) { m_lineStyleHasBeenSet = true; m_lineStyle = value; }
    inline LineChartLineStyleSettings& WithLineStyle(LineChartLineStyle value) { SetLineStyle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Width that determines the line thickness.</p>
     */
    inline const Aws::String& GetLineWidth() const { return m_lineWidth; }
    inline bool LineWidthHasBeenSet() const { return m_lineWidthHasBeenSet; }
    template<typename LineWidthT = Aws::String>
    void SetLineWidth(LineWidthT&& value) { m_lineWidthHasBeenSet = true; m_lineWidth = std::forward<LineWidthT>(value); }
    template<typename LineWidthT = Aws::String>
    LineChartLineStyleSettings& WithLineWidth(LineWidthT&& value) { SetLineWidth(std::forward<LineWidthT>(value)); return *this;}
    ///@}
  private:

    Visibility m_lineVisibility{Visibility::NOT_SET};
    bool m_lineVisibilityHasBeenSet = false;

    LineInterpolation m_lineInterpolation{LineInterpolation::NOT_SET};
    bool m_lineInterpolationHasBeenSet = false;

    LineChartLineStyle m_lineStyle{LineChartLineStyle::NOT_SET};
    bool m_lineStyleHasBeenSet = false;

    Aws::String m_lineWidth;
    bool m_lineWidthHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
