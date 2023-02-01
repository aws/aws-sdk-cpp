/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ConditionalFormattingColor.h>
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
   * <p>The options that determine the presentation of the arc of a
   * <code>GaugeChartVisual</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GaugeChartArcConditionalFormatting">AWS
   * API Reference</a></p>
   */
  class GaugeChartArcConditionalFormatting
  {
  public:
    AWS_QUICKSIGHT_API GaugeChartArcConditionalFormatting();
    AWS_QUICKSIGHT_API GaugeChartArcConditionalFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GaugeChartArcConditionalFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The conditional formatting of the arc foreground color.</p>
     */
    inline const ConditionalFormattingColor& GetForegroundColor() const{ return m_foregroundColor; }

    /**
     * <p>The conditional formatting of the arc foreground color.</p>
     */
    inline bool ForegroundColorHasBeenSet() const { return m_foregroundColorHasBeenSet; }

    /**
     * <p>The conditional formatting of the arc foreground color.</p>
     */
    inline void SetForegroundColor(const ConditionalFormattingColor& value) { m_foregroundColorHasBeenSet = true; m_foregroundColor = value; }

    /**
     * <p>The conditional formatting of the arc foreground color.</p>
     */
    inline void SetForegroundColor(ConditionalFormattingColor&& value) { m_foregroundColorHasBeenSet = true; m_foregroundColor = std::move(value); }

    /**
     * <p>The conditional formatting of the arc foreground color.</p>
     */
    inline GaugeChartArcConditionalFormatting& WithForegroundColor(const ConditionalFormattingColor& value) { SetForegroundColor(value); return *this;}

    /**
     * <p>The conditional formatting of the arc foreground color.</p>
     */
    inline GaugeChartArcConditionalFormatting& WithForegroundColor(ConditionalFormattingColor&& value) { SetForegroundColor(std::move(value)); return *this;}

  private:

    ConditionalFormattingColor m_foregroundColor;
    bool m_foregroundColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
