/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GaugeChartPrimaryValueConditionalFormatting.h>
#include <aws/quicksight/model/GaugeChartArcConditionalFormatting.h>
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
   * <p>Conditional formatting options of a
   * <code>GaugeChartVisual</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GaugeChartConditionalFormattingOption">AWS
   * API Reference</a></p>
   */
  class GaugeChartConditionalFormattingOption
  {
  public:
    AWS_QUICKSIGHT_API GaugeChartConditionalFormattingOption();
    AWS_QUICKSIGHT_API GaugeChartConditionalFormattingOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GaugeChartConditionalFormattingOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The conditional formatting for the primary value of a
     * <code>GaugeChartVisual</code>.</p>
     */
    inline const GaugeChartPrimaryValueConditionalFormatting& GetPrimaryValue() const{ return m_primaryValue; }
    inline bool PrimaryValueHasBeenSet() const { return m_primaryValueHasBeenSet; }
    inline void SetPrimaryValue(const GaugeChartPrimaryValueConditionalFormatting& value) { m_primaryValueHasBeenSet = true; m_primaryValue = value; }
    inline void SetPrimaryValue(GaugeChartPrimaryValueConditionalFormatting&& value) { m_primaryValueHasBeenSet = true; m_primaryValue = std::move(value); }
    inline GaugeChartConditionalFormattingOption& WithPrimaryValue(const GaugeChartPrimaryValueConditionalFormatting& value) { SetPrimaryValue(value); return *this;}
    inline GaugeChartConditionalFormattingOption& WithPrimaryValue(GaugeChartPrimaryValueConditionalFormatting&& value) { SetPrimaryValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the arc of a
     * <code>GaugeChartVisual</code>.</p>
     */
    inline const GaugeChartArcConditionalFormatting& GetArc() const{ return m_arc; }
    inline bool ArcHasBeenSet() const { return m_arcHasBeenSet; }
    inline void SetArc(const GaugeChartArcConditionalFormatting& value) { m_arcHasBeenSet = true; m_arc = value; }
    inline void SetArc(GaugeChartArcConditionalFormatting&& value) { m_arcHasBeenSet = true; m_arc = std::move(value); }
    inline GaugeChartConditionalFormattingOption& WithArc(const GaugeChartArcConditionalFormatting& value) { SetArc(value); return *this;}
    inline GaugeChartConditionalFormattingOption& WithArc(GaugeChartArcConditionalFormatting&& value) { SetArc(std::move(value)); return *this;}
    ///@}
  private:

    GaugeChartPrimaryValueConditionalFormatting m_primaryValue;
    bool m_primaryValueHasBeenSet = false;

    GaugeChartArcConditionalFormatting m_arc;
    bool m_arcHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
