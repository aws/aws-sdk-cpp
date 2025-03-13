/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CategoryFilter.h>
#include <aws/quicksight/model/NumericRangeFilter.h>
#include <aws/quicksight/model/NumericEqualityFilter.h>
#include <aws/quicksight/model/TimeEqualityFilter.h>
#include <aws/quicksight/model/TimeRangeFilter.h>
#include <aws/quicksight/model/RelativeDatesFilter.h>
#include <aws/quicksight/model/TopBottomFilter.h>
#include <aws/quicksight/model/NestedFilter.h>
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
   * <p>With a <code>Filter</code>, you can remove portions of data from a particular
   * visual or view.</p> <p>This is a union type structure. For this structure to be
   * valid, only one of the attributes can be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_QUICKSIGHT_API Filter() = default;
    AWS_QUICKSIGHT_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>CategoryFilter</code> filters text values.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/add-a-text-filter-data-prep.html">Adding
     * text filters</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const CategoryFilter& GetCategoryFilter() const { return m_categoryFilter; }
    inline bool CategoryFilterHasBeenSet() const { return m_categoryFilterHasBeenSet; }
    template<typename CategoryFilterT = CategoryFilter>
    void SetCategoryFilter(CategoryFilterT&& value) { m_categoryFilterHasBeenSet = true; m_categoryFilter = std::forward<CategoryFilterT>(value); }
    template<typename CategoryFilterT = CategoryFilter>
    Filter& WithCategoryFilter(CategoryFilterT&& value) { SetCategoryFilter(std::forward<CategoryFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>NumericRangeFilter</code> filters numeric values that are either
     * inside or outside a given numeric range.</p>
     */
    inline const NumericRangeFilter& GetNumericRangeFilter() const { return m_numericRangeFilter; }
    inline bool NumericRangeFilterHasBeenSet() const { return m_numericRangeFilterHasBeenSet; }
    template<typename NumericRangeFilterT = NumericRangeFilter>
    void SetNumericRangeFilter(NumericRangeFilterT&& value) { m_numericRangeFilterHasBeenSet = true; m_numericRangeFilter = std::forward<NumericRangeFilterT>(value); }
    template<typename NumericRangeFilterT = NumericRangeFilter>
    Filter& WithNumericRangeFilter(NumericRangeFilterT&& value) { SetNumericRangeFilter(std::forward<NumericRangeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>NumericEqualityFilter</code> filters numeric values that equal or do
     * not equal a given numeric value.</p>
     */
    inline const NumericEqualityFilter& GetNumericEqualityFilter() const { return m_numericEqualityFilter; }
    inline bool NumericEqualityFilterHasBeenSet() const { return m_numericEqualityFilterHasBeenSet; }
    template<typename NumericEqualityFilterT = NumericEqualityFilter>
    void SetNumericEqualityFilter(NumericEqualityFilterT&& value) { m_numericEqualityFilterHasBeenSet = true; m_numericEqualityFilter = std::forward<NumericEqualityFilterT>(value); }
    template<typename NumericEqualityFilterT = NumericEqualityFilter>
    Filter& WithNumericEqualityFilter(NumericEqualityFilterT&& value) { SetNumericEqualityFilter(std::forward<NumericEqualityFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>TimeEqualityFilter</code> filters date-time values that equal or do
     * not equal a given date/time value.</p>
     */
    inline const TimeEqualityFilter& GetTimeEqualityFilter() const { return m_timeEqualityFilter; }
    inline bool TimeEqualityFilterHasBeenSet() const { return m_timeEqualityFilterHasBeenSet; }
    template<typename TimeEqualityFilterT = TimeEqualityFilter>
    void SetTimeEqualityFilter(TimeEqualityFilterT&& value) { m_timeEqualityFilterHasBeenSet = true; m_timeEqualityFilter = std::forward<TimeEqualityFilterT>(value); }
    template<typename TimeEqualityFilterT = TimeEqualityFilter>
    Filter& WithTimeEqualityFilter(TimeEqualityFilterT&& value) { SetTimeEqualityFilter(std::forward<TimeEqualityFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>TimeRangeFilter</code> filters date-time values that are either
     * inside or outside a given date/time range.</p>
     */
    inline const TimeRangeFilter& GetTimeRangeFilter() const { return m_timeRangeFilter; }
    inline bool TimeRangeFilterHasBeenSet() const { return m_timeRangeFilterHasBeenSet; }
    template<typename TimeRangeFilterT = TimeRangeFilter>
    void SetTimeRangeFilter(TimeRangeFilterT&& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = std::forward<TimeRangeFilterT>(value); }
    template<typename TimeRangeFilterT = TimeRangeFilter>
    Filter& WithTimeRangeFilter(TimeRangeFilterT&& value) { SetTimeRangeFilter(std::forward<TimeRangeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>RelativeDatesFilter</code> filters date values that are relative to a
     * given date.</p>
     */
    inline const RelativeDatesFilter& GetRelativeDatesFilter() const { return m_relativeDatesFilter; }
    inline bool RelativeDatesFilterHasBeenSet() const { return m_relativeDatesFilterHasBeenSet; }
    template<typename RelativeDatesFilterT = RelativeDatesFilter>
    void SetRelativeDatesFilter(RelativeDatesFilterT&& value) { m_relativeDatesFilterHasBeenSet = true; m_relativeDatesFilter = std::forward<RelativeDatesFilterT>(value); }
    template<typename RelativeDatesFilterT = RelativeDatesFilter>
    Filter& WithRelativeDatesFilter(RelativeDatesFilterT&& value) { SetRelativeDatesFilter(std::forward<RelativeDatesFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>TopBottomFilter</code> filters data to the top or bottom values for a
     * given column.</p>
     */
    inline const TopBottomFilter& GetTopBottomFilter() const { return m_topBottomFilter; }
    inline bool TopBottomFilterHasBeenSet() const { return m_topBottomFilterHasBeenSet; }
    template<typename TopBottomFilterT = TopBottomFilter>
    void SetTopBottomFilter(TopBottomFilterT&& value) { m_topBottomFilterHasBeenSet = true; m_topBottomFilter = std::forward<TopBottomFilterT>(value); }
    template<typename TopBottomFilterT = TopBottomFilter>
    Filter& WithTopBottomFilter(TopBottomFilterT&& value) { SetTopBottomFilter(std::forward<TopBottomFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>NestedFilter</code> filters data with a subset of data that is
     * defined by the nested inner filter.</p>
     */
    inline const NestedFilter& GetNestedFilter() const { return m_nestedFilter; }
    inline bool NestedFilterHasBeenSet() const { return m_nestedFilterHasBeenSet; }
    template<typename NestedFilterT = NestedFilter>
    void SetNestedFilter(NestedFilterT&& value) { m_nestedFilterHasBeenSet = true; m_nestedFilter = std::forward<NestedFilterT>(value); }
    template<typename NestedFilterT = NestedFilter>
    Filter& WithNestedFilter(NestedFilterT&& value) { SetNestedFilter(std::forward<NestedFilterT>(value)); return *this;}
    ///@}
  private:

    CategoryFilter m_categoryFilter;
    bool m_categoryFilterHasBeenSet = false;

    NumericRangeFilter m_numericRangeFilter;
    bool m_numericRangeFilterHasBeenSet = false;

    NumericEqualityFilter m_numericEqualityFilter;
    bool m_numericEqualityFilterHasBeenSet = false;

    TimeEqualityFilter m_timeEqualityFilter;
    bool m_timeEqualityFilterHasBeenSet = false;

    TimeRangeFilter m_timeRangeFilter;
    bool m_timeRangeFilterHasBeenSet = false;

    RelativeDatesFilter m_relativeDatesFilter;
    bool m_relativeDatesFilterHasBeenSet = false;

    TopBottomFilter m_topBottomFilter;
    bool m_topBottomFilterHasBeenSet = false;

    NestedFilter m_nestedFilter;
    bool m_nestedFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
