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


    /**
     * <p>The visibility configuration for the total cells.</p>
     */
    inline const Visibility& GetTotalsVisibility() const{ return m_totalsVisibility; }

    /**
     * <p>The visibility configuration for the total cells.</p>
     */
    inline bool TotalsVisibilityHasBeenSet() const { return m_totalsVisibilityHasBeenSet; }

    /**
     * <p>The visibility configuration for the total cells.</p>
     */
    inline void SetTotalsVisibility(const Visibility& value) { m_totalsVisibilityHasBeenSet = true; m_totalsVisibility = value; }

    /**
     * <p>The visibility configuration for the total cells.</p>
     */
    inline void SetTotalsVisibility(Visibility&& value) { m_totalsVisibilityHasBeenSet = true; m_totalsVisibility = std::move(value); }

    /**
     * <p>The visibility configuration for the total cells.</p>
     */
    inline PivotTotalOptions& WithTotalsVisibility(const Visibility& value) { SetTotalsVisibility(value); return *this;}

    /**
     * <p>The visibility configuration for the total cells.</p>
     */
    inline PivotTotalOptions& WithTotalsVisibility(Visibility&& value) { SetTotalsVisibility(std::move(value)); return *this;}


    /**
     * <p>The placement (start, end) for the total cells.</p>
     */
    inline const TableTotalsPlacement& GetPlacement() const{ return m_placement; }

    /**
     * <p>The placement (start, end) for the total cells.</p>
     */
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }

    /**
     * <p>The placement (start, end) for the total cells.</p>
     */
    inline void SetPlacement(const TableTotalsPlacement& value) { m_placementHasBeenSet = true; m_placement = value; }

    /**
     * <p>The placement (start, end) for the total cells.</p>
     */
    inline void SetPlacement(TableTotalsPlacement&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }

    /**
     * <p>The placement (start, end) for the total cells.</p>
     */
    inline PivotTotalOptions& WithPlacement(const TableTotalsPlacement& value) { SetPlacement(value); return *this;}

    /**
     * <p>The placement (start, end) for the total cells.</p>
     */
    inline PivotTotalOptions& WithPlacement(TableTotalsPlacement&& value) { SetPlacement(std::move(value)); return *this;}


    /**
     * <p>The scroll status (pinned, scrolled) for the total cells.</p>
     */
    inline const TableTotalsScrollStatus& GetScrollStatus() const{ return m_scrollStatus; }

    /**
     * <p>The scroll status (pinned, scrolled) for the total cells.</p>
     */
    inline bool ScrollStatusHasBeenSet() const { return m_scrollStatusHasBeenSet; }

    /**
     * <p>The scroll status (pinned, scrolled) for the total cells.</p>
     */
    inline void SetScrollStatus(const TableTotalsScrollStatus& value) { m_scrollStatusHasBeenSet = true; m_scrollStatus = value; }

    /**
     * <p>The scroll status (pinned, scrolled) for the total cells.</p>
     */
    inline void SetScrollStatus(TableTotalsScrollStatus&& value) { m_scrollStatusHasBeenSet = true; m_scrollStatus = std::move(value); }

    /**
     * <p>The scroll status (pinned, scrolled) for the total cells.</p>
     */
    inline PivotTotalOptions& WithScrollStatus(const TableTotalsScrollStatus& value) { SetScrollStatus(value); return *this;}

    /**
     * <p>The scroll status (pinned, scrolled) for the total cells.</p>
     */
    inline PivotTotalOptions& WithScrollStatus(TableTotalsScrollStatus&& value) { SetScrollStatus(std::move(value)); return *this;}


    /**
     * <p>The custom label string for the total cells.</p>
     */
    inline const Aws::String& GetCustomLabel() const{ return m_customLabel; }

    /**
     * <p>The custom label string for the total cells.</p>
     */
    inline bool CustomLabelHasBeenSet() const { return m_customLabelHasBeenSet; }

    /**
     * <p>The custom label string for the total cells.</p>
     */
    inline void SetCustomLabel(const Aws::String& value) { m_customLabelHasBeenSet = true; m_customLabel = value; }

    /**
     * <p>The custom label string for the total cells.</p>
     */
    inline void SetCustomLabel(Aws::String&& value) { m_customLabelHasBeenSet = true; m_customLabel = std::move(value); }

    /**
     * <p>The custom label string for the total cells.</p>
     */
    inline void SetCustomLabel(const char* value) { m_customLabelHasBeenSet = true; m_customLabel.assign(value); }

    /**
     * <p>The custom label string for the total cells.</p>
     */
    inline PivotTotalOptions& WithCustomLabel(const Aws::String& value) { SetCustomLabel(value); return *this;}

    /**
     * <p>The custom label string for the total cells.</p>
     */
    inline PivotTotalOptions& WithCustomLabel(Aws::String&& value) { SetCustomLabel(std::move(value)); return *this;}

    /**
     * <p>The custom label string for the total cells.</p>
     */
    inline PivotTotalOptions& WithCustomLabel(const char* value) { SetCustomLabel(value); return *this;}


    /**
     * <p>The cell styling options for the total cells.</p>
     */
    inline const TableCellStyle& GetTotalCellStyle() const{ return m_totalCellStyle; }

    /**
     * <p>The cell styling options for the total cells.</p>
     */
    inline bool TotalCellStyleHasBeenSet() const { return m_totalCellStyleHasBeenSet; }

    /**
     * <p>The cell styling options for the total cells.</p>
     */
    inline void SetTotalCellStyle(const TableCellStyle& value) { m_totalCellStyleHasBeenSet = true; m_totalCellStyle = value; }

    /**
     * <p>The cell styling options for the total cells.</p>
     */
    inline void SetTotalCellStyle(TableCellStyle&& value) { m_totalCellStyleHasBeenSet = true; m_totalCellStyle = std::move(value); }

    /**
     * <p>The cell styling options for the total cells.</p>
     */
    inline PivotTotalOptions& WithTotalCellStyle(const TableCellStyle& value) { SetTotalCellStyle(value); return *this;}

    /**
     * <p>The cell styling options for the total cells.</p>
     */
    inline PivotTotalOptions& WithTotalCellStyle(TableCellStyle&& value) { SetTotalCellStyle(std::move(value)); return *this;}


    /**
     * <p>The cell styling options for the totals of value cells.</p>
     */
    inline const TableCellStyle& GetValueCellStyle() const{ return m_valueCellStyle; }

    /**
     * <p>The cell styling options for the totals of value cells.</p>
     */
    inline bool ValueCellStyleHasBeenSet() const { return m_valueCellStyleHasBeenSet; }

    /**
     * <p>The cell styling options for the totals of value cells.</p>
     */
    inline void SetValueCellStyle(const TableCellStyle& value) { m_valueCellStyleHasBeenSet = true; m_valueCellStyle = value; }

    /**
     * <p>The cell styling options for the totals of value cells.</p>
     */
    inline void SetValueCellStyle(TableCellStyle&& value) { m_valueCellStyleHasBeenSet = true; m_valueCellStyle = std::move(value); }

    /**
     * <p>The cell styling options for the totals of value cells.</p>
     */
    inline PivotTotalOptions& WithValueCellStyle(const TableCellStyle& value) { SetValueCellStyle(value); return *this;}

    /**
     * <p>The cell styling options for the totals of value cells.</p>
     */
    inline PivotTotalOptions& WithValueCellStyle(TableCellStyle&& value) { SetValueCellStyle(std::move(value)); return *this;}


    /**
     * <p>The cell styling options for the total of header cells.</p>
     */
    inline const TableCellStyle& GetMetricHeaderCellStyle() const{ return m_metricHeaderCellStyle; }

    /**
     * <p>The cell styling options for the total of header cells.</p>
     */
    inline bool MetricHeaderCellStyleHasBeenSet() const { return m_metricHeaderCellStyleHasBeenSet; }

    /**
     * <p>The cell styling options for the total of header cells.</p>
     */
    inline void SetMetricHeaderCellStyle(const TableCellStyle& value) { m_metricHeaderCellStyleHasBeenSet = true; m_metricHeaderCellStyle = value; }

    /**
     * <p>The cell styling options for the total of header cells.</p>
     */
    inline void SetMetricHeaderCellStyle(TableCellStyle&& value) { m_metricHeaderCellStyleHasBeenSet = true; m_metricHeaderCellStyle = std::move(value); }

    /**
     * <p>The cell styling options for the total of header cells.</p>
     */
    inline PivotTotalOptions& WithMetricHeaderCellStyle(const TableCellStyle& value) { SetMetricHeaderCellStyle(value); return *this;}

    /**
     * <p>The cell styling options for the total of header cells.</p>
     */
    inline PivotTotalOptions& WithMetricHeaderCellStyle(TableCellStyle&& value) { SetMetricHeaderCellStyle(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
