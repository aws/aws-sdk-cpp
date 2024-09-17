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
   * <p>sort-configuration-description</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BarChartSortConfiguration">AWS
   * API Reference</a></p>
   */
  class BarChartSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API BarChartSortConfiguration();
    AWS_QUICKSIGHT_API BarChartSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BarChartSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sort configuration of category fields.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetCategorySort() const{ return m_categorySort; }
    inline bool CategorySortHasBeenSet() const { return m_categorySortHasBeenSet; }
    inline void SetCategorySort(const Aws::Vector<FieldSortOptions>& value) { m_categorySortHasBeenSet = true; m_categorySort = value; }
    inline void SetCategorySort(Aws::Vector<FieldSortOptions>&& value) { m_categorySortHasBeenSet = true; m_categorySort = std::move(value); }
    inline BarChartSortConfiguration& WithCategorySort(const Aws::Vector<FieldSortOptions>& value) { SetCategorySort(value); return *this;}
    inline BarChartSortConfiguration& WithCategorySort(Aws::Vector<FieldSortOptions>&& value) { SetCategorySort(std::move(value)); return *this;}
    inline BarChartSortConfiguration& AddCategorySort(const FieldSortOptions& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(value); return *this; }
    inline BarChartSortConfiguration& AddCategorySort(FieldSortOptions&& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The limit on the number of categories displayed in a bar chart.</p>
     */
    inline const ItemsLimitConfiguration& GetCategoryItemsLimit() const{ return m_categoryItemsLimit; }
    inline bool CategoryItemsLimitHasBeenSet() const { return m_categoryItemsLimitHasBeenSet; }
    inline void SetCategoryItemsLimit(const ItemsLimitConfiguration& value) { m_categoryItemsLimitHasBeenSet = true; m_categoryItemsLimit = value; }
    inline void SetCategoryItemsLimit(ItemsLimitConfiguration&& value) { m_categoryItemsLimitHasBeenSet = true; m_categoryItemsLimit = std::move(value); }
    inline BarChartSortConfiguration& WithCategoryItemsLimit(const ItemsLimitConfiguration& value) { SetCategoryItemsLimit(value); return *this;}
    inline BarChartSortConfiguration& WithCategoryItemsLimit(ItemsLimitConfiguration&& value) { SetCategoryItemsLimit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of color fields in a bar chart.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetColorSort() const{ return m_colorSort; }
    inline bool ColorSortHasBeenSet() const { return m_colorSortHasBeenSet; }
    inline void SetColorSort(const Aws::Vector<FieldSortOptions>& value) { m_colorSortHasBeenSet = true; m_colorSort = value; }
    inline void SetColorSort(Aws::Vector<FieldSortOptions>&& value) { m_colorSortHasBeenSet = true; m_colorSort = std::move(value); }
    inline BarChartSortConfiguration& WithColorSort(const Aws::Vector<FieldSortOptions>& value) { SetColorSort(value); return *this;}
    inline BarChartSortConfiguration& WithColorSort(Aws::Vector<FieldSortOptions>&& value) { SetColorSort(std::move(value)); return *this;}
    inline BarChartSortConfiguration& AddColorSort(const FieldSortOptions& value) { m_colorSortHasBeenSet = true; m_colorSort.push_back(value); return *this; }
    inline BarChartSortConfiguration& AddColorSort(FieldSortOptions&& value) { m_colorSortHasBeenSet = true; m_colorSort.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The limit on the number of values displayed in a bar chart.</p>
     */
    inline const ItemsLimitConfiguration& GetColorItemsLimit() const{ return m_colorItemsLimit; }
    inline bool ColorItemsLimitHasBeenSet() const { return m_colorItemsLimitHasBeenSet; }
    inline void SetColorItemsLimit(const ItemsLimitConfiguration& value) { m_colorItemsLimitHasBeenSet = true; m_colorItemsLimit = value; }
    inline void SetColorItemsLimit(ItemsLimitConfiguration&& value) { m_colorItemsLimitHasBeenSet = true; m_colorItemsLimit = std::move(value); }
    inline BarChartSortConfiguration& WithColorItemsLimit(const ItemsLimitConfiguration& value) { SetColorItemsLimit(value); return *this;}
    inline BarChartSortConfiguration& WithColorItemsLimit(ItemsLimitConfiguration&& value) { SetColorItemsLimit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetSmallMultiplesSort() const{ return m_smallMultiplesSort; }
    inline bool SmallMultiplesSortHasBeenSet() const { return m_smallMultiplesSortHasBeenSet; }
    inline void SetSmallMultiplesSort(const Aws::Vector<FieldSortOptions>& value) { m_smallMultiplesSortHasBeenSet = true; m_smallMultiplesSort = value; }
    inline void SetSmallMultiplesSort(Aws::Vector<FieldSortOptions>&& value) { m_smallMultiplesSortHasBeenSet = true; m_smallMultiplesSort = std::move(value); }
    inline BarChartSortConfiguration& WithSmallMultiplesSort(const Aws::Vector<FieldSortOptions>& value) { SetSmallMultiplesSort(value); return *this;}
    inline BarChartSortConfiguration& WithSmallMultiplesSort(Aws::Vector<FieldSortOptions>&& value) { SetSmallMultiplesSort(std::move(value)); return *this;}
    inline BarChartSortConfiguration& AddSmallMultiplesSort(const FieldSortOptions& value) { m_smallMultiplesSortHasBeenSet = true; m_smallMultiplesSort.push_back(value); return *this; }
    inline BarChartSortConfiguration& AddSmallMultiplesSort(FieldSortOptions&& value) { m_smallMultiplesSortHasBeenSet = true; m_smallMultiplesSort.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The limit on the number of small multiples panels that are displayed.</p>
     */
    inline const ItemsLimitConfiguration& GetSmallMultiplesLimitConfiguration() const{ return m_smallMultiplesLimitConfiguration; }
    inline bool SmallMultiplesLimitConfigurationHasBeenSet() const { return m_smallMultiplesLimitConfigurationHasBeenSet; }
    inline void SetSmallMultiplesLimitConfiguration(const ItemsLimitConfiguration& value) { m_smallMultiplesLimitConfigurationHasBeenSet = true; m_smallMultiplesLimitConfiguration = value; }
    inline void SetSmallMultiplesLimitConfiguration(ItemsLimitConfiguration&& value) { m_smallMultiplesLimitConfigurationHasBeenSet = true; m_smallMultiplesLimitConfiguration = std::move(value); }
    inline BarChartSortConfiguration& WithSmallMultiplesLimitConfiguration(const ItemsLimitConfiguration& value) { SetSmallMultiplesLimitConfiguration(value); return *this;}
    inline BarChartSortConfiguration& WithSmallMultiplesLimitConfiguration(ItemsLimitConfiguration&& value) { SetSmallMultiplesLimitConfiguration(std::move(value)); return *this;}
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

    Aws::Vector<FieldSortOptions> m_smallMultiplesSort;
    bool m_smallMultiplesSortHasBeenSet = false;

    ItemsLimitConfiguration m_smallMultiplesLimitConfiguration;
    bool m_smallMultiplesLimitConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
