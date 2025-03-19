/**
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
    AWS_QUICKSIGHT_API DrillDownFilter() = default;
    AWS_QUICKSIGHT_API DrillDownFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DrillDownFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The numeric equality type drill down filter. This filter is used for number
     * type columns.</p>
     */
    inline const NumericEqualityDrillDownFilter& GetNumericEqualityFilter() const { return m_numericEqualityFilter; }
    inline bool NumericEqualityFilterHasBeenSet() const { return m_numericEqualityFilterHasBeenSet; }
    template<typename NumericEqualityFilterT = NumericEqualityDrillDownFilter>
    void SetNumericEqualityFilter(NumericEqualityFilterT&& value) { m_numericEqualityFilterHasBeenSet = true; m_numericEqualityFilter = std::forward<NumericEqualityFilterT>(value); }
    template<typename NumericEqualityFilterT = NumericEqualityDrillDownFilter>
    DrillDownFilter& WithNumericEqualityFilter(NumericEqualityFilterT&& value) { SetNumericEqualityFilter(std::forward<NumericEqualityFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category type drill down filter. This filter is used for string type
     * columns.</p>
     */
    inline const CategoryDrillDownFilter& GetCategoryFilter() const { return m_categoryFilter; }
    inline bool CategoryFilterHasBeenSet() const { return m_categoryFilterHasBeenSet; }
    template<typename CategoryFilterT = CategoryDrillDownFilter>
    void SetCategoryFilter(CategoryFilterT&& value) { m_categoryFilterHasBeenSet = true; m_categoryFilter = std::forward<CategoryFilterT>(value); }
    template<typename CategoryFilterT = CategoryDrillDownFilter>
    DrillDownFilter& WithCategoryFilter(CategoryFilterT&& value) { SetCategoryFilter(std::forward<CategoryFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time range drill down filter. This filter is used for date time
     * columns.</p>
     */
    inline const TimeRangeDrillDownFilter& GetTimeRangeFilter() const { return m_timeRangeFilter; }
    inline bool TimeRangeFilterHasBeenSet() const { return m_timeRangeFilterHasBeenSet; }
    template<typename TimeRangeFilterT = TimeRangeDrillDownFilter>
    void SetTimeRangeFilter(TimeRangeFilterT&& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = std::forward<TimeRangeFilterT>(value); }
    template<typename TimeRangeFilterT = TimeRangeDrillDownFilter>
    DrillDownFilter& WithTimeRangeFilter(TimeRangeFilterT&& value) { SetTimeRangeFilter(std::forward<TimeRangeFilterT>(value)); return *this;}
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
