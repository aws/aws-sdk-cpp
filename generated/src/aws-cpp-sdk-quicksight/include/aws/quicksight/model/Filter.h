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


    /**
     * <p>A <code>CategoryFilter</code> filters text values.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/add-a-text-filter-data-prep.html">Adding
     * text filters</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const CategoryFilter& GetCategoryFilter() const{ return m_categoryFilter; }

    /**
     * <p>A <code>CategoryFilter</code> filters text values.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/add-a-text-filter-data-prep.html">Adding
     * text filters</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool CategoryFilterHasBeenSet() const { return m_categoryFilterHasBeenSet; }

    /**
     * <p>A <code>CategoryFilter</code> filters text values.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/add-a-text-filter-data-prep.html">Adding
     * text filters</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetCategoryFilter(const CategoryFilter& value) { m_categoryFilterHasBeenSet = true; m_categoryFilter = value; }

    /**
     * <p>A <code>CategoryFilter</code> filters text values.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/add-a-text-filter-data-prep.html">Adding
     * text filters</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetCategoryFilter(CategoryFilter&& value) { m_categoryFilterHasBeenSet = true; m_categoryFilter = std::move(value); }

    /**
     * <p>A <code>CategoryFilter</code> filters text values.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/add-a-text-filter-data-prep.html">Adding
     * text filters</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Filter& WithCategoryFilter(const CategoryFilter& value) { SetCategoryFilter(value); return *this;}

    /**
     * <p>A <code>CategoryFilter</code> filters text values.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/add-a-text-filter-data-prep.html">Adding
     * text filters</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Filter& WithCategoryFilter(CategoryFilter&& value) { SetCategoryFilter(std::move(value)); return *this;}


    /**
     * <p>A <code>NumericRangeFilter</code> filters numeric values that are either
     * inside or outside a given numeric range.</p>
     */
    inline const NumericRangeFilter& GetNumericRangeFilter() const{ return m_numericRangeFilter; }

    /**
     * <p>A <code>NumericRangeFilter</code> filters numeric values that are either
     * inside or outside a given numeric range.</p>
     */
    inline bool NumericRangeFilterHasBeenSet() const { return m_numericRangeFilterHasBeenSet; }

    /**
     * <p>A <code>NumericRangeFilter</code> filters numeric values that are either
     * inside or outside a given numeric range.</p>
     */
    inline void SetNumericRangeFilter(const NumericRangeFilter& value) { m_numericRangeFilterHasBeenSet = true; m_numericRangeFilter = value; }

    /**
     * <p>A <code>NumericRangeFilter</code> filters numeric values that are either
     * inside or outside a given numeric range.</p>
     */
    inline void SetNumericRangeFilter(NumericRangeFilter&& value) { m_numericRangeFilterHasBeenSet = true; m_numericRangeFilter = std::move(value); }

    /**
     * <p>A <code>NumericRangeFilter</code> filters numeric values that are either
     * inside or outside a given numeric range.</p>
     */
    inline Filter& WithNumericRangeFilter(const NumericRangeFilter& value) { SetNumericRangeFilter(value); return *this;}

    /**
     * <p>A <code>NumericRangeFilter</code> filters numeric values that are either
     * inside or outside a given numeric range.</p>
     */
    inline Filter& WithNumericRangeFilter(NumericRangeFilter&& value) { SetNumericRangeFilter(std::move(value)); return *this;}


    /**
     * <p>A <code>NumericEqualityFilter</code> filters numeric values that equal or do
     * not equal a given numeric value.</p>
     */
    inline const NumericEqualityFilter& GetNumericEqualityFilter() const{ return m_numericEqualityFilter; }

    /**
     * <p>A <code>NumericEqualityFilter</code> filters numeric values that equal or do
     * not equal a given numeric value.</p>
     */
    inline bool NumericEqualityFilterHasBeenSet() const { return m_numericEqualityFilterHasBeenSet; }

    /**
     * <p>A <code>NumericEqualityFilter</code> filters numeric values that equal or do
     * not equal a given numeric value.</p>
     */
    inline void SetNumericEqualityFilter(const NumericEqualityFilter& value) { m_numericEqualityFilterHasBeenSet = true; m_numericEqualityFilter = value; }

    /**
     * <p>A <code>NumericEqualityFilter</code> filters numeric values that equal or do
     * not equal a given numeric value.</p>
     */
    inline void SetNumericEqualityFilter(NumericEqualityFilter&& value) { m_numericEqualityFilterHasBeenSet = true; m_numericEqualityFilter = std::move(value); }

    /**
     * <p>A <code>NumericEqualityFilter</code> filters numeric values that equal or do
     * not equal a given numeric value.</p>
     */
    inline Filter& WithNumericEqualityFilter(const NumericEqualityFilter& value) { SetNumericEqualityFilter(value); return *this;}

    /**
     * <p>A <code>NumericEqualityFilter</code> filters numeric values that equal or do
     * not equal a given numeric value.</p>
     */
    inline Filter& WithNumericEqualityFilter(NumericEqualityFilter&& value) { SetNumericEqualityFilter(std::move(value)); return *this;}


    /**
     * <p>A <code>TimeEqualityFilter</code> filters date-time values that equal or do
     * not equal a given date/time value.</p>
     */
    inline const TimeEqualityFilter& GetTimeEqualityFilter() const{ return m_timeEqualityFilter; }

    /**
     * <p>A <code>TimeEqualityFilter</code> filters date-time values that equal or do
     * not equal a given date/time value.</p>
     */
    inline bool TimeEqualityFilterHasBeenSet() const { return m_timeEqualityFilterHasBeenSet; }

    /**
     * <p>A <code>TimeEqualityFilter</code> filters date-time values that equal or do
     * not equal a given date/time value.</p>
     */
    inline void SetTimeEqualityFilter(const TimeEqualityFilter& value) { m_timeEqualityFilterHasBeenSet = true; m_timeEqualityFilter = value; }

    /**
     * <p>A <code>TimeEqualityFilter</code> filters date-time values that equal or do
     * not equal a given date/time value.</p>
     */
    inline void SetTimeEqualityFilter(TimeEqualityFilter&& value) { m_timeEqualityFilterHasBeenSet = true; m_timeEqualityFilter = std::move(value); }

    /**
     * <p>A <code>TimeEqualityFilter</code> filters date-time values that equal or do
     * not equal a given date/time value.</p>
     */
    inline Filter& WithTimeEqualityFilter(const TimeEqualityFilter& value) { SetTimeEqualityFilter(value); return *this;}

    /**
     * <p>A <code>TimeEqualityFilter</code> filters date-time values that equal or do
     * not equal a given date/time value.</p>
     */
    inline Filter& WithTimeEqualityFilter(TimeEqualityFilter&& value) { SetTimeEqualityFilter(std::move(value)); return *this;}


    /**
     * <p>A <code>TimeRangeFilter</code> filters date-time values that are either
     * inside or outside a given date/time range.</p>
     */
    inline const TimeRangeFilter& GetTimeRangeFilter() const{ return m_timeRangeFilter; }

    /**
     * <p>A <code>TimeRangeFilter</code> filters date-time values that are either
     * inside or outside a given date/time range.</p>
     */
    inline bool TimeRangeFilterHasBeenSet() const { return m_timeRangeFilterHasBeenSet; }

    /**
     * <p>A <code>TimeRangeFilter</code> filters date-time values that are either
     * inside or outside a given date/time range.</p>
     */
    inline void SetTimeRangeFilter(const TimeRangeFilter& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = value; }

    /**
     * <p>A <code>TimeRangeFilter</code> filters date-time values that are either
     * inside or outside a given date/time range.</p>
     */
    inline void SetTimeRangeFilter(TimeRangeFilter&& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = std::move(value); }

    /**
     * <p>A <code>TimeRangeFilter</code> filters date-time values that are either
     * inside or outside a given date/time range.</p>
     */
    inline Filter& WithTimeRangeFilter(const TimeRangeFilter& value) { SetTimeRangeFilter(value); return *this;}

    /**
     * <p>A <code>TimeRangeFilter</code> filters date-time values that are either
     * inside or outside a given date/time range.</p>
     */
    inline Filter& WithTimeRangeFilter(TimeRangeFilter&& value) { SetTimeRangeFilter(std::move(value)); return *this;}


    /**
     * <p>A <code>RelativeDatesFilter</code> filters date values that are relative to a
     * given date.</p>
     */
    inline const RelativeDatesFilter& GetRelativeDatesFilter() const{ return m_relativeDatesFilter; }

    /**
     * <p>A <code>RelativeDatesFilter</code> filters date values that are relative to a
     * given date.</p>
     */
    inline bool RelativeDatesFilterHasBeenSet() const { return m_relativeDatesFilterHasBeenSet; }

    /**
     * <p>A <code>RelativeDatesFilter</code> filters date values that are relative to a
     * given date.</p>
     */
    inline void SetRelativeDatesFilter(const RelativeDatesFilter& value) { m_relativeDatesFilterHasBeenSet = true; m_relativeDatesFilter = value; }

    /**
     * <p>A <code>RelativeDatesFilter</code> filters date values that are relative to a
     * given date.</p>
     */
    inline void SetRelativeDatesFilter(RelativeDatesFilter&& value) { m_relativeDatesFilterHasBeenSet = true; m_relativeDatesFilter = std::move(value); }

    /**
     * <p>A <code>RelativeDatesFilter</code> filters date values that are relative to a
     * given date.</p>
     */
    inline Filter& WithRelativeDatesFilter(const RelativeDatesFilter& value) { SetRelativeDatesFilter(value); return *this;}

    /**
     * <p>A <code>RelativeDatesFilter</code> filters date values that are relative to a
     * given date.</p>
     */
    inline Filter& WithRelativeDatesFilter(RelativeDatesFilter&& value) { SetRelativeDatesFilter(std::move(value)); return *this;}


    /**
     * <p>A <code>TopBottomFilter</code> filters data to the top or bottom values for a
     * given column.</p>
     */
    inline const TopBottomFilter& GetTopBottomFilter() const{ return m_topBottomFilter; }

    /**
     * <p>A <code>TopBottomFilter</code> filters data to the top or bottom values for a
     * given column.</p>
     */
    inline bool TopBottomFilterHasBeenSet() const { return m_topBottomFilterHasBeenSet; }

    /**
     * <p>A <code>TopBottomFilter</code> filters data to the top or bottom values for a
     * given column.</p>
     */
    inline void SetTopBottomFilter(const TopBottomFilter& value) { m_topBottomFilterHasBeenSet = true; m_topBottomFilter = value; }

    /**
     * <p>A <code>TopBottomFilter</code> filters data to the top or bottom values for a
     * given column.</p>
     */
    inline void SetTopBottomFilter(TopBottomFilter&& value) { m_topBottomFilterHasBeenSet = true; m_topBottomFilter = std::move(value); }

    /**
     * <p>A <code>TopBottomFilter</code> filters data to the top or bottom values for a
     * given column.</p>
     */
    inline Filter& WithTopBottomFilter(const TopBottomFilter& value) { SetTopBottomFilter(value); return *this;}

    /**
     * <p>A <code>TopBottomFilter</code> filters data to the top or bottom values for a
     * given column.</p>
     */
    inline Filter& WithTopBottomFilter(TopBottomFilter&& value) { SetTopBottomFilter(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
