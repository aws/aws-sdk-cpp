/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CategoryFilterMatchOperator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/CategoryFilterSelectAllOptions.h>
#include <aws/quicksight/model/FilterNullOption.h>
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
   * <p>A custom filter that filters based on a single value. This filter can be
   * partially matched.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomFilterConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomFilterConfiguration
  {
  public:
    AWS_QUICKSIGHT_API CustomFilterConfiguration();
    AWS_QUICKSIGHT_API CustomFilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomFilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The match operator that is used to determine if a filter should be
     * applied.</p>
     */
    inline const CategoryFilterMatchOperator& GetMatchOperator() const{ return m_matchOperator; }

    /**
     * <p>The match operator that is used to determine if a filter should be
     * applied.</p>
     */
    inline bool MatchOperatorHasBeenSet() const { return m_matchOperatorHasBeenSet; }

    /**
     * <p>The match operator that is used to determine if a filter should be
     * applied.</p>
     */
    inline void SetMatchOperator(const CategoryFilterMatchOperator& value) { m_matchOperatorHasBeenSet = true; m_matchOperator = value; }

    /**
     * <p>The match operator that is used to determine if a filter should be
     * applied.</p>
     */
    inline void SetMatchOperator(CategoryFilterMatchOperator&& value) { m_matchOperatorHasBeenSet = true; m_matchOperator = std::move(value); }

    /**
     * <p>The match operator that is used to determine if a filter should be
     * applied.</p>
     */
    inline CustomFilterConfiguration& WithMatchOperator(const CategoryFilterMatchOperator& value) { SetMatchOperator(value); return *this;}

    /**
     * <p>The match operator that is used to determine if a filter should be
     * applied.</p>
     */
    inline CustomFilterConfiguration& WithMatchOperator(CategoryFilterMatchOperator&& value) { SetMatchOperator(std::move(value)); return *this;}


    /**
     * <p>The category value for the filter.</p> <p>This field is mutually exclusive to
     * <code>ParameterName</code>.</p>
     */
    inline const Aws::String& GetCategoryValue() const{ return m_categoryValue; }

    /**
     * <p>The category value for the filter.</p> <p>This field is mutually exclusive to
     * <code>ParameterName</code>.</p>
     */
    inline bool CategoryValueHasBeenSet() const { return m_categoryValueHasBeenSet; }

    /**
     * <p>The category value for the filter.</p> <p>This field is mutually exclusive to
     * <code>ParameterName</code>.</p>
     */
    inline void SetCategoryValue(const Aws::String& value) { m_categoryValueHasBeenSet = true; m_categoryValue = value; }

    /**
     * <p>The category value for the filter.</p> <p>This field is mutually exclusive to
     * <code>ParameterName</code>.</p>
     */
    inline void SetCategoryValue(Aws::String&& value) { m_categoryValueHasBeenSet = true; m_categoryValue = std::move(value); }

    /**
     * <p>The category value for the filter.</p> <p>This field is mutually exclusive to
     * <code>ParameterName</code>.</p>
     */
    inline void SetCategoryValue(const char* value) { m_categoryValueHasBeenSet = true; m_categoryValue.assign(value); }

    /**
     * <p>The category value for the filter.</p> <p>This field is mutually exclusive to
     * <code>ParameterName</code>.</p>
     */
    inline CustomFilterConfiguration& WithCategoryValue(const Aws::String& value) { SetCategoryValue(value); return *this;}

    /**
     * <p>The category value for the filter.</p> <p>This field is mutually exclusive to
     * <code>ParameterName</code>.</p>
     */
    inline CustomFilterConfiguration& WithCategoryValue(Aws::String&& value) { SetCategoryValue(std::move(value)); return *this;}

    /**
     * <p>The category value for the filter.</p> <p>This field is mutually exclusive to
     * <code>ParameterName</code>.</p>
     */
    inline CustomFilterConfiguration& WithCategoryValue(const char* value) { SetCategoryValue(value); return *this;}


    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline const CategoryFilterSelectAllOptions& GetSelectAllOptions() const{ return m_selectAllOptions; }

    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline bool SelectAllOptionsHasBeenSet() const { return m_selectAllOptionsHasBeenSet; }

    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline void SetSelectAllOptions(const CategoryFilterSelectAllOptions& value) { m_selectAllOptionsHasBeenSet = true; m_selectAllOptions = value; }

    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline void SetSelectAllOptions(CategoryFilterSelectAllOptions&& value) { m_selectAllOptionsHasBeenSet = true; m_selectAllOptions = std::move(value); }

    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline CustomFilterConfiguration& WithSelectAllOptions(const CategoryFilterSelectAllOptions& value) { SetSelectAllOptions(value); return *this;}

    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline CustomFilterConfiguration& WithSelectAllOptions(CategoryFilterSelectAllOptions&& value) { SetSelectAllOptions(std::move(value)); return *this;}


    /**
     * <p>The parameter whose value should be used for the filter value.</p> <p>This
     * field is mutually exclusive to <code>CategoryValue</code>.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }

    /**
     * <p>The parameter whose value should be used for the filter value.</p> <p>This
     * field is mutually exclusive to <code>CategoryValue</code>.</p>
     */
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }

    /**
     * <p>The parameter whose value should be used for the filter value.</p> <p>This
     * field is mutually exclusive to <code>CategoryValue</code>.</p>
     */
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }

    /**
     * <p>The parameter whose value should be used for the filter value.</p> <p>This
     * field is mutually exclusive to <code>CategoryValue</code>.</p>
     */
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }

    /**
     * <p>The parameter whose value should be used for the filter value.</p> <p>This
     * field is mutually exclusive to <code>CategoryValue</code>.</p>
     */
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }

    /**
     * <p>The parameter whose value should be used for the filter value.</p> <p>This
     * field is mutually exclusive to <code>CategoryValue</code>.</p>
     */
    inline CustomFilterConfiguration& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}

    /**
     * <p>The parameter whose value should be used for the filter value.</p> <p>This
     * field is mutually exclusive to <code>CategoryValue</code>.</p>
     */
    inline CustomFilterConfiguration& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}

    /**
     * <p>The parameter whose value should be used for the filter value.</p> <p>This
     * field is mutually exclusive to <code>CategoryValue</code>.</p>
     */
    inline CustomFilterConfiguration& WithParameterName(const char* value) { SetParameterName(value); return *this;}


    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline const FilterNullOption& GetNullOption() const{ return m_nullOption; }

    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline bool NullOptionHasBeenSet() const { return m_nullOptionHasBeenSet; }

    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline void SetNullOption(const FilterNullOption& value) { m_nullOptionHasBeenSet = true; m_nullOption = value; }

    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline void SetNullOption(FilterNullOption&& value) { m_nullOptionHasBeenSet = true; m_nullOption = std::move(value); }

    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline CustomFilterConfiguration& WithNullOption(const FilterNullOption& value) { SetNullOption(value); return *this;}

    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline CustomFilterConfiguration& WithNullOption(FilterNullOption&& value) { SetNullOption(std::move(value)); return *this;}

  private:

    CategoryFilterMatchOperator m_matchOperator;
    bool m_matchOperatorHasBeenSet = false;

    Aws::String m_categoryValue;
    bool m_categoryValueHasBeenSet = false;

    CategoryFilterSelectAllOptions m_selectAllOptions;
    bool m_selectAllOptionsHasBeenSet = false;

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    FilterNullOption m_nullOption;
    bool m_nullOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
