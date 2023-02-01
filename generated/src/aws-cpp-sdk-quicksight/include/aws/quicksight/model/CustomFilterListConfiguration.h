/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CategoryFilterMatchOperator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/CategoryFilterSelectAllOptions.h>
#include <aws/quicksight/model/FilterNullOption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A list of custom filter values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomFilterListConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomFilterListConfiguration
  {
  public:
    AWS_QUICKSIGHT_API CustomFilterListConfiguration();
    AWS_QUICKSIGHT_API CustomFilterListConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomFilterListConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline CustomFilterListConfiguration& WithMatchOperator(const CategoryFilterMatchOperator& value) { SetMatchOperator(value); return *this;}

    /**
     * <p>The match operator that is used to determine if a filter should be
     * applied.</p>
     */
    inline CustomFilterListConfiguration& WithMatchOperator(CategoryFilterMatchOperator&& value) { SetMatchOperator(std::move(value)); return *this;}


    /**
     * <p>The list of category values for the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCategoryValues() const{ return m_categoryValues; }

    /**
     * <p>The list of category values for the filter.</p>
     */
    inline bool CategoryValuesHasBeenSet() const { return m_categoryValuesHasBeenSet; }

    /**
     * <p>The list of category values for the filter.</p>
     */
    inline void SetCategoryValues(const Aws::Vector<Aws::String>& value) { m_categoryValuesHasBeenSet = true; m_categoryValues = value; }

    /**
     * <p>The list of category values for the filter.</p>
     */
    inline void SetCategoryValues(Aws::Vector<Aws::String>&& value) { m_categoryValuesHasBeenSet = true; m_categoryValues = std::move(value); }

    /**
     * <p>The list of category values for the filter.</p>
     */
    inline CustomFilterListConfiguration& WithCategoryValues(const Aws::Vector<Aws::String>& value) { SetCategoryValues(value); return *this;}

    /**
     * <p>The list of category values for the filter.</p>
     */
    inline CustomFilterListConfiguration& WithCategoryValues(Aws::Vector<Aws::String>&& value) { SetCategoryValues(std::move(value)); return *this;}

    /**
     * <p>The list of category values for the filter.</p>
     */
    inline CustomFilterListConfiguration& AddCategoryValues(const Aws::String& value) { m_categoryValuesHasBeenSet = true; m_categoryValues.push_back(value); return *this; }

    /**
     * <p>The list of category values for the filter.</p>
     */
    inline CustomFilterListConfiguration& AddCategoryValues(Aws::String&& value) { m_categoryValuesHasBeenSet = true; m_categoryValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of category values for the filter.</p>
     */
    inline CustomFilterListConfiguration& AddCategoryValues(const char* value) { m_categoryValuesHasBeenSet = true; m_categoryValues.push_back(value); return *this; }


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
    inline CustomFilterListConfiguration& WithSelectAllOptions(const CategoryFilterSelectAllOptions& value) { SetSelectAllOptions(value); return *this;}

    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline CustomFilterListConfiguration& WithSelectAllOptions(CategoryFilterSelectAllOptions&& value) { SetSelectAllOptions(std::move(value)); return *this;}


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
    inline CustomFilterListConfiguration& WithNullOption(const FilterNullOption& value) { SetNullOption(value); return *this;}

    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline CustomFilterListConfiguration& WithNullOption(FilterNullOption&& value) { SetNullOption(std::move(value)); return *this;}

  private:

    CategoryFilterMatchOperator m_matchOperator;
    bool m_matchOperatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_categoryValues;
    bool m_categoryValuesHasBeenSet = false;

    CategoryFilterSelectAllOptions m_selectAllOptions;
    bool m_selectAllOptionsHasBeenSet = false;

    FilterNullOption m_nullOption;
    bool m_nullOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
