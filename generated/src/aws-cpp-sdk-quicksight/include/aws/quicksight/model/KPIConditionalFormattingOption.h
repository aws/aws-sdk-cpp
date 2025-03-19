/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/KPIPrimaryValueConditionalFormatting.h>
#include <aws/quicksight/model/KPIProgressBarConditionalFormatting.h>
#include <aws/quicksight/model/KPIActualValueConditionalFormatting.h>
#include <aws/quicksight/model/KPIComparisonValueConditionalFormatting.h>
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
   * <p>The conditional formatting options of a KPI visual.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KPIConditionalFormattingOption">AWS
   * API Reference</a></p>
   */
  class KPIConditionalFormattingOption
  {
  public:
    AWS_QUICKSIGHT_API KPIConditionalFormattingOption() = default;
    AWS_QUICKSIGHT_API KPIConditionalFormattingOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPIConditionalFormattingOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The conditional formatting for the primary value of a KPI visual.</p>
     */
    inline const KPIPrimaryValueConditionalFormatting& GetPrimaryValue() const { return m_primaryValue; }
    inline bool PrimaryValueHasBeenSet() const { return m_primaryValueHasBeenSet; }
    template<typename PrimaryValueT = KPIPrimaryValueConditionalFormatting>
    void SetPrimaryValue(PrimaryValueT&& value) { m_primaryValueHasBeenSet = true; m_primaryValue = std::forward<PrimaryValueT>(value); }
    template<typename PrimaryValueT = KPIPrimaryValueConditionalFormatting>
    KPIConditionalFormattingOption& WithPrimaryValue(PrimaryValueT&& value) { SetPrimaryValue(std::forward<PrimaryValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditional formatting for the progress bar of a KPI visual.</p>
     */
    inline const KPIProgressBarConditionalFormatting& GetProgressBar() const { return m_progressBar; }
    inline bool ProgressBarHasBeenSet() const { return m_progressBarHasBeenSet; }
    template<typename ProgressBarT = KPIProgressBarConditionalFormatting>
    void SetProgressBar(ProgressBarT&& value) { m_progressBarHasBeenSet = true; m_progressBar = std::forward<ProgressBarT>(value); }
    template<typename ProgressBarT = KPIProgressBarConditionalFormatting>
    KPIConditionalFormattingOption& WithProgressBar(ProgressBarT&& value) { SetProgressBar(std::forward<ProgressBarT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditional formatting for the actual value of a KPI visual.</p>
     */
    inline const KPIActualValueConditionalFormatting& GetActualValue() const { return m_actualValue; }
    inline bool ActualValueHasBeenSet() const { return m_actualValueHasBeenSet; }
    template<typename ActualValueT = KPIActualValueConditionalFormatting>
    void SetActualValue(ActualValueT&& value) { m_actualValueHasBeenSet = true; m_actualValue = std::forward<ActualValueT>(value); }
    template<typename ActualValueT = KPIActualValueConditionalFormatting>
    KPIConditionalFormattingOption& WithActualValue(ActualValueT&& value) { SetActualValue(std::forward<ActualValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditional formatting for the comparison value of a KPI visual.</p>
     */
    inline const KPIComparisonValueConditionalFormatting& GetComparisonValue() const { return m_comparisonValue; }
    inline bool ComparisonValueHasBeenSet() const { return m_comparisonValueHasBeenSet; }
    template<typename ComparisonValueT = KPIComparisonValueConditionalFormatting>
    void SetComparisonValue(ComparisonValueT&& value) { m_comparisonValueHasBeenSet = true; m_comparisonValue = std::forward<ComparisonValueT>(value); }
    template<typename ComparisonValueT = KPIComparisonValueConditionalFormatting>
    KPIConditionalFormattingOption& WithComparisonValue(ComparisonValueT&& value) { SetComparisonValue(std::forward<ComparisonValueT>(value)); return *this;}
    ///@}
  private:

    KPIPrimaryValueConditionalFormatting m_primaryValue;
    bool m_primaryValueHasBeenSet = false;

    KPIProgressBarConditionalFormatting m_progressBar;
    bool m_progressBarHasBeenSet = false;

    KPIActualValueConditionalFormatting m_actualValue;
    bool m_actualValueHasBeenSet = false;

    KPIComparisonValueConditionalFormatting m_comparisonValue;
    bool m_comparisonValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
