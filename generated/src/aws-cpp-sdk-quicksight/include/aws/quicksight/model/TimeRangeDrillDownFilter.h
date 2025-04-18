﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/TimeGranularity.h>
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
   * <p>The time range drill down filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TimeRangeDrillDownFilter">AWS
   * API Reference</a></p>
   */
  class TimeRangeDrillDownFilter
  {
  public:
    AWS_QUICKSIGHT_API TimeRangeDrillDownFilter() = default;
    AWS_QUICKSIGHT_API TimeRangeDrillDownFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TimeRangeDrillDownFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline const ColumnIdentifier& GetColumn() const { return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    template<typename ColumnT = ColumnIdentifier>
    void SetColumn(ColumnT&& value) { m_columnHasBeenSet = true; m_column = std::forward<ColumnT>(value); }
    template<typename ColumnT = ColumnIdentifier>
    TimeRangeDrillDownFilter& WithColumn(ColumnT&& value) { SetColumn(std::forward<ColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value for the filter value range.</p>
     */
    inline const Aws::Utils::DateTime& GetRangeMinimum() const { return m_rangeMinimum; }
    inline bool RangeMinimumHasBeenSet() const { return m_rangeMinimumHasBeenSet; }
    template<typename RangeMinimumT = Aws::Utils::DateTime>
    void SetRangeMinimum(RangeMinimumT&& value) { m_rangeMinimumHasBeenSet = true; m_rangeMinimum = std::forward<RangeMinimumT>(value); }
    template<typename RangeMinimumT = Aws::Utils::DateTime>
    TimeRangeDrillDownFilter& WithRangeMinimum(RangeMinimumT&& value) { SetRangeMinimum(std::forward<RangeMinimumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value for the filter value range.</p>
     */
    inline const Aws::Utils::DateTime& GetRangeMaximum() const { return m_rangeMaximum; }
    inline bool RangeMaximumHasBeenSet() const { return m_rangeMaximumHasBeenSet; }
    template<typename RangeMaximumT = Aws::Utils::DateTime>
    void SetRangeMaximum(RangeMaximumT&& value) { m_rangeMaximumHasBeenSet = true; m_rangeMaximum = std::forward<RangeMaximumT>(value); }
    template<typename RangeMaximumT = Aws::Utils::DateTime>
    TimeRangeDrillDownFilter& WithRangeMaximum(RangeMaximumT&& value) { SetRangeMaximum(std::forward<RangeMaximumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline TimeGranularity GetTimeGranularity() const { return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(TimeGranularity value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline TimeRangeDrillDownFilter& WithTimeGranularity(TimeGranularity value) { SetTimeGranularity(value); return *this;}
    ///@}
  private:

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    Aws::Utils::DateTime m_rangeMinimum{};
    bool m_rangeMinimumHasBeenSet = false;

    Aws::Utils::DateTime m_rangeMaximum{};
    bool m_rangeMaximumHasBeenSet = false;

    TimeGranularity m_timeGranularity{TimeGranularity::NOT_SET};
    bool m_timeGranularityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
