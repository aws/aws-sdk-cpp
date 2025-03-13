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
   * <p>The sort configuration of a waterfall visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/WaterfallChartSortConfiguration">AWS
   * API Reference</a></p>
   */
  class WaterfallChartSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API WaterfallChartSortConfiguration() = default;
    AWS_QUICKSIGHT_API WaterfallChartSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WaterfallChartSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    WaterfallChartSortConfiguration& WithCategorySort(CategorySortT&& value) { SetCategorySort(std::forward<CategorySortT>(value)); return *this;}
    template<typename CategorySortT = FieldSortOptions>
    WaterfallChartSortConfiguration& AddCategorySort(CategorySortT&& value) { m_categorySortHasBeenSet = true; m_categorySort.emplace_back(std::forward<CategorySortT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The limit on the number of bar groups that are displayed.</p>
     */
    inline const ItemsLimitConfiguration& GetBreakdownItemsLimit() const { return m_breakdownItemsLimit; }
    inline bool BreakdownItemsLimitHasBeenSet() const { return m_breakdownItemsLimitHasBeenSet; }
    template<typename BreakdownItemsLimitT = ItemsLimitConfiguration>
    void SetBreakdownItemsLimit(BreakdownItemsLimitT&& value) { m_breakdownItemsLimitHasBeenSet = true; m_breakdownItemsLimit = std::forward<BreakdownItemsLimitT>(value); }
    template<typename BreakdownItemsLimitT = ItemsLimitConfiguration>
    WaterfallChartSortConfiguration& WithBreakdownItemsLimit(BreakdownItemsLimitT&& value) { SetBreakdownItemsLimit(std::forward<BreakdownItemsLimitT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FieldSortOptions> m_categorySort;
    bool m_categorySortHasBeenSet = false;

    ItemsLimitConfiguration m_breakdownItemsLimit;
    bool m_breakdownItemsLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
