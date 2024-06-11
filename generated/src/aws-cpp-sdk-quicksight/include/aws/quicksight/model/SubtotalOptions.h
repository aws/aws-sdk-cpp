/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/PivotTableSubtotalLevel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/TableCellStyle.h>
#include <aws/quicksight/model/PivotTableFieldSubtotalOptions.h>
#include <aws/quicksight/model/TableStyleTarget.h>
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
   * <p>The subtotal options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SubtotalOptions">AWS
   * API Reference</a></p>
   */
  class SubtotalOptions
  {
  public:
    AWS_QUICKSIGHT_API SubtotalOptions();
    AWS_QUICKSIGHT_API SubtotalOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SubtotalOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visibility configuration for the subtotal cells.</p>
     */
    inline const Visibility& GetTotalsVisibility() const{ return m_totalsVisibility; }
    inline bool TotalsVisibilityHasBeenSet() const { return m_totalsVisibilityHasBeenSet; }
    inline void SetTotalsVisibility(const Visibility& value) { m_totalsVisibilityHasBeenSet = true; m_totalsVisibility = value; }
    inline void SetTotalsVisibility(Visibility&& value) { m_totalsVisibilityHasBeenSet = true; m_totalsVisibility = std::move(value); }
    inline SubtotalOptions& WithTotalsVisibility(const Visibility& value) { SetTotalsVisibility(value); return *this;}
    inline SubtotalOptions& WithTotalsVisibility(Visibility&& value) { SetTotalsVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom label string for the subtotal cells.</p>
     */
    inline const Aws::String& GetCustomLabel() const{ return m_customLabel; }
    inline bool CustomLabelHasBeenSet() const { return m_customLabelHasBeenSet; }
    inline void SetCustomLabel(const Aws::String& value) { m_customLabelHasBeenSet = true; m_customLabel = value; }
    inline void SetCustomLabel(Aws::String&& value) { m_customLabelHasBeenSet = true; m_customLabel = std::move(value); }
    inline void SetCustomLabel(const char* value) { m_customLabelHasBeenSet = true; m_customLabel.assign(value); }
    inline SubtotalOptions& WithCustomLabel(const Aws::String& value) { SetCustomLabel(value); return *this;}
    inline SubtotalOptions& WithCustomLabel(Aws::String&& value) { SetCustomLabel(std::move(value)); return *this;}
    inline SubtotalOptions& WithCustomLabel(const char* value) { SetCustomLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field level (all, custom, last) for the subtotal cells.</p>
     */
    inline const PivotTableSubtotalLevel& GetFieldLevel() const{ return m_fieldLevel; }
    inline bool FieldLevelHasBeenSet() const { return m_fieldLevelHasBeenSet; }
    inline void SetFieldLevel(const PivotTableSubtotalLevel& value) { m_fieldLevelHasBeenSet = true; m_fieldLevel = value; }
    inline void SetFieldLevel(PivotTableSubtotalLevel&& value) { m_fieldLevelHasBeenSet = true; m_fieldLevel = std::move(value); }
    inline SubtotalOptions& WithFieldLevel(const PivotTableSubtotalLevel& value) { SetFieldLevel(value); return *this;}
    inline SubtotalOptions& WithFieldLevel(PivotTableSubtotalLevel&& value) { SetFieldLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional configuration of subtotal cells.</p>
     */
    inline const Aws::Vector<PivotTableFieldSubtotalOptions>& GetFieldLevelOptions() const{ return m_fieldLevelOptions; }
    inline bool FieldLevelOptionsHasBeenSet() const { return m_fieldLevelOptionsHasBeenSet; }
    inline void SetFieldLevelOptions(const Aws::Vector<PivotTableFieldSubtotalOptions>& value) { m_fieldLevelOptionsHasBeenSet = true; m_fieldLevelOptions = value; }
    inline void SetFieldLevelOptions(Aws::Vector<PivotTableFieldSubtotalOptions>&& value) { m_fieldLevelOptionsHasBeenSet = true; m_fieldLevelOptions = std::move(value); }
    inline SubtotalOptions& WithFieldLevelOptions(const Aws::Vector<PivotTableFieldSubtotalOptions>& value) { SetFieldLevelOptions(value); return *this;}
    inline SubtotalOptions& WithFieldLevelOptions(Aws::Vector<PivotTableFieldSubtotalOptions>&& value) { SetFieldLevelOptions(std::move(value)); return *this;}
    inline SubtotalOptions& AddFieldLevelOptions(const PivotTableFieldSubtotalOptions& value) { m_fieldLevelOptionsHasBeenSet = true; m_fieldLevelOptions.push_back(value); return *this; }
    inline SubtotalOptions& AddFieldLevelOptions(PivotTableFieldSubtotalOptions&& value) { m_fieldLevelOptionsHasBeenSet = true; m_fieldLevelOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The cell styling options for the subtotal cells.</p>
     */
    inline const TableCellStyle& GetTotalCellStyle() const{ return m_totalCellStyle; }
    inline bool TotalCellStyleHasBeenSet() const { return m_totalCellStyleHasBeenSet; }
    inline void SetTotalCellStyle(const TableCellStyle& value) { m_totalCellStyleHasBeenSet = true; m_totalCellStyle = value; }
    inline void SetTotalCellStyle(TableCellStyle&& value) { m_totalCellStyleHasBeenSet = true; m_totalCellStyle = std::move(value); }
    inline SubtotalOptions& WithTotalCellStyle(const TableCellStyle& value) { SetTotalCellStyle(value); return *this;}
    inline SubtotalOptions& WithTotalCellStyle(TableCellStyle&& value) { SetTotalCellStyle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cell styling options for the subtotals of value cells.</p>
     */
    inline const TableCellStyle& GetValueCellStyle() const{ return m_valueCellStyle; }
    inline bool ValueCellStyleHasBeenSet() const { return m_valueCellStyleHasBeenSet; }
    inline void SetValueCellStyle(const TableCellStyle& value) { m_valueCellStyleHasBeenSet = true; m_valueCellStyle = value; }
    inline void SetValueCellStyle(TableCellStyle&& value) { m_valueCellStyleHasBeenSet = true; m_valueCellStyle = std::move(value); }
    inline SubtotalOptions& WithValueCellStyle(const TableCellStyle& value) { SetValueCellStyle(value); return *this;}
    inline SubtotalOptions& WithValueCellStyle(TableCellStyle&& value) { SetValueCellStyle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cell styling options for the subtotals of header cells.</p>
     */
    inline const TableCellStyle& GetMetricHeaderCellStyle() const{ return m_metricHeaderCellStyle; }
    inline bool MetricHeaderCellStyleHasBeenSet() const { return m_metricHeaderCellStyleHasBeenSet; }
    inline void SetMetricHeaderCellStyle(const TableCellStyle& value) { m_metricHeaderCellStyleHasBeenSet = true; m_metricHeaderCellStyle = value; }
    inline void SetMetricHeaderCellStyle(TableCellStyle&& value) { m_metricHeaderCellStyleHasBeenSet = true; m_metricHeaderCellStyle = std::move(value); }
    inline SubtotalOptions& WithMetricHeaderCellStyle(const TableCellStyle& value) { SetMetricHeaderCellStyle(value); return *this;}
    inline SubtotalOptions& WithMetricHeaderCellStyle(TableCellStyle&& value) { SetMetricHeaderCellStyle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The style targets options for subtotals.</p>
     */
    inline const Aws::Vector<TableStyleTarget>& GetStyleTargets() const{ return m_styleTargets; }
    inline bool StyleTargetsHasBeenSet() const { return m_styleTargetsHasBeenSet; }
    inline void SetStyleTargets(const Aws::Vector<TableStyleTarget>& value) { m_styleTargetsHasBeenSet = true; m_styleTargets = value; }
    inline void SetStyleTargets(Aws::Vector<TableStyleTarget>&& value) { m_styleTargetsHasBeenSet = true; m_styleTargets = std::move(value); }
    inline SubtotalOptions& WithStyleTargets(const Aws::Vector<TableStyleTarget>& value) { SetStyleTargets(value); return *this;}
    inline SubtotalOptions& WithStyleTargets(Aws::Vector<TableStyleTarget>&& value) { SetStyleTargets(std::move(value)); return *this;}
    inline SubtotalOptions& AddStyleTargets(const TableStyleTarget& value) { m_styleTargetsHasBeenSet = true; m_styleTargets.push_back(value); return *this; }
    inline SubtotalOptions& AddStyleTargets(TableStyleTarget&& value) { m_styleTargetsHasBeenSet = true; m_styleTargets.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Visibility m_totalsVisibility;
    bool m_totalsVisibilityHasBeenSet = false;

    Aws::String m_customLabel;
    bool m_customLabelHasBeenSet = false;

    PivotTableSubtotalLevel m_fieldLevel;
    bool m_fieldLevelHasBeenSet = false;

    Aws::Vector<PivotTableFieldSubtotalOptions> m_fieldLevelOptions;
    bool m_fieldLevelOptionsHasBeenSet = false;

    TableCellStyle m_totalCellStyle;
    bool m_totalCellStyleHasBeenSet = false;

    TableCellStyle m_valueCellStyle;
    bool m_valueCellStyleHasBeenSet = false;

    TableCellStyle m_metricHeaderCellStyle;
    bool m_metricHeaderCellStyleHasBeenSet = false;

    Aws::Vector<TableStyleTarget> m_styleTargets;
    bool m_styleTargetsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
