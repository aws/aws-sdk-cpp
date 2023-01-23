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
    AWS_QUICKSIGHT_API PieChartSortConfiguration();
    AWS_QUICKSIGHT_API PieChartSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PieChartSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline PieChartSortConfiguration& WithCategorySort(const Aws::Vector<FieldSortOptions>& value) { SetCategorySort(value); return *this;}

    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline PieChartSortConfiguration& WithCategorySort(Aws::Vector<FieldSortOptions>&& value) { SetCategorySort(std::move(value)); return *this;}

    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline PieChartSortConfiguration& AddCategorySort(const FieldSortOptions& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(value); return *this; }

    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline PieChartSortConfiguration& AddCategorySort(FieldSortOptions&& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(std::move(value)); return *this; }


    /**
     * <p>The limit on the number of categories that are displayed in a pie chart.</p>
     */
    inline const ItemsLimitConfiguration& GetCategoryItemsLimit() const{ return m_categoryItemsLimit; }

    /**
     * <p>The limit on the number of categories that are displayed in a pie chart.</p>
     */
    inline bool CategoryItemsLimitHasBeenSet() const { return m_categoryItemsLimitHasBeenSet; }

    /**
     * <p>The limit on the number of categories that are displayed in a pie chart.</p>
     */
    inline void SetCategoryItemsLimit(const ItemsLimitConfiguration& value) { m_categoryItemsLimitHasBeenSet = true; m_categoryItemsLimit = value; }

    /**
     * <p>The limit on the number of categories that are displayed in a pie chart.</p>
     */
    inline void SetCategoryItemsLimit(ItemsLimitConfiguration&& value) { m_categoryItemsLimitHasBeenSet = true; m_categoryItemsLimit = std::move(value); }

    /**
     * <p>The limit on the number of categories that are displayed in a pie chart.</p>
     */
    inline PieChartSortConfiguration& WithCategoryItemsLimit(const ItemsLimitConfiguration& value) { SetCategoryItemsLimit(value); return *this;}

    /**
     * <p>The limit on the number of categories that are displayed in a pie chart.</p>
     */
    inline PieChartSortConfiguration& WithCategoryItemsLimit(ItemsLimitConfiguration&& value) { SetCategoryItemsLimit(std::move(value)); return *this;}


    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetSmallMultiplesSort() const{ return m_smallMultiplesSort; }

    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline bool SmallMultiplesSortHasBeenSet() const { return m_smallMultiplesSortHasBeenSet; }

    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline void SetSmallMultiplesSort(const Aws::Vector<FieldSortOptions>& value) { m_smallMultiplesSortHasBeenSet = true; m_smallMultiplesSort = value; }

    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline void SetSmallMultiplesSort(Aws::Vector<FieldSortOptions>&& value) { m_smallMultiplesSortHasBeenSet = true; m_smallMultiplesSort = std::move(value); }

    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline PieChartSortConfiguration& WithSmallMultiplesSort(const Aws::Vector<FieldSortOptions>& value) { SetSmallMultiplesSort(value); return *this;}

    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline PieChartSortConfiguration& WithSmallMultiplesSort(Aws::Vector<FieldSortOptions>&& value) { SetSmallMultiplesSort(std::move(value)); return *this;}

    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline PieChartSortConfiguration& AddSmallMultiplesSort(const FieldSortOptions& value) { m_smallMultiplesSortHasBeenSet = true; m_smallMultiplesSort.push_back(value); return *this; }

    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline PieChartSortConfiguration& AddSmallMultiplesSort(FieldSortOptions&& value) { m_smallMultiplesSortHasBeenSet = true; m_smallMultiplesSort.push_back(std::move(value)); return *this; }


    /**
     * <p>The limit on the number of small multiples panels that are displayed.</p>
     */
    inline const ItemsLimitConfiguration& GetSmallMultiplesLimitConfiguration() const{ return m_smallMultiplesLimitConfiguration; }

    /**
     * <p>The limit on the number of small multiples panels that are displayed.</p>
     */
    inline bool SmallMultiplesLimitConfigurationHasBeenSet() const { return m_smallMultiplesLimitConfigurationHasBeenSet; }

    /**
     * <p>The limit on the number of small multiples panels that are displayed.</p>
     */
    inline void SetSmallMultiplesLimitConfiguration(const ItemsLimitConfiguration& value) { m_smallMultiplesLimitConfigurationHasBeenSet = true; m_smallMultiplesLimitConfiguration = value; }

    /**
     * <p>The limit on the number of small multiples panels that are displayed.</p>
     */
    inline void SetSmallMultiplesLimitConfiguration(ItemsLimitConfiguration&& value) { m_smallMultiplesLimitConfigurationHasBeenSet = true; m_smallMultiplesLimitConfiguration = std::move(value); }

    /**
     * <p>The limit on the number of small multiples panels that are displayed.</p>
     */
    inline PieChartSortConfiguration& WithSmallMultiplesLimitConfiguration(const ItemsLimitConfiguration& value) { SetSmallMultiplesLimitConfiguration(value); return *this;}

    /**
     * <p>The limit on the number of small multiples panels that are displayed.</p>
     */
    inline PieChartSortConfiguration& WithSmallMultiplesLimitConfiguration(ItemsLimitConfiguration&& value) { SetSmallMultiplesLimitConfiguration(std::move(value)); return *this;}

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
