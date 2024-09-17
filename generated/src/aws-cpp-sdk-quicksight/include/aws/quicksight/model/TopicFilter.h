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
    AWS_QUICKSIGHT_API TopicFilter();
    AWS_QUICKSIGHT_API TopicFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description of the filter used to select items for a topic.</p>
     */
    inline const Aws::String& GetFilterDescription() const{ return m_filterDescription; }
    inline bool FilterDescriptionHasBeenSet() const { return m_filterDescriptionHasBeenSet; }
    inline void SetFilterDescription(const Aws::String& value) { m_filterDescriptionHasBeenSet = true; m_filterDescription = value; }
    inline void SetFilterDescription(Aws::String&& value) { m_filterDescriptionHasBeenSet = true; m_filterDescription = std::move(value); }
    inline void SetFilterDescription(const char* value) { m_filterDescriptionHasBeenSet = true; m_filterDescription.assign(value); }
    inline TopicFilter& WithFilterDescription(const Aws::String& value) { SetFilterDescription(value); return *this;}
    inline TopicFilter& WithFilterDescription(Aws::String&& value) { SetFilterDescription(std::move(value)); return *this;}
    inline TopicFilter& WithFilterDescription(const char* value) { SetFilterDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The class of the filter. Valid values for this structure are
     * <code>ENFORCED_VALUE_FILTER</code>, <code>CONDITIONAL_VALUE_FILTER</code>, and
     * <code>NAMED_VALUE_FILTER</code>.</p>
     */
    inline const FilterClass& GetFilterClass() const{ return m_filterClass; }
    inline bool FilterClassHasBeenSet() const { return m_filterClassHasBeenSet; }
    inline void SetFilterClass(const FilterClass& value) { m_filterClassHasBeenSet = true; m_filterClass = value; }
    inline void SetFilterClass(FilterClass&& value) { m_filterClassHasBeenSet = true; m_filterClass = std::move(value); }
    inline TopicFilter& WithFilterClass(const FilterClass& value) { SetFilterClass(value); return *this;}
    inline TopicFilter& WithFilterClass(FilterClass&& value) { SetFilterClass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the filter.</p>
     */
    inline const Aws::String& GetFilterName() const{ return m_filterName; }
    inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }
    inline void SetFilterName(const Aws::String& value) { m_filterNameHasBeenSet = true; m_filterName = value; }
    inline void SetFilterName(Aws::String&& value) { m_filterNameHasBeenSet = true; m_filterName = std::move(value); }
    inline void SetFilterName(const char* value) { m_filterNameHasBeenSet = true; m_filterName.assign(value); }
    inline TopicFilter& WithFilterName(const Aws::String& value) { SetFilterName(value); return *this;}
    inline TopicFilter& WithFilterName(Aws::String&& value) { SetFilterName(std::move(value)); return *this;}
    inline TopicFilter& WithFilterName(const char* value) { SetFilterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The other names or aliases for the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterSynonyms() const{ return m_filterSynonyms; }
    inline bool FilterSynonymsHasBeenSet() const { return m_filterSynonymsHasBeenSet; }
    inline void SetFilterSynonyms(const Aws::Vector<Aws::String>& value) { m_filterSynonymsHasBeenSet = true; m_filterSynonyms = value; }
    inline void SetFilterSynonyms(Aws::Vector<Aws::String>&& value) { m_filterSynonymsHasBeenSet = true; m_filterSynonyms = std::move(value); }
    inline TopicFilter& WithFilterSynonyms(const Aws::Vector<Aws::String>& value) { SetFilterSynonyms(value); return *this;}
    inline TopicFilter& WithFilterSynonyms(Aws::Vector<Aws::String>&& value) { SetFilterSynonyms(std::move(value)); return *this;}
    inline TopicFilter& AddFilterSynonyms(const Aws::String& value) { m_filterSynonymsHasBeenSet = true; m_filterSynonyms.push_back(value); return *this; }
    inline TopicFilter& AddFilterSynonyms(Aws::String&& value) { m_filterSynonymsHasBeenSet = true; m_filterSynonyms.push_back(std::move(value)); return *this; }
    inline TopicFilter& AddFilterSynonyms(const char* value) { m_filterSynonymsHasBeenSet = true; m_filterSynonyms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the field that the filter operates on.</p>
     */
    inline const Aws::String& GetOperandFieldName() const{ return m_operandFieldName; }
    inline bool OperandFieldNameHasBeenSet() const { return m_operandFieldNameHasBeenSet; }
    inline void SetOperandFieldName(const Aws::String& value) { m_operandFieldNameHasBeenSet = true; m_operandFieldName = value; }
    inline void SetOperandFieldName(Aws::String&& value) { m_operandFieldNameHasBeenSet = true; m_operandFieldName = std::move(value); }
    inline void SetOperandFieldName(const char* value) { m_operandFieldNameHasBeenSet = true; m_operandFieldName.assign(value); }
    inline TopicFilter& WithOperandFieldName(const Aws::String& value) { SetOperandFieldName(value); return *this;}
    inline TopicFilter& WithOperandFieldName(Aws::String&& value) { SetOperandFieldName(std::move(value)); return *this;}
    inline TopicFilter& WithOperandFieldName(const char* value) { SetOperandFieldName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the filter. Valid values for this structure are
     * <code>CATEGORY_FILTER</code>, <code>NUMERIC_EQUALITY_FILTER</code>,
     * <code>NUMERIC_RANGE_FILTER</code>, <code>DATE_RANGE_FILTER</code>, and
     * <code>RELATIVE_DATE_FILTER</code>.</p>
     */
    inline const NamedFilterType& GetFilterType() const{ return m_filterType; }
    inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }
    inline void SetFilterType(const NamedFilterType& value) { m_filterTypeHasBeenSet = true; m_filterType = value; }
    inline void SetFilterType(NamedFilterType&& value) { m_filterTypeHasBeenSet = true; m_filterType = std::move(value); }
    inline TopicFilter& WithFilterType(const NamedFilterType& value) { SetFilterType(value); return *this;}
    inline TopicFilter& WithFilterType(NamedFilterType&& value) { SetFilterType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category filter that is associated with this filter.</p>
     */
    inline const TopicCategoryFilter& GetCategoryFilter() const{ return m_categoryFilter; }
    inline bool CategoryFilterHasBeenSet() const { return m_categoryFilterHasBeenSet; }
    inline void SetCategoryFilter(const TopicCategoryFilter& value) { m_categoryFilterHasBeenSet = true; m_categoryFilter = value; }
    inline void SetCategoryFilter(TopicCategoryFilter&& value) { m_categoryFilterHasBeenSet = true; m_categoryFilter = std::move(value); }
    inline TopicFilter& WithCategoryFilter(const TopicCategoryFilter& value) { SetCategoryFilter(value); return *this;}
    inline TopicFilter& WithCategoryFilter(TopicCategoryFilter&& value) { SetCategoryFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numeric equality filter.</p>
     */
    inline const TopicNumericEqualityFilter& GetNumericEqualityFilter() const{ return m_numericEqualityFilter; }
    inline bool NumericEqualityFilterHasBeenSet() const { return m_numericEqualityFilterHasBeenSet; }
    inline void SetNumericEqualityFilter(const TopicNumericEqualityFilter& value) { m_numericEqualityFilterHasBeenSet = true; m_numericEqualityFilter = value; }
    inline void SetNumericEqualityFilter(TopicNumericEqualityFilter&& value) { m_numericEqualityFilterHasBeenSet = true; m_numericEqualityFilter = std::move(value); }
    inline TopicFilter& WithNumericEqualityFilter(const TopicNumericEqualityFilter& value) { SetNumericEqualityFilter(value); return *this;}
    inline TopicFilter& WithNumericEqualityFilter(TopicNumericEqualityFilter&& value) { SetNumericEqualityFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numeric range filter.</p>
     */
    inline const TopicNumericRangeFilter& GetNumericRangeFilter() const{ return m_numericRangeFilter; }
    inline bool NumericRangeFilterHasBeenSet() const { return m_numericRangeFilterHasBeenSet; }
    inline void SetNumericRangeFilter(const TopicNumericRangeFilter& value) { m_numericRangeFilterHasBeenSet = true; m_numericRangeFilter = value; }
    inline void SetNumericRangeFilter(TopicNumericRangeFilter&& value) { m_numericRangeFilterHasBeenSet = true; m_numericRangeFilter = std::move(value); }
    inline TopicFilter& WithNumericRangeFilter(const TopicNumericRangeFilter& value) { SetNumericRangeFilter(value); return *this;}
    inline TopicFilter& WithNumericRangeFilter(TopicNumericRangeFilter&& value) { SetNumericRangeFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date range filter.</p>
     */
    inline const TopicDateRangeFilter& GetDateRangeFilter() const{ return m_dateRangeFilter; }
    inline bool DateRangeFilterHasBeenSet() const { return m_dateRangeFilterHasBeenSet; }
    inline void SetDateRangeFilter(const TopicDateRangeFilter& value) { m_dateRangeFilterHasBeenSet = true; m_dateRangeFilter = value; }
    inline void SetDateRangeFilter(TopicDateRangeFilter&& value) { m_dateRangeFilterHasBeenSet = true; m_dateRangeFilter = std::move(value); }
    inline TopicFilter& WithDateRangeFilter(const TopicDateRangeFilter& value) { SetDateRangeFilter(value); return *this;}
    inline TopicFilter& WithDateRangeFilter(TopicDateRangeFilter&& value) { SetDateRangeFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative date filter.</p>
     */
    inline const TopicRelativeDateFilter& GetRelativeDateFilter() const{ return m_relativeDateFilter; }
    inline bool RelativeDateFilterHasBeenSet() const { return m_relativeDateFilterHasBeenSet; }
    inline void SetRelativeDateFilter(const TopicRelativeDateFilter& value) { m_relativeDateFilterHasBeenSet = true; m_relativeDateFilter = value; }
    inline void SetRelativeDateFilter(TopicRelativeDateFilter&& value) { m_relativeDateFilterHasBeenSet = true; m_relativeDateFilter = std::move(value); }
    inline TopicFilter& WithRelativeDateFilter(const TopicRelativeDateFilter& value) { SetRelativeDateFilter(value); return *this;}
    inline TopicFilter& WithRelativeDateFilter(TopicRelativeDateFilter&& value) { SetRelativeDateFilter(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterDescription;
    bool m_filterDescriptionHasBeenSet = false;

    FilterClass m_filterClass;
    bool m_filterClassHasBeenSet = false;

    Aws::String m_filterName;
    bool m_filterNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterSynonyms;
    bool m_filterSynonymsHasBeenSet = false;

    Aws::String m_operandFieldName;
    bool m_operandFieldNameHasBeenSet = false;

    NamedFilterType m_filterType;
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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
