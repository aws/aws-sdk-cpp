﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NumericEqualityDrillDownFilter.h>
#include <aws/quicksight/model/CategoryDrillDownFilter.h>
#include <aws/quicksight/model/TimeRangeDrillDownFilter.h>
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
   * <p>The drill down filter for the column hierarchies.</p> <p>This is a union type
   * structure. For this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DrillDownFilter">AWS
   * API Reference</a></p>
   */
  class DrillDownFilter
  {
  public:
    AWS_QUICKSIGHT_API DrillDownFilter();
    AWS_QUICKSIGHT_API DrillDownFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DrillDownFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The numeric equality type drill down filter. This filter is used for number
     * type columns.</p>
     */
    inline const NumericEqualityDrillDownFilter& GetNumericEqualityFilter() const{ return m_numericEqualityFilter; }
    inline bool NumericEqualityFilterHasBeenSet() const { return m_numericEqualityFilterHasBeenSet; }
    inline void SetNumericEqualityFilter(const NumericEqualityDrillDownFilter& value) { m_numericEqualityFilterHasBeenSet = true; m_numericEqualityFilter = value; }
    inline void SetNumericEqualityFilter(NumericEqualityDrillDownFilter&& value) { m_numericEqualityFilterHasBeenSet = true; m_numericEqualityFilter = std::move(value); }
    inline DrillDownFilter& WithNumericEqualityFilter(const NumericEqualityDrillDownFilter& value) { SetNumericEqualityFilter(value); return *this;}
    inline DrillDownFilter& WithNumericEqualityFilter(NumericEqualityDrillDownFilter&& value) { SetNumericEqualityFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category type drill down filter. This filter is used for string type
     * columns.</p>
     */
    inline const CategoryDrillDownFilter& GetCategoryFilter() const{ return m_categoryFilter; }
    inline bool CategoryFilterHasBeenSet() const { return m_categoryFilterHasBeenSet; }
    inline void SetCategoryFilter(const CategoryDrillDownFilter& value) { m_categoryFilterHasBeenSet = true; m_categoryFilter = value; }
    inline void SetCategoryFilter(CategoryDrillDownFilter&& value) { m_categoryFilterHasBeenSet = true; m_categoryFilter = std::move(value); }
    inline DrillDownFilter& WithCategoryFilter(const CategoryDrillDownFilter& value) { SetCategoryFilter(value); return *this;}
    inline DrillDownFilter& WithCategoryFilter(CategoryDrillDownFilter&& value) { SetCategoryFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time range drill down filter. This filter is used for date time
     * columns.</p>
     */
    inline const TimeRangeDrillDownFilter& GetTimeRangeFilter() const{ return m_timeRangeFilter; }
    inline bool TimeRangeFilterHasBeenSet() const { return m_timeRangeFilterHasBeenSet; }
    inline void SetTimeRangeFilter(const TimeRangeDrillDownFilter& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = value; }
    inline void SetTimeRangeFilter(TimeRangeDrillDownFilter&& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = std::move(value); }
    inline DrillDownFilter& WithTimeRangeFilter(const TimeRangeDrillDownFilter& value) { SetTimeRangeFilter(value); return *this;}
    inline DrillDownFilter& WithTimeRangeFilter(TimeRangeDrillDownFilter&& value) { SetTimeRangeFilter(std::move(value)); return *this;}
    ///@}
  private:

    NumericEqualityDrillDownFilter m_numericEqualityFilter;
    bool m_numericEqualityFilterHasBeenSet = false;

    CategoryDrillDownFilter m_categoryFilter;
    bool m_categoryFilterHasBeenSet = false;

    TimeRangeDrillDownFilter m_timeRangeFilter;
    bool m_timeRangeFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
