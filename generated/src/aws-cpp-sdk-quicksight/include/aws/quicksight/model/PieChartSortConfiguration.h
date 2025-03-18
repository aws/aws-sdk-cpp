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
   * <p>The sort configuration of a pie chart.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PieChartSortConfiguration">AWS
   * API Reference</a></p>
   */
  class PieChartSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API PieChartSortConfiguration() = default;
    AWS_QUICKSIGHT_API PieChartSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PieChartSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetCategorySort() const { return m_categorySort; }
    inline bool CategorySortHasBeenSet() const { return m_categorySortHasBeenSet; }
    template<typename CategorySortT = Aws::Vector<FieldSortOptions>>
    void SetCategorySort(CategorySortT&& value) { m_categorySortHasBeenSet = true; m_categorySort = std::forward<CategorySortT>(value); }
    template<typename CategorySortT = Aws::Vector<FieldSortOptions>>
    PieChartSortConfiguration& WithCategorySort(CategorySortT&& value) { SetCategorySort(std::forward<CategorySortT>(value)); return *this;}
    template<typename CategorySortT = FieldSortOptions>
    PieChartSortConfiguration& AddCategorySort(CategorySortT&& value) { m_categorySortHasBeenSet = true; m_categorySort.emplace_back(std::forward<CategorySortT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The limit on the number of categories that are displayed in a pie chart.</p>
     */
    inline const ItemsLimitConfiguration& GetCategoryItemsLimit() const { return m_categoryItemsLimit; }
    inline bool CategoryItemsLimitHasBeenSet() const { return m_categoryItemsLimitHasBeenSet; }
    template<typename CategoryItemsLimitT = ItemsLimitConfiguration>
    void SetCategoryItemsLimit(CategoryItemsLimitT&& value) { m_categoryItemsLimitHasBeenSet = true; m_categoryItemsLimit = std::forward<CategoryItemsLimitT>(value); }
    template<typename CategoryItemsLimitT = ItemsLimitConfiguration>
    PieChartSortConfiguration& WithCategoryItemsLimit(CategoryItemsLimitT&& value) { SetCategoryItemsLimit(std::forward<CategoryItemsLimitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetSmallMultiplesSort() const { return m_smallMultiplesSort; }
    inline bool SmallMultiplesSortHasBeenSet() const { return m_smallMultiplesSortHasBeenSet; }
    template<typename SmallMultiplesSortT = Aws::Vector<FieldSortOptions>>
    void SetSmallMultiplesSort(SmallMultiplesSortT&& value) { m_smallMultiplesSortHasBeenSet = true; m_smallMultiplesSort = std::forward<SmallMultiplesSortT>(value); }
    template<typename SmallMultiplesSortT = Aws::Vector<FieldSortOptions>>
    PieChartSortConfiguration& WithSmallMultiplesSort(SmallMultiplesSortT&& value) { SetSmallMultiplesSort(std::forward<SmallMultiplesSortT>(value)); return *this;}
    template<typename SmallMultiplesSortT = FieldSortOptions>
    PieChartSortConfiguration& AddSmallMultiplesSort(SmallMultiplesSortT&& value) { m_smallMultiplesSortHasBeenSet = true; m_smallMultiplesSort.emplace_back(std::forward<SmallMultiplesSortT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The limit on the number of small multiples panels that are displayed.</p>
     */
    inline const ItemsLimitConfiguration& GetSmallMultiplesLimitConfiguration() const { return m_smallMultiplesLimitConfiguration; }
    inline bool SmallMultiplesLimitConfigurationHasBeenSet() const { return m_smallMultiplesLimitConfigurationHasBeenSet; }
    template<typename SmallMultiplesLimitConfigurationT = ItemsLimitConfiguration>
    void SetSmallMultiplesLimitConfiguration(SmallMultiplesLimitConfigurationT&& value) { m_smallMultiplesLimitConfigurationHasBeenSet = true; m_smallMultiplesLimitConfiguration = std::forward<SmallMultiplesLimitConfigurationT>(value); }
    template<typename SmallMultiplesLimitConfigurationT = ItemsLimitConfiguration>
    PieChartSortConfiguration& WithSmallMultiplesLimitConfiguration(SmallMultiplesLimitConfigurationT&& value) { SetSmallMultiplesLimitConfiguration(std::forward<SmallMultiplesLimitConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FieldSortOptions> m_categorySort;
    bool m_categorySortHasBeenSet = false;

    ItemsLimitConfiguration m_categoryItemsLimit;
    bool m_categoryItemsLimitHasBeenSet = false;

    Aws::Vector<FieldSortOptions> m_smallMultiplesSort;
    bool m_smallMultiplesSortHasBeenSet = false;

    ItemsLimitConfiguration m_smallMultiplesLimitConfiguration;
    bool m_smallMultiplesLimitConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
