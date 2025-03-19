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
   * <p>The total options for a table visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TotalOptions">AWS
   * API Reference</a></p>
   */
  class TotalOptions
  {
  public:
    AWS_QUICKSIGHT_API TotalOptions() = default;
    AWS_QUICKSIGHT_API TotalOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TotalOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visibility configuration for the total cells.</p>
     */
    inline Visibility GetTotalsVisibility() const { return m_totalsVisibility; }
    inline bool TotalsVisibilityHasBeenSet() const { return m_totalsVisibilityHasBeenSet; }
    inline void SetTotalsVisibility(Visibility value) { m_totalsVisibilityHasBeenSet = true; m_totalsVisibility = value; }
    inline TotalOptions& WithTotalsVisibility(Visibility value) { SetTotalsVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The placement (start, end) for the total cells.</p>
     */
    inline TableTotalsPlacement GetPlacement() const { return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    inline void SetPlacement(TableTotalsPlacement value) { m_placementHasBeenSet = true; m_placement = value; }
    inline TotalOptions& WithPlacement(TableTotalsPlacement value) { SetPlacement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scroll status (pinned, scrolled) for the total cells.</p>
     */
    inline TableTotalsScrollStatus GetScrollStatus() const { return m_scrollStatus; }
    inline bool ScrollStatusHasBeenSet() const { return m_scrollStatusHasBeenSet; }
    inline void SetScrollStatus(TableTotalsScrollStatus value) { m_scrollStatusHasBeenSet = true; m_scrollStatus = value; }
    inline TotalOptions& WithScrollStatus(TableTotalsScrollStatus value) { SetScrollStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom label string for the total cells.</p>
     */
    inline const Aws::String& GetCustomLabel() const { return m_customLabel; }
    inline bool CustomLabelHasBeenSet() const { return m_customLabelHasBeenSet; }
    template<typename CustomLabelT = Aws::String>
    void SetCustomLabel(CustomLabelT&& value) { m_customLabelHasBeenSet = true; m_customLabel = std::forward<CustomLabelT>(value); }
    template<typename CustomLabelT = Aws::String>
    TotalOptions& WithCustomLabel(CustomLabelT&& value) { SetCustomLabel(std::forward<CustomLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cell styling options for the total cells.</p>
     */
    inline const TableCellStyle& GetTotalCellStyle() const { return m_totalCellStyle; }
    inline bool TotalCellStyleHasBeenSet() const { return m_totalCellStyleHasBeenSet; }
    template<typename TotalCellStyleT = TableCellStyle>
    void SetTotalCellStyle(TotalCellStyleT&& value) { m_totalCellStyleHasBeenSet = true; m_totalCellStyle = std::forward<TotalCellStyleT>(value); }
    template<typename TotalCellStyleT = TableCellStyle>
    TotalOptions& WithTotalCellStyle(TotalCellStyleT&& value) { SetTotalCellStyle(std::forward<TotalCellStyleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total aggregation settings for each value field.</p>
     */
    inline const Aws::Vector<TotalAggregationOption>& GetTotalAggregationOptions() const { return m_totalAggregationOptions; }
    inline bool TotalAggregationOptionsHasBeenSet() const { return m_totalAggregationOptionsHasBeenSet; }
    template<typename TotalAggregationOptionsT = Aws::Vector<TotalAggregationOption>>
    void SetTotalAggregationOptions(TotalAggregationOptionsT&& value) { m_totalAggregationOptionsHasBeenSet = true; m_totalAggregationOptions = std::forward<TotalAggregationOptionsT>(value); }
    template<typename TotalAggregationOptionsT = Aws::Vector<TotalAggregationOption>>
    TotalOptions& WithTotalAggregationOptions(TotalAggregationOptionsT&& value) { SetTotalAggregationOptions(std::forward<TotalAggregationOptionsT>(value)); return *this;}
    template<typename TotalAggregationOptionsT = TotalAggregationOption>
    TotalOptions& AddTotalAggregationOptions(TotalAggregationOptionsT&& value) { m_totalAggregationOptionsHasBeenSet = true; m_totalAggregationOptions.emplace_back(std::forward<TotalAggregationOptionsT>(value)); return *this; }
    ///@}
  private:

    Visibility m_totalsVisibility{Visibility::NOT_SET};
    bool m_totalsVisibilityHasBeenSet = false;

    TableTotalsPlacement m_placement{TableTotalsPlacement::NOT_SET};
    bool m_placementHasBeenSet = false;

    TableTotalsScrollStatus m_scrollStatus{TableTotalsScrollStatus::NOT_SET};
    bool m_scrollStatusHasBeenSet = false;

    Aws::String m_customLabel;
    bool m_customLabelHasBeenSet = false;

    TableCellStyle m_totalCellStyle;
    bool m_totalCellStyleHasBeenSet = false;

    Aws::Vector<TotalAggregationOption> m_totalAggregationOptions;
    bool m_totalAggregationOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
