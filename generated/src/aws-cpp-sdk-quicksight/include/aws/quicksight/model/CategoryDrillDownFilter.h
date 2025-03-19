/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The category drill down filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CategoryDrillDownFilter">AWS
   * API Reference</a></p>
   */
  class CategoryDrillDownFilter
  {
  public:
    AWS_QUICKSIGHT_API CategoryDrillDownFilter() = default;
    AWS_QUICKSIGHT_API CategoryDrillDownFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CategoryDrillDownFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline const ColumnIdentifier& GetColumn() const { return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    template<typename ColumnT = ColumnIdentifier>
    void SetColumn(ColumnT&& value) { m_columnHasBeenSet = true; m_column = std::forward<ColumnT>(value); }
    template<typename ColumnT = ColumnIdentifier>
    CategoryDrillDownFilter& WithColumn(ColumnT&& value) { SetColumn(std::forward<ColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the string inputs that are the values of the category drill down
     * filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCategoryValues() const { return m_categoryValues; }
    inline bool CategoryValuesHasBeenSet() const { return m_categoryValuesHasBeenSet; }
    template<typename CategoryValuesT = Aws::Vector<Aws::String>>
    void SetCategoryValues(CategoryValuesT&& value) { m_categoryValuesHasBeenSet = true; m_categoryValues = std::forward<CategoryValuesT>(value); }
    template<typename CategoryValuesT = Aws::Vector<Aws::String>>
    CategoryDrillDownFilter& WithCategoryValues(CategoryValuesT&& value) { SetCategoryValues(std::forward<CategoryValuesT>(value)); return *this;}
    template<typename CategoryValuesT = Aws::String>
    CategoryDrillDownFilter& AddCategoryValues(CategoryValuesT&& value) { m_categoryValuesHasBeenSet = true; m_categoryValues.emplace_back(std::forward<CategoryValuesT>(value)); return *this; }
    ///@}
  private:

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    Aws::Vector<Aws::String> m_categoryValues;
    bool m_categoryValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
