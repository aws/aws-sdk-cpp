/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ItemsLimitConfiguration.h>
#include <aws/quicksight/model/FieldSortOptions.h>
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
   * <p>The sort configuration of a <code>ComboChartVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ComboChartSortConfiguration">AWS
   * API Reference</a></p>
   */
  class ComboChartSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ComboChartSortConfiguration() = default;
    AWS_QUICKSIGHT_API ComboChartSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ComboChartSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sort configuration of the category field well in a combo chart.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetCategorySort() const { return m_categorySort; }
    inline bool CategorySortHasBeenSet() const { return m_categorySortHasBeenSet; }
    template<typename CategorySortT = Aws::Vector<FieldSortOptions>>
    void SetCategorySort(CategorySortT&& value) { m_categorySortHasBeenSet = true; m_categorySort = std::forward<CategorySortT>(value); }
    template<typename CategorySortT = Aws::Vector<FieldSortOptions>>
    ComboChartSortConfiguration& WithCategorySort(CategorySortT&& value) { SetCategorySort(std::forward<CategorySortT>(value)); return *this;}
    template<typename CategorySortT = FieldSortOptions>
    ComboChartSortConfiguration& AddCategorySort(CategorySortT&& value) { m_categorySortHasBeenSet = true; m_categorySort.emplace_back(std::forward<CategorySortT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The item limit configuration for the category field well of a combo
     * chart.</p>
     */
    inline const ItemsLimitConfiguration& GetCategoryItemsLimit() const { return m_categoryItemsLimit; }
    inline bool CategoryItemsLimitHasBeenSet() const { return m_categoryItemsLimitHasBeenSet; }
    template<typename CategoryItemsLimitT = ItemsLimitConfiguration>
    void SetCategoryItemsLimit(CategoryItemsLimitT&& value) { m_categoryItemsLimitHasBeenSet = true; m_categoryItemsLimit = std::forward<CategoryItemsLimitT>(value); }
    template<typename CategoryItemsLimitT = ItemsLimitConfiguration>
    ComboChartSortConfiguration& WithCategoryItemsLimit(CategoryItemsLimitT&& value) { SetCategoryItemsLimit(std::forward<CategoryItemsLimitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of the color field well in a combo chart.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetColorSort() const { return m_colorSort; }
    inline bool ColorSortHasBeenSet() const { return m_colorSortHasBeenSet; }
    template<typename ColorSortT = Aws::Vector<FieldSortOptions>>
    void SetColorSort(ColorSortT&& value) { m_colorSortHasBeenSet = true; m_colorSort = std::forward<ColorSortT>(value); }
    template<typename ColorSortT = Aws::Vector<FieldSortOptions>>
    ComboChartSortConfiguration& WithColorSort(ColorSortT&& value) { SetColorSort(std::forward<ColorSortT>(value)); return *this;}
    template<typename ColorSortT = FieldSortOptions>
    ComboChartSortConfiguration& AddColorSort(ColorSortT&& value) { m_colorSortHasBeenSet = true; m_colorSort.emplace_back(std::forward<ColorSortT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The item limit configuration of the color field well in a combo chart.</p>
     */
    inline const ItemsLimitConfiguration& GetColorItemsLimit() const { return m_colorItemsLimit; }
    inline bool ColorItemsLimitHasBeenSet() const { return m_colorItemsLimitHasBeenSet; }
    template<typename ColorItemsLimitT = ItemsLimitConfiguration>
    void SetColorItemsLimit(ColorItemsLimitT&& value) { m_colorItemsLimitHasBeenSet = true; m_colorItemsLimit = std::forward<ColorItemsLimitT>(value); }
    template<typename ColorItemsLimitT = ItemsLimitConfiguration>
    ComboChartSortConfiguration& WithColorItemsLimit(ColorItemsLimitT&& value) { SetColorItemsLimit(std::forward<ColorItemsLimitT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FieldSortOptions> m_categorySort;
    bool m_categorySortHasBeenSet = false;

    ItemsLimitConfiguration m_categoryItemsLimit;
    bool m_categoryItemsLimitHasBeenSet = false;

    Aws::Vector<FieldSortOptions> m_colorSort;
    bool m_colorSortHasBeenSet = false;

    ItemsLimitConfiguration m_colorItemsLimit;
    bool m_colorItemsLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
