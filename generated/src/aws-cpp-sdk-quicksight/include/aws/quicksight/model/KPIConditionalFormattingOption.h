﻿/**
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
    AWS_QUICKSIGHT_API KPIConditionalFormattingOption();
    AWS_QUICKSIGHT_API KPIConditionalFormattingOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPIConditionalFormattingOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The conditional formatting for the primary value of a KPI visual.</p>
     */
    inline const KPIPrimaryValueConditionalFormatting& GetPrimaryValue() const{ return m_primaryValue; }

    /**
     * <p>The conditional formatting for the primary value of a KPI visual.</p>
     */
    inline bool PrimaryValueHasBeenSet() const { return m_primaryValueHasBeenSet; }

    /**
     * <p>The conditional formatting for the primary value of a KPI visual.</p>
     */
    inline void SetPrimaryValue(const KPIPrimaryValueConditionalFormatting& value) { m_primaryValueHasBeenSet = true; m_primaryValue = value; }

    /**
     * <p>The conditional formatting for the primary value of a KPI visual.</p>
     */
    inline void SetPrimaryValue(KPIPrimaryValueConditionalFormatting&& value) { m_primaryValueHasBeenSet = true; m_primaryValue = std::move(value); }

    /**
     * <p>The conditional formatting for the primary value of a KPI visual.</p>
     */
    inline KPIConditionalFormattingOption& WithPrimaryValue(const KPIPrimaryValueConditionalFormatting& value) { SetPrimaryValue(value); return *this;}

    /**
     * <p>The conditional formatting for the primary value of a KPI visual.</p>
     */
    inline KPIConditionalFormattingOption& WithPrimaryValue(KPIPrimaryValueConditionalFormatting&& value) { SetPrimaryValue(std::move(value)); return *this;}


    /**
     * <p>The conditional formatting for the progress bar of a KPI visual.</p>
     */
    inline const KPIProgressBarConditionalFormatting& GetProgressBar() const{ return m_progressBar; }

    /**
     * <p>The conditional formatting for the progress bar of a KPI visual.</p>
     */
    inline bool ProgressBarHasBeenSet() const { return m_progressBarHasBeenSet; }

    /**
     * <p>The conditional formatting for the progress bar of a KPI visual.</p>
     */
    inline void SetProgressBar(const KPIProgressBarConditionalFormatting& value) { m_progressBarHasBeenSet = true; m_progressBar = value; }

    /**
     * <p>The conditional formatting for the progress bar of a KPI visual.</p>
     */
    inline void SetProgressBar(KPIProgressBarConditionalFormatting&& value) { m_progressBarHasBeenSet = true; m_progressBar = std::move(value); }

    /**
     * <p>The conditional formatting for the progress bar of a KPI visual.</p>
     */
    inline KPIConditionalFormattingOption& WithProgressBar(const KPIProgressBarConditionalFormatting& value) { SetProgressBar(value); return *this;}

    /**
     * <p>The conditional formatting for the progress bar of a KPI visual.</p>
     */
    inline KPIConditionalFormattingOption& WithProgressBar(KPIProgressBarConditionalFormatting&& value) { SetProgressBar(std::move(value)); return *this;}


    /**
     * <p>The conditional formatting for the actual value of a KPI visual.</p>
     */
    inline const KPIActualValueConditionalFormatting& GetActualValue() const{ return m_actualValue; }

    /**
     * <p>The conditional formatting for the actual value of a KPI visual.</p>
     */
    inline bool ActualValueHasBeenSet() const { return m_actualValueHasBeenSet; }

    /**
     * <p>The conditional formatting for the actual value of a KPI visual.</p>
     */
    inline void SetActualValue(const KPIActualValueConditionalFormatting& value) { m_actualValueHasBeenSet = true; m_actualValue = value; }

    /**
     * <p>The conditional formatting for the actual value of a KPI visual.</p>
     */
    inline void SetActualValue(KPIActualValueConditionalFormatting&& value) { m_actualValueHasBeenSet = true; m_actualValue = std::move(value); }

    /**
     * <p>The conditional formatting for the actual value of a KPI visual.</p>
     */
    inline KPIConditionalFormattingOption& WithActualValue(const KPIActualValueConditionalFormatting& value) { SetActualValue(value); return *this;}

    /**
     * <p>The conditional formatting for the actual value of a KPI visual.</p>
     */
    inline KPIConditionalFormattingOption& WithActualValue(KPIActualValueConditionalFormatting&& value) { SetActualValue(std::move(value)); return *this;}


    /**
     * <p>The conditional formatting for the comparison value of a KPI visual.</p>
     */
    inline const KPIComparisonValueConditionalFormatting& GetComparisonValue() const{ return m_comparisonValue; }

    /**
     * <p>The conditional formatting for the comparison value of a KPI visual.</p>
     */
    inline bool ComparisonValueHasBeenSet() const { return m_comparisonValueHasBeenSet; }

    /**
     * <p>The conditional formatting for the comparison value of a KPI visual.</p>
     */
    inline void SetComparisonValue(const KPIComparisonValueConditionalFormatting& value) { m_comparisonValueHasBeenSet = true; m_comparisonValue = value; }

    /**
     * <p>The conditional formatting for the comparison value of a KPI visual.</p>
     */
    inline void SetComparisonValue(KPIComparisonValueConditionalFormatting&& value) { m_comparisonValueHasBeenSet = true; m_comparisonValue = std::move(value); }

    /**
     * <p>The conditional formatting for the comparison value of a KPI visual.</p>
     */
    inline KPIConditionalFormattingOption& WithComparisonValue(const KPIComparisonValueConditionalFormatting& value) { SetComparisonValue(value); return *this;}

    /**
     * <p>The conditional formatting for the comparison value of a KPI visual.</p>
     */
    inline KPIConditionalFormattingOption& WithComparisonValue(KPIComparisonValueConditionalFormatting&& value) { SetComparisonValue(std::move(value)); return *this;}

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
