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
    AWS_QUICKSIGHT_API ComboChartSortConfiguration();
    AWS_QUICKSIGHT_API ComboChartSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ComboChartSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sort configuration of the category field well in a combo chart.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetCategorySort() const{ return m_categorySort; }
    inline bool CategorySortHasBeenSet() const { return m_categorySortHasBeenSet; }
    inline void SetCategorySort(const Aws::Vector<FieldSortOptions>& value) { m_categorySortHasBeenSet = true; m_categorySort = value; }
    inline void SetCategorySort(Aws::Vector<FieldSortOptions>&& value) { m_categorySortHasBeenSet = true; m_categorySort = std::move(value); }
    inline ComboChartSortConfiguration& WithCategorySort(const Aws::Vector<FieldSortOptions>& value) { SetCategorySort(value); return *this;}
    inline ComboChartSortConfiguration& WithCategorySort(Aws::Vector<FieldSortOptions>&& value) { SetCategorySort(std::move(value)); return *this;}
    inline ComboChartSortConfiguration& AddCategorySort(const FieldSortOptions& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(value); return *this; }
    inline ComboChartSortConfiguration& AddCategorySort(FieldSortOptions&& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The item limit configuration for the category field well of a combo
     * chart.</p>
     */
    inline const ItemsLimitConfiguration& GetCategoryItemsLimit() const{ return m_categoryItemsLimit; }
    inline bool CategoryItemsLimitHasBeenSet() const { return m_categoryItemsLimitHasBeenSet; }
    inline void SetCategoryItemsLimit(const ItemsLimitConfiguration& value) { m_categoryItemsLimitHasBeenSet = true; m_categoryItemsLimit = value; }
    inline void SetCategoryItemsLimit(ItemsLimitConfiguration&& value) { m_categoryItemsLimitHasBeenSet = true; m_categoryItemsLimit = std::move(value); }
    inline ComboChartSortConfiguration& WithCategoryItemsLimit(const ItemsLimitConfiguration& value) { SetCategoryItemsLimit(value); return *this;}
    inline ComboChartSortConfiguration& WithCategoryItemsLimit(ItemsLimitConfiguration&& value) { SetCategoryItemsLimit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of the color field well in a combo chart.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetColorSort() const{ return m_colorSort; }
    inline bool ColorSortHasBeenSet() const { return m_colorSortHasBeenSet; }
    inline void SetColorSort(const Aws::Vector<FieldSortOptions>& value) { m_colorSortHasBeenSet = true; m_colorSort = value; }
    inline void SetColorSort(Aws::Vector<FieldSortOptions>&& value) { m_colorSortHasBeenSet = true; m_colorSort = std::move(value); }
    inline ComboChartSortConfiguration& WithColorSort(const Aws::Vector<FieldSortOptions>& value) { SetColorSort(value); return *this;}
    inline ComboChartSortConfiguration& WithColorSort(Aws::Vector<FieldSortOptions>&& value) { SetColorSort(std::move(value)); return *this;}
    inline ComboChartSortConfiguration& AddColorSort(const FieldSortOptions& value) { m_colorSortHasBeenSet = true; m_colorSort.push_back(value); return *this; }
    inline ComboChartSortConfiguration& AddColorSort(FieldSortOptions&& value) { m_colorSortHasBeenSet = true; m_colorSort.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The item limit configuration of the color field well in a combo chart.</p>
     */
    inline const ItemsLimitConfiguration& GetColorItemsLimit() const{ return m_colorItemsLimit; }
    inline bool ColorItemsLimitHasBeenSet() const { return m_colorItemsLimitHasBeenSet; }
    inline void SetColorItemsLimit(const ItemsLimitConfiguration& value) { m_colorItemsLimitHasBeenSet = true; m_colorItemsLimit = value; }
    inline void SetColorItemsLimit(ItemsLimitConfiguration&& value) { m_colorItemsLimitHasBeenSet = true; m_colorItemsLimit = std::move(value); }
    inline ComboChartSortConfiguration& WithColorItemsLimit(const ItemsLimitConfiguration& value) { SetColorItemsLimit(value); return *this;}
    inline ComboChartSortConfiguration& WithColorItemsLimit(ItemsLimitConfiguration&& value) { SetColorItemsLimit(std::move(value)); return *this;}
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
