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
    AWS_QUICKSIGHT_API SubtotalOptions() = default;
    AWS_QUICKSIGHT_API SubtotalOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SubtotalOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visibility configuration for the subtotal cells.</p>
     */
    inline Visibility GetTotalsVisibility() const { return m_totalsVisibility; }
    inline bool TotalsVisibilityHasBeenSet() const { return m_totalsVisibilityHasBeenSet; }
    inline void SetTotalsVisibility(Visibility value) { m_totalsVisibilityHasBeenSet = true; m_totalsVisibility = value; }
    inline SubtotalOptions& WithTotalsVisibility(Visibility value) { SetTotalsVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom label string for the subtotal cells.</p>
     */
    inline const Aws::String& GetCustomLabel() const { return m_customLabel; }
    inline bool CustomLabelHasBeenSet() const { return m_customLabelHasBeenSet; }
    template<typename CustomLabelT = Aws::String>
    void SetCustomLabel(CustomLabelT&& value) { m_customLabelHasBeenSet = true; m_customLabel = std::forward<CustomLabelT>(value); }
    template<typename CustomLabelT = Aws::String>
    SubtotalOptions& WithCustomLabel(CustomLabelT&& value) { SetCustomLabel(std::forward<CustomLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field level (all, custom, last) for the subtotal cells.</p>
     */
    inline PivotTableSubtotalLevel GetFieldLevel() const { return m_fieldLevel; }
    inline bool FieldLevelHasBeenSet() const { return m_fieldLevelHasBeenSet; }
    inline void SetFieldLevel(PivotTableSubtotalLevel value) { m_fieldLevelHasBeenSet = true; m_fieldLevel = value; }
    inline SubtotalOptions& WithFieldLevel(PivotTableSubtotalLevel value) { SetFieldLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional configuration of subtotal cells.</p>
     */
    inline const Aws::Vector<PivotTableFieldSubtotalOptions>& GetFieldLevelOptions() const { return m_fieldLevelOptions; }
    inline bool FieldLevelOptionsHasBeenSet() const { return m_fieldLevelOptionsHasBeenSet; }
    template<typename FieldLevelOptionsT = Aws::Vector<PivotTableFieldSubtotalOptions>>
    void SetFieldLevelOptions(FieldLevelOptionsT&& value) { m_fieldLevelOptionsHasBeenSet = true; m_fieldLevelOptions = std::forward<FieldLevelOptionsT>(value); }
    template<typename FieldLevelOptionsT = Aws::Vector<PivotTableFieldSubtotalOptions>>
    SubtotalOptions& WithFieldLevelOptions(FieldLevelOptionsT&& value) { SetFieldLevelOptions(std::forward<FieldLevelOptionsT>(value)); return *this;}
    template<typename FieldLevelOptionsT = PivotTableFieldSubtotalOptions>
    SubtotalOptions& AddFieldLevelOptions(FieldLevelOptionsT&& value) { m_fieldLevelOptionsHasBeenSet = true; m_fieldLevelOptions.emplace_back(std::forward<FieldLevelOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The cell styling options for the subtotal cells.</p>
     */
    inline const TableCellStyle& GetTotalCellStyle() const { return m_totalCellStyle; }
    inline bool TotalCellStyleHasBeenSet() const { return m_totalCellStyleHasBeenSet; }
    template<typename TotalCellStyleT = TableCellStyle>
    void SetTotalCellStyle(TotalCellStyleT&& value) { m_totalCellStyleHasBeenSet = true; m_totalCellStyle = std::forward<TotalCellStyleT>(value); }
    template<typename TotalCellStyleT = TableCellStyle>
    SubtotalOptions& WithTotalCellStyle(TotalCellStyleT&& value) { SetTotalCellStyle(std::forward<TotalCellStyleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cell styling options for the subtotals of value cells.</p>
     */
    inline const TableCellStyle& GetValueCellStyle() const { return m_valueCellStyle; }
    inline bool ValueCellStyleHasBeenSet() const { return m_valueCellStyleHasBeenSet; }
    template<typename ValueCellStyleT = TableCellStyle>
    void SetValueCellStyle(ValueCellStyleT&& value) { m_valueCellStyleHasBeenSet = true; m_valueCellStyle = std::forward<ValueCellStyleT>(value); }
    template<typename ValueCellStyleT = TableCellStyle>
    SubtotalOptions& WithValueCellStyle(ValueCellStyleT&& value) { SetValueCellStyle(std::forward<ValueCellStyleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cell styling options for the subtotals of header cells.</p>
     */
    inline const TableCellStyle& GetMetricHeaderCellStyle() const { return m_metricHeaderCellStyle; }
    inline bool MetricHeaderCellStyleHasBeenSet() const { return m_metricHeaderCellStyleHasBeenSet; }
    template<typename MetricHeaderCellStyleT = TableCellStyle>
    void SetMetricHeaderCellStyle(MetricHeaderCellStyleT&& value) { m_metricHeaderCellStyleHasBeenSet = true; m_metricHeaderCellStyle = std::forward<MetricHeaderCellStyleT>(value); }
    template<typename MetricHeaderCellStyleT = TableCellStyle>
    SubtotalOptions& WithMetricHeaderCellStyle(MetricHeaderCellStyleT&& value) { SetMetricHeaderCellStyle(std::forward<MetricHeaderCellStyleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The style targets options for subtotals.</p>
     */
    inline const Aws::Vector<TableStyleTarget>& GetStyleTargets() const { return m_styleTargets; }
    inline bool StyleTargetsHasBeenSet() const { return m_styleTargetsHasBeenSet; }
    template<typename StyleTargetsT = Aws::Vector<TableStyleTarget>>
    void SetStyleTargets(StyleTargetsT&& value) { m_styleTargetsHasBeenSet = true; m_styleTargets = std::forward<StyleTargetsT>(value); }
    template<typename StyleTargetsT = Aws::Vector<TableStyleTarget>>
    SubtotalOptions& WithStyleTargets(StyleTargetsT&& value) { SetStyleTargets(std::forward<StyleTargetsT>(value)); return *this;}
    template<typename StyleTargetsT = TableStyleTarget>
    SubtotalOptions& AddStyleTargets(StyleTargetsT&& value) { m_styleTargetsHasBeenSet = true; m_styleTargets.emplace_back(std::forward<StyleTargetsT>(value)); return *this; }
    ///@}
  private:

    Visibility m_totalsVisibility{Visibility::NOT_SET};
    bool m_totalsVisibilityHasBeenSet = false;

    Aws::String m_customLabel;
    bool m_customLabelHasBeenSet = false;

    PivotTableSubtotalLevel m_fieldLevel{PivotTableSubtotalLevel::NOT_SET};
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
