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
    AWS_QUICKSIGHT_API LineChartLineStyleSettings();
    AWS_QUICKSIGHT_API LineChartLineStyleSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LineChartLineStyleSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration option that determines whether to show the line for the
     * series.</p>
     */
    inline const Visibility& GetLineVisibility() const{ return m_lineVisibility; }

    /**
     * <p>Configuration option that determines whether to show the line for the
     * series.</p>
     */
    inline bool LineVisibilityHasBeenSet() const { return m_lineVisibilityHasBeenSet; }

    /**
     * <p>Configuration option that determines whether to show the line for the
     * series.</p>
     */
    inline void SetLineVisibility(const Visibility& value) { m_lineVisibilityHasBeenSet = true; m_lineVisibility = value; }

    /**
     * <p>Configuration option that determines whether to show the line for the
     * series.</p>
     */
    inline void SetLineVisibility(Visibility&& value) { m_lineVisibilityHasBeenSet = true; m_lineVisibility = std::move(value); }

    /**
     * <p>Configuration option that determines whether to show the line for the
     * series.</p>
     */
    inline LineChartLineStyleSettings& WithLineVisibility(const Visibility& value) { SetLineVisibility(value); return *this;}

    /**
     * <p>Configuration option that determines whether to show the line for the
     * series.</p>
     */
    inline LineChartLineStyleSettings& WithLineVisibility(Visibility&& value) { SetLineVisibility(std::move(value)); return *this;}


    /**
     * <p>Interpolation style for line series.</p> <ul> <li> <p> <code>LINEAR</code>:
     * Show as default, linear style.</p> </li> <li> <p> <code>SMOOTH</code>: Show as a
     * smooth curve.</p> </li> <li> <p> <code>STEPPED</code>: Show steps in line.</p>
     * </li> </ul>
     */
    inline const LineInterpolation& GetLineInterpolation() const{ return m_lineInterpolation; }

    /**
     * <p>Interpolation style for line series.</p> <ul> <li> <p> <code>LINEAR</code>:
     * Show as default, linear style.</p> </li> <li> <p> <code>SMOOTH</code>: Show as a
     * smooth curve.</p> </li> <li> <p> <code>STEPPED</code>: Show steps in line.</p>
     * </li> </ul>
     */
    inline bool LineInterpolationHasBeenSet() const { return m_lineInterpolationHasBeenSet; }

    /**
     * <p>Interpolation style for line series.</p> <ul> <li> <p> <code>LINEAR</code>:
     * Show as default, linear style.</p> </li> <li> <p> <code>SMOOTH</code>: Show as a
     * smooth curve.</p> </li> <li> <p> <code>STEPPED</code>: Show steps in line.</p>
     * </li> </ul>
     */
    inline void SetLineInterpolation(const LineInterpolation& value) { m_lineInterpolationHasBeenSet = true; m_lineInterpolation = value; }

    /**
     * <p>Interpolation style for line series.</p> <ul> <li> <p> <code>LINEAR</code>:
     * Show as default, linear style.</p> </li> <li> <p> <code>SMOOTH</code>: Show as a
     * smooth curve.</p> </li> <li> <p> <code>STEPPED</code>: Show steps in line.</p>
     * </li> </ul>
     */
    inline void SetLineInterpolation(LineInterpolation&& value) { m_lineInterpolationHasBeenSet = true; m_lineInterpolation = std::move(value); }

    /**
     * <p>Interpolation style for line series.</p> <ul> <li> <p> <code>LINEAR</code>:
     * Show as default, linear style.</p> </li> <li> <p> <code>SMOOTH</code>: Show as a
     * smooth curve.</p> </li> <li> <p> <code>STEPPED</code>: Show steps in line.</p>
     * </li> </ul>
     */
    inline LineChartLineStyleSettings& WithLineInterpolation(const LineInterpolation& value) { SetLineInterpolation(value); return *this;}

    /**
     * <p>Interpolation style for line series.</p> <ul> <li> <p> <code>LINEAR</code>:
     * Show as default, linear style.</p> </li> <li> <p> <code>SMOOTH</code>: Show as a
     * smooth curve.</p> </li> <li> <p> <code>STEPPED</code>: Show steps in line.</p>
     * </li> </ul>
     */
    inline LineChartLineStyleSettings& WithLineInterpolation(LineInterpolation&& value) { SetLineInterpolation(std::move(value)); return *this;}


    /**
     * <p>Line style for line series.</p> <ul> <li> <p> <code>SOLID</code>: Show as a
     * solid line.</p> </li> <li> <p> <code>DOTTED</code>: Show as a dotted line.</p>
     * </li> <li> <p> <code>DASHED</code>: Show as a dashed line.</p> </li> </ul>
     */
    inline const LineChartLineStyle& GetLineStyle() const{ return m_lineStyle; }

    /**
     * <p>Line style for line series.</p> <ul> <li> <p> <code>SOLID</code>: Show as a
     * solid line.</p> </li> <li> <p> <code>DOTTED</code>: Show as a dotted line.</p>
     * </li> <li> <p> <code>DASHED</code>: Show as a dashed line.</p> </li> </ul>
     */
    inline bool LineStyleHasBeenSet() const { return m_lineStyleHasBeenSet; }

    /**
     * <p>Line style for line series.</p> <ul> <li> <p> <code>SOLID</code>: Show as a
     * solid line.</p> </li> <li> <p> <code>DOTTED</code>: Show as a dotted line.</p>
     * </li> <li> <p> <code>DASHED</code>: Show as a dashed line.</p> </li> </ul>
     */
    inline void SetLineStyle(const LineChartLineStyle& value) { m_lineStyleHasBeenSet = true; m_lineStyle = value; }

    /**
     * <p>Line style for line series.</p> <ul> <li> <p> <code>SOLID</code>: Show as a
     * solid line.</p> </li> <li> <p> <code>DOTTED</code>: Show as a dotted line.</p>
     * </li> <li> <p> <code>DASHED</code>: Show as a dashed line.</p> </li> </ul>
     */
    inline void SetLineStyle(LineChartLineStyle&& value) { m_lineStyleHasBeenSet = true; m_lineStyle = std::move(value); }

    /**
     * <p>Line style for line series.</p> <ul> <li> <p> <code>SOLID</code>: Show as a
     * solid line.</p> </li> <li> <p> <code>DOTTED</code>: Show as a dotted line.</p>
     * </li> <li> <p> <code>DASHED</code>: Show as a dashed line.</p> </li> </ul>
     */
    inline LineChartLineStyleSettings& WithLineStyle(const LineChartLineStyle& value) { SetLineStyle(value); return *this;}

    /**
     * <p>Line style for line series.</p> <ul> <li> <p> <code>SOLID</code>: Show as a
     * solid line.</p> </li> <li> <p> <code>DOTTED</code>: Show as a dotted line.</p>
     * </li> <li> <p> <code>DASHED</code>: Show as a dashed line.</p> </li> </ul>
     */
    inline LineChartLineStyleSettings& WithLineStyle(LineChartLineStyle&& value) { SetLineStyle(std::move(value)); return *this;}


    /**
     * <p>Width that determines the line thickness.</p>
     */
    inline const Aws::String& GetLineWidth() const{ return m_lineWidth; }

    /**
     * <p>Width that determines the line thickness.</p>
     */
    inline bool LineWidthHasBeenSet() const { return m_lineWidthHasBeenSet; }

    /**
     * <p>Width that determines the line thickness.</p>
     */
    inline void SetLineWidth(const Aws::String& value) { m_lineWidthHasBeenSet = true; m_lineWidth = value; }

    /**
     * <p>Width that determines the line thickness.</p>
     */
    inline void SetLineWidth(Aws::String&& value) { m_lineWidthHasBeenSet = true; m_lineWidth = std::move(value); }

    /**
     * <p>Width that determines the line thickness.</p>
     */
    inline void SetLineWidth(const char* value) { m_lineWidthHasBeenSet = true; m_lineWidth.assign(value); }

    /**
     * <p>Width that determines the line thickness.</p>
     */
    inline LineChartLineStyleSettings& WithLineWidth(const Aws::String& value) { SetLineWidth(value); return *this;}

    /**
     * <p>Width that determines the line thickness.</p>
     */
    inline LineChartLineStyleSettings& WithLineWidth(Aws::String&& value) { SetLineWidth(std::move(value)); return *this;}

    /**
     * <p>Width that determines the line thickness.</p>
     */
    inline LineChartLineStyleSettings& WithLineWidth(const char* value) { SetLineWidth(value); return *this;}

  private:

    Visibility m_lineVisibility;
    bool m_lineVisibilityHasBeenSet = false;

    LineInterpolation m_lineInterpolation;
    bool m_lineInterpolationHasBeenSet = false;

    LineChartLineStyle m_lineStyle;
    bool m_lineStyleHasBeenSet = false;

    Aws::String m_lineWidth;
    bool m_lineWidthHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
