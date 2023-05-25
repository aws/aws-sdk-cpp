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
    AWS_QUICKSIGHT_API WaterfallChartSortConfiguration();
    AWS_QUICKSIGHT_API WaterfallChartSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WaterfallChartSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetCategorySort() const{ return m_categorySort; }

    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline bool CategorySortHasBeenSet() const { return m_categorySortHasBeenSet; }

    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline void SetCategorySort(const Aws::Vector<FieldSortOptions>& value) { m_categorySortHasBeenSet = true; m_categorySort = value; }

    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline void SetCategorySort(Aws::Vector<FieldSortOptions>&& value) { m_categorySortHasBeenSet = true; m_categorySort = std::move(value); }

    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline WaterfallChartSortConfiguration& WithCategorySort(const Aws::Vector<FieldSortOptions>& value) { SetCategorySort(value); return *this;}

    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline WaterfallChartSortConfiguration& WithCategorySort(Aws::Vector<FieldSortOptions>&& value) { SetCategorySort(std::move(value)); return *this;}

    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline WaterfallChartSortConfiguration& AddCategorySort(const FieldSortOptions& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(value); return *this; }

    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline WaterfallChartSortConfiguration& AddCategorySort(FieldSortOptions&& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(std::move(value)); return *this; }


    /**
     * <p>The limit on the number of bar groups that are displayed.</p>
     */
    inline const ItemsLimitConfiguration& GetBreakdownItemsLimit() const{ return m_breakdownItemsLimit; }

    /**
     * <p>The limit on the number of bar groups that are displayed.</p>
     */
    inline bool BreakdownItemsLimitHasBeenSet() const { return m_breakdownItemsLimitHasBeenSet; }

    /**
     * <p>The limit on the number of bar groups that are displayed.</p>
     */
    inline void SetBreakdownItemsLimit(const ItemsLimitConfiguration& value) { m_breakdownItemsLimitHasBeenSet = true; m_breakdownItemsLimit = value; }

    /**
     * <p>The limit on the number of bar groups that are displayed.</p>
     */
    inline void SetBreakdownItemsLimit(ItemsLimitConfiguration&& value) { m_breakdownItemsLimitHasBeenSet = true; m_breakdownItemsLimit = std::move(value); }

    /**
     * <p>The limit on the number of bar groups that are displayed.</p>
     */
    inline WaterfallChartSortConfiguration& WithBreakdownItemsLimit(const ItemsLimitConfiguration& value) { SetBreakdownItemsLimit(value); return *this;}

    /**
     * <p>The limit on the number of bar groups that are displayed.</p>
     */
    inline WaterfallChartSortConfiguration& WithBreakdownItemsLimit(ItemsLimitConfiguration&& value) { SetBreakdownItemsLimit(std::move(value)); return *this;}

  private:

    Aws::Vector<FieldSortOptions> m_categorySort;
    bool m_categorySortHasBeenSet = false;

    ItemsLimitConfiguration m_breakdownItemsLimit;
    bool m_breakdownItemsLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
