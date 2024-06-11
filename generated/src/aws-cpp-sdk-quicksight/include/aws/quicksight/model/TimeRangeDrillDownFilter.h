/**
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
    AWS_QUICKSIGHT_API TimeRangeDrillDownFilter();
    AWS_QUICKSIGHT_API TimeRangeDrillDownFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TimeRangeDrillDownFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }
    inline TimeRangeDrillDownFilter& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}
    inline TimeRangeDrillDownFilter& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value for the filter value range.</p>
     */
    inline const Aws::Utils::DateTime& GetRangeMinimum() const{ return m_rangeMinimum; }
    inline bool RangeMinimumHasBeenSet() const { return m_rangeMinimumHasBeenSet; }
    inline void SetRangeMinimum(const Aws::Utils::DateTime& value) { m_rangeMinimumHasBeenSet = true; m_rangeMinimum = value; }
    inline void SetRangeMinimum(Aws::Utils::DateTime&& value) { m_rangeMinimumHasBeenSet = true; m_rangeMinimum = std::move(value); }
    inline TimeRangeDrillDownFilter& WithRangeMinimum(const Aws::Utils::DateTime& value) { SetRangeMinimum(value); return *this;}
    inline TimeRangeDrillDownFilter& WithRangeMinimum(Aws::Utils::DateTime&& value) { SetRangeMinimum(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value for the filter value range.</p>
     */
    inline const Aws::Utils::DateTime& GetRangeMaximum() const{ return m_rangeMaximum; }
    inline bool RangeMaximumHasBeenSet() const { return m_rangeMaximumHasBeenSet; }
    inline void SetRangeMaximum(const Aws::Utils::DateTime& value) { m_rangeMaximumHasBeenSet = true; m_rangeMaximum = value; }
    inline void SetRangeMaximum(Aws::Utils::DateTime&& value) { m_rangeMaximumHasBeenSet = true; m_rangeMaximum = std::move(value); }
    inline TimeRangeDrillDownFilter& WithRangeMaximum(const Aws::Utils::DateTime& value) { SetRangeMaximum(value); return *this;}
    inline TimeRangeDrillDownFilter& WithRangeMaximum(Aws::Utils::DateTime&& value) { SetRangeMaximum(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline const TimeGranularity& GetTimeGranularity() const{ return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(const TimeGranularity& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline void SetTimeGranularity(TimeGranularity&& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = std::move(value); }
    inline TimeRangeDrillDownFilter& WithTimeGranularity(const TimeGranularity& value) { SetTimeGranularity(value); return *this;}
    inline TimeRangeDrillDownFilter& WithTimeGranularity(TimeGranularity&& value) { SetTimeGranularity(std::move(value)); return *this;}
    ///@}
  private:

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    Aws::Utils::DateTime m_rangeMinimum;
    bool m_rangeMinimumHasBeenSet = false;

    Aws::Utils::DateTime m_rangeMaximum;
    bool m_rangeMaximumHasBeenSet = false;

    TimeGranularity m_timeGranularity;
    bool m_timeGranularityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
