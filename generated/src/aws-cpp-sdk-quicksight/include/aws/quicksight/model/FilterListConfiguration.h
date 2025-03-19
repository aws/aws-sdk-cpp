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
   * <p>A list of filter configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterListConfiguration">AWS
   * API Reference</a></p>
   */
  class FilterListConfiguration
  {
  public:
    AWS_QUICKSIGHT_API FilterListConfiguration() = default;
    AWS_QUICKSIGHT_API FilterListConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterListConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The match operator that is used to determine if a filter should be
     * applied.</p>
     */
    inline CategoryFilterMatchOperator GetMatchOperator() const { return m_matchOperator; }
    inline bool MatchOperatorHasBeenSet() const { return m_matchOperatorHasBeenSet; }
    inline void SetMatchOperator(CategoryFilterMatchOperator value) { m_matchOperatorHasBeenSet = true; m_matchOperator = value; }
    inline FilterListConfiguration& WithMatchOperator(CategoryFilterMatchOperator value) { SetMatchOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of category values for the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCategoryValues() const { return m_categoryValues; }
    inline bool CategoryValuesHasBeenSet() const { return m_categoryValuesHasBeenSet; }
    template<typename CategoryValuesT = Aws::Vector<Aws::String>>
    void SetCategoryValues(CategoryValuesT&& value) { m_categoryValuesHasBeenSet = true; m_categoryValues = std::forward<CategoryValuesT>(value); }
    template<typename CategoryValuesT = Aws::Vector<Aws::String>>
    FilterListConfiguration& WithCategoryValues(CategoryValuesT&& value) { SetCategoryValues(std::forward<CategoryValuesT>(value)); return *this;}
    template<typename CategoryValuesT = Aws::String>
    FilterListConfiguration& AddCategoryValues(CategoryValuesT&& value) { m_categoryValuesHasBeenSet = true; m_categoryValues.emplace_back(std::forward<CategoryValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline CategoryFilterSelectAllOptions GetSelectAllOptions() const { return m_selectAllOptions; }
    inline bool SelectAllOptionsHasBeenSet() const { return m_selectAllOptionsHasBeenSet; }
    inline void SetSelectAllOptions(CategoryFilterSelectAllOptions value) { m_selectAllOptionsHasBeenSet = true; m_selectAllOptions = value; }
    inline FilterListConfiguration& WithSelectAllOptions(CategoryFilterSelectAllOptions value) { SetSelectAllOptions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline FilterNullOption GetNullOption() const { return m_nullOption; }
    inline bool NullOptionHasBeenSet() const { return m_nullOptionHasBeenSet; }
    inline void SetNullOption(FilterNullOption value) { m_nullOptionHasBeenSet = true; m_nullOption = value; }
    inline FilterListConfiguration& WithNullOption(FilterNullOption value) { SetNullOption(value); return *this;}
    ///@}
  private:

    CategoryFilterMatchOperator m_matchOperator{CategoryFilterMatchOperator::NOT_SET};
    bool m_matchOperatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_categoryValues;
    bool m_categoryValuesHasBeenSet = false;

    CategoryFilterSelectAllOptions m_selectAllOptions{CategoryFilterSelectAllOptions::NOT_SET};
    bool m_selectAllOptionsHasBeenSet = false;

    FilterNullOption m_nullOption{FilterNullOption::NOT_SET};
    bool m_nullOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
