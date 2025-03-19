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
    AWS_QUICKSIGHT_API CustomFilterConfiguration() = default;
    AWS_QUICKSIGHT_API CustomFilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomFilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The match operator that is used to determine if a filter should be
     * applied.</p>
     */
    inline CategoryFilterMatchOperator GetMatchOperator() const { return m_matchOperator; }
    inline bool MatchOperatorHasBeenSet() const { return m_matchOperatorHasBeenSet; }
    inline void SetMatchOperator(CategoryFilterMatchOperator value) { m_matchOperatorHasBeenSet = true; m_matchOperator = value; }
    inline CustomFilterConfiguration& WithMatchOperator(CategoryFilterMatchOperator value) { SetMatchOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category value for the filter.</p> <p>This field is mutually exclusive to
     * <code>ParameterName</code>.</p>
     */
    inline const Aws::String& GetCategoryValue() const { return m_categoryValue; }
    inline bool CategoryValueHasBeenSet() const { return m_categoryValueHasBeenSet; }
    template<typename CategoryValueT = Aws::String>
    void SetCategoryValue(CategoryValueT&& value) { m_categoryValueHasBeenSet = true; m_categoryValue = std::forward<CategoryValueT>(value); }
    template<typename CategoryValueT = Aws::String>
    CustomFilterConfiguration& WithCategoryValue(CategoryValueT&& value) { SetCategoryValue(std::forward<CategoryValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline CategoryFilterSelectAllOptions GetSelectAllOptions() const { return m_selectAllOptions; }
    inline bool SelectAllOptionsHasBeenSet() const { return m_selectAllOptionsHasBeenSet; }
    inline void SetSelectAllOptions(CategoryFilterSelectAllOptions value) { m_selectAllOptionsHasBeenSet = true; m_selectAllOptions = value; }
    inline CustomFilterConfiguration& WithSelectAllOptions(CategoryFilterSelectAllOptions value) { SetSelectAllOptions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter whose value should be used for the filter value.</p> <p>This
     * field is mutually exclusive to <code>CategoryValue</code>.</p>
     */
    inline const Aws::String& GetParameterName() const { return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    template<typename ParameterNameT = Aws::String>
    void SetParameterName(ParameterNameT&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::forward<ParameterNameT>(value); }
    template<typename ParameterNameT = Aws::String>
    CustomFilterConfiguration& WithParameterName(ParameterNameT&& value) { SetParameterName(std::forward<ParameterNameT>(value)); return *this;}
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
    inline CustomFilterConfiguration& WithNullOption(FilterNullOption value) { SetNullOption(value); return *this;}
    ///@}
  private:

    CategoryFilterMatchOperator m_matchOperator{CategoryFilterMatchOperator::NOT_SET};
    bool m_matchOperatorHasBeenSet = false;

    Aws::String m_categoryValue;
    bool m_categoryValueHasBeenSet = false;

    CategoryFilterSelectAllOptions m_selectAllOptions{CategoryFilterSelectAllOptions::NOT_SET};
    bool m_selectAllOptionsHasBeenSet = false;

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    FilterNullOption m_nullOption{FilterNullOption::NOT_SET};
    bool m_nullOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
