/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/TableTotalsPlacement.h>
#include <aws/quicksight/model/TableTotalsScrollStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TableCellStyle.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/TotalAggregationOption.h>
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
   * <p>The optional configuration of totals cells in a
   * <code>PivotTableVisual</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTotalOptions">AWS
   * API Reference</a></p>
   */
  class PivotTotalOptions
  {
  public:
    AWS_QUICKSIGHT_API PivotTotalOptions();
    AWS_QUICKSIGHT_API PivotTotalOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTotalOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visibility configuration for the total cells.</p>
     */
    inline const Visibility& GetTotalsVisibility() const{ return m_totalsVisibility; }
    inline bool TotalsVisibilityHasBeenSet() const { return m_totalsVisibilityHasBeenSet; }
    inline void SetTotalsVisibility(const Visibility& value) { m_totalsVisibilityHasBeenSet = true; m_totalsVisibility = value; }
    inline void SetTotalsVisibility(Visibility&& value) { m_totalsVisibilityHasBeenSet = true; m_totalsVisibility = std::move(value); }
    inline PivotTotalOptions& WithTotalsVisibility(const Visibility& value) { SetTotalsVisibility(value); return *this;}
    inline PivotTotalOptions& WithTotalsVisibility(Visibility&& value) { SetTotalsVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The placement (start, end) for the total cells.</p>
     */
    inline const TableTotalsPlacement& GetPlacement() const{ return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    inline void SetPlacement(const TableTotalsPlacement& value) { m_placementHasBeenSet = true; m_placement = value; }
    inline void SetPlacement(TableTotalsPlacement&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }
    inline PivotTotalOptions& WithPlacement(const TableTotalsPlacement& value) { SetPlacement(value); return *this;}
    inline PivotTotalOptions& WithPlacement(TableTotalsPlacement&& value) { SetPlacement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scroll status (pinned, scrolled) for the total cells.</p>
     */
    inline const TableTotalsScrollStatus& GetScrollStatus() const{ return m_scrollStatus; }
    inline bool ScrollStatusHasBeenSet() const { return m_scrollStatusHasBeenSet; }
    inline void SetScrollStatus(const TableTotalsScrollStatus& value) { m_scrollStatusHasBeenSet = true; m_scrollStatus = value; }
    inline void SetScrollStatus(TableTotalsScrollStatus&& value) { m_scrollStatusHasBeenSet = true; m_scrollStatus = std::move(value); }
    inline PivotTotalOptions& WithScrollStatus(const TableTotalsScrollStatus& value) { SetScrollStatus(value); return *this;}
    inline PivotTotalOptions& WithScrollStatus(TableTotalsScrollStatus&& value) { SetScrollStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom label string for the total cells.</p>
     */
    inline const Aws::String& GetCustomLabel() const{ return m_customLabel; }
    inline bool CustomLabelHasBeenSet() const { return m_customLabelHasBeenSet; }
    inline void SetCustomLabel(const Aws::String& value) { m_customLabelHasBeenSet = true; m_customLabel = value; }
    inline void SetCustomLabel(Aws::String&& value) { m_customLabelHasBeenSet = true; m_customLabel = std::move(value); }
    inline void SetCustomLabel(const char* value) { m_customLabelHasBeenSet = true; m_customLabel.assign(value); }
    inline PivotTotalOptions& WithCustomLabel(const Aws::String& value) { SetCustomLabel(value); return *this;}
    inline PivotTotalOptions& WithCustomLabel(Aws::String&& value) { SetCustomLabel(std::move(value)); return *this;}
    inline PivotTotalOptions& WithCustomLabel(const char* value) { SetCustomLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cell styling options for the total cells.</p>
     */
    inline const TableCellStyle& GetTotalCellStyle() const{ return m_totalCellStyle; }
    inline bool TotalCellStyleHasBeenSet() const { return m_totalCellStyleHasBeenSet; }
    inline void SetTotalCellStyle(const TableCellStyle& value) { m_totalCellStyleHasBeenSet = true; m_totalCellStyle = value; }
    inline void SetTotalCellStyle(TableCellStyle&& value) { m_totalCellStyleHasBeenSet = true; m_totalCellStyle = std::move(value); }
    inline PivotTotalOptions& WithTotalCellStyle(const TableCellStyle& value) { SetTotalCellStyle(value); return *this;}
    inline PivotTotalOptions& WithTotalCellStyle(TableCellStyle&& value) { SetTotalCellStyle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cell styling options for the totals of value cells.</p>
     */
    inline const TableCellStyle& GetValueCellStyle() const{ return m_valueCellStyle; }
    inline bool ValueCellStyleHasBeenSet() const { return m_valueCellStyleHasBeenSet; }
    inline void SetValueCellStyle(const TableCellStyle& value) { m_valueCellStyleHasBeenSet = true; m_valueCellStyle = value; }
    inline void SetValueCellStyle(TableCellStyle&& value) { m_valueCellStyleHasBeenSet = true; m_valueCellStyle = std::move(value); }
    inline PivotTotalOptions& WithValueCellStyle(const TableCellStyle& value) { SetValueCellStyle(value); return *this;}
    inline PivotTotalOptions& WithValueCellStyle(TableCellStyle&& value) { SetValueCellStyle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cell styling options for the total of header cells.</p>
     */
    inline const TableCellStyle& GetMetricHeaderCellStyle() const{ return m_metricHeaderCellStyle; }
    inline bool MetricHeaderCellStyleHasBeenSet() const { return m_metricHeaderCellStyleHasBeenSet; }
    inline void SetMetricHeaderCellStyle(const TableCellStyle& value) { m_metricHeaderCellStyleHasBeenSet = true; m_metricHeaderCellStyle = value; }
    inline void SetMetricHeaderCellStyle(TableCellStyle&& value) { m_metricHeaderCellStyleHasBeenSet = true; m_metricHeaderCellStyle = std::move(value); }
    inline PivotTotalOptions& WithMetricHeaderCellStyle(const TableCellStyle& value) { SetMetricHeaderCellStyle(value); return *this;}
    inline PivotTotalOptions& WithMetricHeaderCellStyle(TableCellStyle&& value) { SetMetricHeaderCellStyle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total aggregation options for each value field.</p>
     */
    inline const Aws::Vector<TotalAggregationOption>& GetTotalAggregationOptions() const{ return m_totalAggregationOptions; }
    inline bool TotalAggregationOptionsHasBeenSet() const { return m_totalAggregationOptionsHasBeenSet; }
    inline void SetTotalAggregationOptions(const Aws::Vector<TotalAggregationOption>& value) { m_totalAggregationOptionsHasBeenSet = true; m_totalAggregationOptions = value; }
    inline void SetTotalAggregationOptions(Aws::Vector<TotalAggregationOption>&& value) { m_totalAggregationOptionsHasBeenSet = true; m_totalAggregationOptions = std::move(value); }
    inline PivotTotalOptions& WithTotalAggregationOptions(const Aws::Vector<TotalAggregationOption>& value) { SetTotalAggregationOptions(value); return *this;}
    inline PivotTotalOptions& WithTotalAggregationOptions(Aws::Vector<TotalAggregationOption>&& value) { SetTotalAggregationOptions(std::move(value)); return *this;}
    inline PivotTotalOptions& AddTotalAggregationOptions(const TotalAggregationOption& value) { m_totalAggregationOptionsHasBeenSet = true; m_totalAggregationOptions.push_back(value); return *this; }
    inline PivotTotalOptions& AddTotalAggregationOptions(TotalAggregationOption&& value) { m_totalAggregationOptionsHasBeenSet = true; m_totalAggregationOptions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Visibility m_totalsVisibility;
    bool m_totalsVisibilityHasBeenSet = false;

    TableTotalsPlacement m_placement;
    bool m_placementHasBeenSet = false;

    TableTotalsScrollStatus m_scrollStatus;
    bool m_scrollStatusHasBeenSet = false;

    Aws::String m_customLabel;
    bool m_customLabelHasBeenSet = false;

    TableCellStyle m_totalCellStyle;
    bool m_totalCellStyleHasBeenSet = false;

    TableCellStyle m_valueCellStyle;
    bool m_valueCellStyleHasBeenSet = false;

    TableCellStyle m_metricHeaderCellStyle;
    bool m_metricHeaderCellStyleHasBeenSet = false;

    Aws::Vector<TotalAggregationOption> m_totalAggregationOptions;
    bool m_totalAggregationOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
