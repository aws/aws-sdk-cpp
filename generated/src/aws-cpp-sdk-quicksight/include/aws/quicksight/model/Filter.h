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
    AWS_QUICKSIGHT_API Filter();
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
    inline const CategoryFilter& GetCategoryFilter() const{ return m_categoryFilter; }
    inline bool CategoryFilterHasBeenSet() const { return m_categoryFilterHasBeenSet; }
    inline void SetCategoryFilter(const CategoryFilter& value) { m_categoryFilterHasBeenSet = true; m_categoryFilter = value; }
    inline void SetCategoryFilter(CategoryFilter&& value) { m_categoryFilterHasBeenSet = true; m_categoryFilter = std::move(value); }
    inline Filter& WithCategoryFilter(const CategoryFilter& value) { SetCategoryFilter(value); return *this;}
    inline Filter& WithCategoryFilter(CategoryFilter&& value) { SetCategoryFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>NumericRangeFilter</code> filters numeric values that are either
     * inside or outside a given numeric range.</p>
     */
    inline const NumericRangeFilter& GetNumericRangeFilter() const{ return m_numericRangeFilter; }
    inline bool NumericRangeFilterHasBeenSet() const { return m_numericRangeFilterHasBeenSet; }
    inline void SetNumericRangeFilter(const NumericRangeFilter& value) { m_numericRangeFilterHasBeenSet = true; m_numericRangeFilter = value; }
    inline void SetNumericRangeFilter(NumericRangeFilter&& value) { m_numericRangeFilterHasBeenSet = true; m_numericRangeFilter = std::move(value); }
    inline Filter& WithNumericRangeFilter(const NumericRangeFilter& value) { SetNumericRangeFilter(value); return *this;}
    inline Filter& WithNumericRangeFilter(NumericRangeFilter&& value) { SetNumericRangeFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>NumericEqualityFilter</code> filters numeric values that equal or do
     * not equal a given numeric value.</p>
     */
    inline const NumericEqualityFilter& GetNumericEqualityFilter() const{ return m_numericEqualityFilter; }
    inline bool NumericEqualityFilterHasBeenSet() const { return m_numericEqualityFilterHasBeenSet; }
    inline void SetNumericEqualityFilter(const NumericEqualityFilter& value) { m_numericEqualityFilterHasBeenSet = true; m_numericEqualityFilter = value; }
    inline void SetNumericEqualityFilter(NumericEqualityFilter&& value) { m_numericEqualityFilterHasBeenSet = true; m_numericEqualityFilter = std::move(value); }
    inline Filter& WithNumericEqualityFilter(const NumericEqualityFilter& value) { SetNumericEqualityFilter(value); return *this;}
    inline Filter& WithNumericEqualityFilter(NumericEqualityFilter&& value) { SetNumericEqualityFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>TimeEqualityFilter</code> filters date-time values that equal or do
     * not equal a given date/time value.</p>
     */
    inline const TimeEqualityFilter& GetTimeEqualityFilter() const{ return m_timeEqualityFilter; }
    inline bool TimeEqualityFilterHasBeenSet() const { return m_timeEqualityFilterHasBeenSet; }
    inline void SetTimeEqualityFilter(const TimeEqualityFilter& value) { m_timeEqualityFilterHasBeenSet = true; m_timeEqualityFilter = value; }
    inline void SetTimeEqualityFilter(TimeEqualityFilter&& value) { m_timeEqualityFilterHasBeenSet = true; m_timeEqualityFilter = std::move(value); }
    inline Filter& WithTimeEqualityFilter(const TimeEqualityFilter& value) { SetTimeEqualityFilter(value); return *this;}
    inline Filter& WithTimeEqualityFilter(TimeEqualityFilter&& value) { SetTimeEqualityFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>TimeRangeFilter</code> filters date-time values that are either
     * inside or outside a given date/time range.</p>
     */
    inline const TimeRangeFilter& GetTimeRangeFilter() const{ return m_timeRangeFilter; }
    inline bool TimeRangeFilterHasBeenSet() const { return m_timeRangeFilterHasBeenSet; }
    inline void SetTimeRangeFilter(const TimeRangeFilter& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = value; }
    inline void SetTimeRangeFilter(TimeRangeFilter&& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = std::move(value); }
    inline Filter& WithTimeRangeFilter(const TimeRangeFilter& value) { SetTimeRangeFilter(value); return *this;}
    inline Filter& WithTimeRangeFilter(TimeRangeFilter&& value) { SetTimeRangeFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>RelativeDatesFilter</code> filters date values that are relative to a
     * given date.</p>
     */
    inline const RelativeDatesFilter& GetRelativeDatesFilter() const{ return m_relativeDatesFilter; }
    inline bool RelativeDatesFilterHasBeenSet() const { return m_relativeDatesFilterHasBeenSet; }
    inline void SetRelativeDatesFilter(const RelativeDatesFilter& value) { m_relativeDatesFilterHasBeenSet = true; m_relativeDatesFilter = value; }
    inline void SetRelativeDatesFilter(RelativeDatesFilter&& value) { m_relativeDatesFilterHasBeenSet = true; m_relativeDatesFilter = std::move(value); }
    inline Filter& WithRelativeDatesFilter(const RelativeDatesFilter& value) { SetRelativeDatesFilter(value); return *this;}
    inline Filter& WithRelativeDatesFilter(RelativeDatesFilter&& value) { SetRelativeDatesFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>TopBottomFilter</code> filters data to the top or bottom values for a
     * given column.</p>
     */
    inline const TopBottomFilter& GetTopBottomFilter() const{ return m_topBottomFilter; }
    inline bool TopBottomFilterHasBeenSet() const { return m_topBottomFilterHasBeenSet; }
    inline void SetTopBottomFilter(const TopBottomFilter& value) { m_topBottomFilterHasBeenSet = true; m_topBottomFilter = value; }
    inline void SetTopBottomFilter(TopBottomFilter&& value) { m_topBottomFilterHasBeenSet = true; m_topBottomFilter = std::move(value); }
    inline Filter& WithTopBottomFilter(const TopBottomFilter& value) { SetTopBottomFilter(value); return *this;}
    inline Filter& WithTopBottomFilter(TopBottomFilter&& value) { SetTopBottomFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>NestedFilter</code> filters data with a subset of data that is
     * defined by the nested inner filter.</p>
     */
    inline const NestedFilter& GetNestedFilter() const{ return m_nestedFilter; }
    inline bool NestedFilterHasBeenSet() const { return m_nestedFilterHasBeenSet; }
    inline void SetNestedFilter(const NestedFilter& value) { m_nestedFilterHasBeenSet = true; m_nestedFilter = value; }
    inline void SetNestedFilter(NestedFilter&& value) { m_nestedFilterHasBeenSet = true; m_nestedFilter = std::move(value); }
    inline Filter& WithNestedFilter(const NestedFilter& value) { SetNestedFilter(value); return *this;}
    inline Filter& WithNestedFilter(NestedFilter&& value) { SetNestedFilter(std::move(value)); return *this;}
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
