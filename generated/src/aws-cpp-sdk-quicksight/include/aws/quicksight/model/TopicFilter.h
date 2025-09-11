/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/FilterClass.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/NamedFilterType.h>
#include <aws/quicksight/model/TopicCategoryFilter.h>
#include <aws/quicksight/model/TopicNumericEqualityFilter.h>
#include <aws/quicksight/model/TopicNumericRangeFilter.h>
#include <aws/quicksight/model/TopicDateRangeFilter.h>
#include <aws/quicksight/model/TopicRelativeDateFilter.h>
#include <aws/quicksight/model/TopicNullFilter.h>
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
   * <p>A structure that represents a filter used to select items for a
   * topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicFilter">AWS
   * API Reference</a></p>
   */
  class TopicFilter
  {
  public:
    AWS_QUICKSIGHT_API TopicFilter() = default;
    AWS_QUICKSIGHT_API TopicFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description of the filter used to select items for a topic.</p>
     */
    inline const Aws::String& GetFilterDescription() const { return m_filterDescription; }
    inline bool FilterDescriptionHasBeenSet() const { return m_filterDescriptionHasBeenSet; }
    template<typename FilterDescriptionT = Aws::String>
    void SetFilterDescription(FilterDescriptionT&& value) { m_filterDescriptionHasBeenSet = true; m_filterDescription = std::forward<FilterDescriptionT>(value); }
    template<typename FilterDescriptionT = Aws::String>
    TopicFilter& WithFilterDescription(FilterDescriptionT&& value) { SetFilterDescription(std::forward<FilterDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The class of the filter. Valid values for this structure are
     * <code>ENFORCED_VALUE_FILTER</code>, <code>CONDITIONAL_VALUE_FILTER</code>, and
     * <code>NAMED_VALUE_FILTER</code>.</p>
     */
    inline FilterClass GetFilterClass() const { return m_filterClass; }
    inline bool FilterClassHasBeenSet() const { return m_filterClassHasBeenSet; }
    inline void SetFilterClass(FilterClass value) { m_filterClassHasBeenSet = true; m_filterClass = value; }
    inline TopicFilter& WithFilterClass(FilterClass value) { SetFilterClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the filter.</p>
     */
    inline const Aws::String& GetFilterName() const { return m_filterName; }
    inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }
    template<typename FilterNameT = Aws::String>
    void SetFilterName(FilterNameT&& value) { m_filterNameHasBeenSet = true; m_filterName = std::forward<FilterNameT>(value); }
    template<typename FilterNameT = Aws::String>
    TopicFilter& WithFilterName(FilterNameT&& value) { SetFilterName(std::forward<FilterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The other names or aliases for the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterSynonyms() const { return m_filterSynonyms; }
    inline bool FilterSynonymsHasBeenSet() const { return m_filterSynonymsHasBeenSet; }
    template<typename FilterSynonymsT = Aws::Vector<Aws::String>>
    void SetFilterSynonyms(FilterSynonymsT&& value) { m_filterSynonymsHasBeenSet = true; m_filterSynonyms = std::forward<FilterSynonymsT>(value); }
    template<typename FilterSynonymsT = Aws::Vector<Aws::String>>
    TopicFilter& WithFilterSynonyms(FilterSynonymsT&& value) { SetFilterSynonyms(std::forward<FilterSynonymsT>(value)); return *this;}
    template<typename FilterSynonymsT = Aws::String>
    TopicFilter& AddFilterSynonyms(FilterSynonymsT&& value) { m_filterSynonymsHasBeenSet = true; m_filterSynonyms.emplace_back(std::forward<FilterSynonymsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the field that the filter operates on.</p>
     */
    inline const Aws::String& GetOperandFieldName() const { return m_operandFieldName; }
    inline bool OperandFieldNameHasBeenSet() const { return m_operandFieldNameHasBeenSet; }
    template<typename OperandFieldNameT = Aws::String>
    void SetOperandFieldName(OperandFieldNameT&& value) { m_operandFieldNameHasBeenSet = true; m_operandFieldName = std::forward<OperandFieldNameT>(value); }
    template<typename OperandFieldNameT = Aws::String>
    TopicFilter& WithOperandFieldName(OperandFieldNameT&& value) { SetOperandFieldName(std::forward<OperandFieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the filter. Valid values for this structure are
     * <code>CATEGORY_FILTER</code>, <code>NUMERIC_EQUALITY_FILTER</code>,
     * <code>NUMERIC_RANGE_FILTER</code>, <code>DATE_RANGE_FILTER</code>, and
     * <code>RELATIVE_DATE_FILTER</code>.</p>
     */
    inline NamedFilterType GetFilterType() const { return m_filterType; }
    inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }
    inline void SetFilterType(NamedFilterType value) { m_filterTypeHasBeenSet = true; m_filterType = value; }
    inline TopicFilter& WithFilterType(NamedFilterType value) { SetFilterType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category filter that is associated with this filter.</p>
     */
    inline const TopicCategoryFilter& GetCategoryFilter() const { return m_categoryFilter; }
    inline bool CategoryFilterHasBeenSet() const { return m_categoryFilterHasBeenSet; }
    template<typename CategoryFilterT = TopicCategoryFilter>
    void SetCategoryFilter(CategoryFilterT&& value) { m_categoryFilterHasBeenSet = true; m_categoryFilter = std::forward<CategoryFilterT>(value); }
    template<typename CategoryFilterT = TopicCategoryFilter>
    TopicFilter& WithCategoryFilter(CategoryFilterT&& value) { SetCategoryFilter(std::forward<CategoryFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numeric equality filter.</p>
     */
    inline const TopicNumericEqualityFilter& GetNumericEqualityFilter() const { return m_numericEqualityFilter; }
    inline bool NumericEqualityFilterHasBeenSet() const { return m_numericEqualityFilterHasBeenSet; }
    template<typename NumericEqualityFilterT = TopicNumericEqualityFilter>
    void SetNumericEqualityFilter(NumericEqualityFilterT&& value) { m_numericEqualityFilterHasBeenSet = true; m_numericEqualityFilter = std::forward<NumericEqualityFilterT>(value); }
    template<typename NumericEqualityFilterT = TopicNumericEqualityFilter>
    TopicFilter& WithNumericEqualityFilter(NumericEqualityFilterT&& value) { SetNumericEqualityFilter(std::forward<NumericEqualityFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numeric range filter.</p>
     */
    inline const TopicNumericRangeFilter& GetNumericRangeFilter() const { return m_numericRangeFilter; }
    inline bool NumericRangeFilterHasBeenSet() const { return m_numericRangeFilterHasBeenSet; }
    template<typename NumericRangeFilterT = TopicNumericRangeFilter>
    void SetNumericRangeFilter(NumericRangeFilterT&& value) { m_numericRangeFilterHasBeenSet = true; m_numericRangeFilter = std::forward<NumericRangeFilterT>(value); }
    template<typename NumericRangeFilterT = TopicNumericRangeFilter>
    TopicFilter& WithNumericRangeFilter(NumericRangeFilterT&& value) { SetNumericRangeFilter(std::forward<NumericRangeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date range filter.</p>
     */
    inline const TopicDateRangeFilter& GetDateRangeFilter() const { return m_dateRangeFilter; }
    inline bool DateRangeFilterHasBeenSet() const { return m_dateRangeFilterHasBeenSet; }
    template<typename DateRangeFilterT = TopicDateRangeFilter>
    void SetDateRangeFilter(DateRangeFilterT&& value) { m_dateRangeFilterHasBeenSet = true; m_dateRangeFilter = std::forward<DateRangeFilterT>(value); }
    template<typename DateRangeFilterT = TopicDateRangeFilter>
    TopicFilter& WithDateRangeFilter(DateRangeFilterT&& value) { SetDateRangeFilter(std::forward<DateRangeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative date filter.</p>
     */
    inline const TopicRelativeDateFilter& GetRelativeDateFilter() const { return m_relativeDateFilter; }
    inline bool RelativeDateFilterHasBeenSet() const { return m_relativeDateFilterHasBeenSet; }
    template<typename RelativeDateFilterT = TopicRelativeDateFilter>
    void SetRelativeDateFilter(RelativeDateFilterT&& value) { m_relativeDateFilterHasBeenSet = true; m_relativeDateFilter = std::forward<RelativeDateFilterT>(value); }
    template<typename RelativeDateFilterT = TopicRelativeDateFilter>
    TopicFilter& WithRelativeDateFilter(RelativeDateFilterT&& value) { SetRelativeDateFilter(std::forward<RelativeDateFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The null filter.</p>
     */
    inline const TopicNullFilter& GetNullFilter() const { return m_nullFilter; }
    inline bool NullFilterHasBeenSet() const { return m_nullFilterHasBeenSet; }
    template<typename NullFilterT = TopicNullFilter>
    void SetNullFilter(NullFilterT&& value) { m_nullFilterHasBeenSet = true; m_nullFilter = std::forward<NullFilterT>(value); }
    template<typename NullFilterT = TopicNullFilter>
    TopicFilter& WithNullFilter(NullFilterT&& value) { SetNullFilter(std::forward<NullFilterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterDescription;
    bool m_filterDescriptionHasBeenSet = false;

    FilterClass m_filterClass{FilterClass::NOT_SET};
    bool m_filterClassHasBeenSet = false;

    Aws::String m_filterName;
    bool m_filterNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterSynonyms;
    bool m_filterSynonymsHasBeenSet = false;

    Aws::String m_operandFieldName;
    bool m_operandFieldNameHasBeenSet = false;

    NamedFilterType m_filterType{NamedFilterType::NOT_SET};
    bool m_filterTypeHasBeenSet = false;

    TopicCategoryFilter m_categoryFilter;
    bool m_categoryFilterHasBeenSet = false;

    TopicNumericEqualityFilter m_numericEqualityFilter;
    bool m_numericEqualityFilterHasBeenSet = false;

    TopicNumericRangeFilter m_numericRangeFilter;
    bool m_numericRangeFilterHasBeenSet = false;

    TopicDateRangeFilter m_dateRangeFilter;
    bool m_dateRangeFilterHasBeenSet = false;

    TopicRelativeDateFilter m_relativeDateFilter;
    bool m_relativeDateFilterHasBeenSet = false;

    TopicNullFilter m_nullFilter;
    bool m_nullFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
