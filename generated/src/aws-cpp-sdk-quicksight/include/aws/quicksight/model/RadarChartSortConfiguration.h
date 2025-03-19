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
   * <p>The sort configuration of a <code>RadarChartVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RadarChartSortConfiguration">AWS
   * API Reference</a></p>
   */
  class RadarChartSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API RadarChartSortConfiguration() = default;
    AWS_QUICKSIGHT_API RadarChartSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RadarChartSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category sort options of a radar chart.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetCategorySort() const { return m_categorySort; }
    inline bool CategorySortHasBeenSet() const { return m_categorySortHasBeenSet; }
    template<typename CategorySortT = Aws::Vector<FieldSortOptions>>
    void SetCategorySort(CategorySortT&& value) { m_categorySortHasBeenSet = true; m_categorySort = std::forward<CategorySortT>(value); }
    template<typename CategorySortT = Aws::Vector<FieldSortOptions>>
    RadarChartSortConfiguration& WithCategorySort(CategorySortT&& value) { SetCategorySort(std::forward<CategorySortT>(value)); return *this;}
    template<typename CategorySortT = FieldSortOptions>
    RadarChartSortConfiguration& AddCategorySort(CategorySortT&& value) { m_categorySortHasBeenSet = true; m_categorySort.emplace_back(std::forward<CategorySortT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The category items limit for a radar chart.</p>
     */
    inline const ItemsLimitConfiguration& GetCategoryItemsLimit() const { return m_categoryItemsLimit; }
    inline bool CategoryItemsLimitHasBeenSet() const { return m_categoryItemsLimitHasBeenSet; }
    template<typename CategoryItemsLimitT = ItemsLimitConfiguration>
    void SetCategoryItemsLimit(CategoryItemsLimitT&& value) { m_categoryItemsLimitHasBeenSet = true; m_categoryItemsLimit = std::forward<CategoryItemsLimitT>(value); }
    template<typename CategoryItemsLimitT = ItemsLimitConfiguration>
    RadarChartSortConfiguration& WithCategoryItemsLimit(CategoryItemsLimitT&& value) { SetCategoryItemsLimit(std::forward<CategoryItemsLimitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color sort configuration of a radar chart.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetColorSort() const { return m_colorSort; }
    inline bool ColorSortHasBeenSet() const { return m_colorSortHasBeenSet; }
    template<typename ColorSortT = Aws::Vector<FieldSortOptions>>
    void SetColorSort(ColorSortT&& value) { m_colorSortHasBeenSet = true; m_colorSort = std::forward<ColorSortT>(value); }
    template<typename ColorSortT = Aws::Vector<FieldSortOptions>>
    RadarChartSortConfiguration& WithColorSort(ColorSortT&& value) { SetColorSort(std::forward<ColorSortT>(value)); return *this;}
    template<typename ColorSortT = FieldSortOptions>
    RadarChartSortConfiguration& AddColorSort(ColorSortT&& value) { m_colorSortHasBeenSet = true; m_colorSort.emplace_back(std::forward<ColorSortT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The color items limit of a radar chart.</p>
     */
    inline const ItemsLimitConfiguration& GetColorItemsLimit() const { return m_colorItemsLimit; }
    inline bool ColorItemsLimitHasBeenSet() const { return m_colorItemsLimitHasBeenSet; }
    template<typename ColorItemsLimitT = ItemsLimitConfiguration>
    void SetColorItemsLimit(ColorItemsLimitT&& value) { m_colorItemsLimitHasBeenSet = true; m_colorItemsLimit = std::forward<ColorItemsLimitT>(value); }
    template<typename ColorItemsLimitT = ItemsLimitConfiguration>
    RadarChartSortConfiguration& WithColorItemsLimit(ColorItemsLimitT&& value) { SetColorItemsLimit(std::forward<ColorItemsLimitT>(value)); return *this;}
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
