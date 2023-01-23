/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CategoryFilterMatchOperator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/CategoryFilterSelectAllOptions.h>
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
    AWS_QUICKSIGHT_API FilterListConfiguration();
    AWS_QUICKSIGHT_API FilterListConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterListConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline FilterListConfiguration& WithMatchOperator(const CategoryFilterMatchOperator& value) { SetMatchOperator(value); return *this;}

    /**
     * <p>The match operator that is used to determine if a filter should be
     * applied.</p>
     */
    inline FilterListConfiguration& WithMatchOperator(CategoryFilterMatchOperator&& value) { SetMatchOperator(std::move(value)); return *this;}


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
    inline FilterListConfiguration& WithCategoryValues(const Aws::Vector<Aws::String>& value) { SetCategoryValues(value); return *this;}

    /**
     * <p>The list of category values for the filter.</p>
     */
    inline FilterListConfiguration& WithCategoryValues(Aws::Vector<Aws::String>&& value) { SetCategoryValues(std::move(value)); return *this;}

    /**
     * <p>The list of category values for the filter.</p>
     */
    inline FilterListConfiguration& AddCategoryValues(const Aws::String& value) { m_categoryValuesHasBeenSet = true; m_categoryValues.push_back(value); return *this; }

    /**
     * <p>The list of category values for the filter.</p>
     */
    inline FilterListConfiguration& AddCategoryValues(Aws::String&& value) { m_categoryValuesHasBeenSet = true; m_categoryValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of category values for the filter.</p>
     */
    inline FilterListConfiguration& AddCategoryValues(const char* value) { m_categoryValuesHasBeenSet = true; m_categoryValues.push_back(value); return *this; }


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
    inline FilterListConfiguration& WithSelectAllOptions(const CategoryFilterSelectAllOptions& value) { SetSelectAllOptions(value); return *this;}

    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline FilterListConfiguration& WithSelectAllOptions(CategoryFilterSelectAllOptions&& value) { SetSelectAllOptions(std::move(value)); return *this;}

  private:

    CategoryFilterMatchOperator m_matchOperator;
    bool m_matchOperatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_categoryValues;
    bool m_categoryValuesHasBeenSet = false;

    CategoryFilterSelectAllOptions m_selectAllOptions;
    bool m_selectAllOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
