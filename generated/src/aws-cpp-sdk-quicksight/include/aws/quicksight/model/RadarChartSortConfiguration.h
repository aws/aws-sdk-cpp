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
    AWS_QUICKSIGHT_API RadarChartSortConfiguration();
    AWS_QUICKSIGHT_API RadarChartSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RadarChartSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The category sort options of a radar chart.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetCategorySort() const{ return m_categorySort; }

    /**
     * <p>The category sort options of a radar chart.</p>
     */
    inline bool CategorySortHasBeenSet() const { return m_categorySortHasBeenSet; }

    /**
     * <p>The category sort options of a radar chart.</p>
     */
    inline void SetCategorySort(const Aws::Vector<FieldSortOptions>& value) { m_categorySortHasBeenSet = true; m_categorySort = value; }

    /**
     * <p>The category sort options of a radar chart.</p>
     */
    inline void SetCategorySort(Aws::Vector<FieldSortOptions>&& value) { m_categorySortHasBeenSet = true; m_categorySort = std::move(value); }

    /**
     * <p>The category sort options of a radar chart.</p>
     */
    inline RadarChartSortConfiguration& WithCategorySort(const Aws::Vector<FieldSortOptions>& value) { SetCategorySort(value); return *this;}

    /**
     * <p>The category sort options of a radar chart.</p>
     */
    inline RadarChartSortConfiguration& WithCategorySort(Aws::Vector<FieldSortOptions>&& value) { SetCategorySort(std::move(value)); return *this;}

    /**
     * <p>The category sort options of a radar chart.</p>
     */
    inline RadarChartSortConfiguration& AddCategorySort(const FieldSortOptions& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(value); return *this; }

    /**
     * <p>The category sort options of a radar chart.</p>
     */
    inline RadarChartSortConfiguration& AddCategorySort(FieldSortOptions&& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(std::move(value)); return *this; }


    /**
     * <p>The category items limit for a radar chart.</p>
     */
    inline const ItemsLimitConfiguration& GetCategoryItemsLimit() const{ return m_categoryItemsLimit; }

    /**
     * <p>The category items limit for a radar chart.</p>
     */
    inline bool CategoryItemsLimitHasBeenSet() const { return m_categoryItemsLimitHasBeenSet; }

    /**
     * <p>The category items limit for a radar chart.</p>
     */
    inline void SetCategoryItemsLimit(const ItemsLimitConfiguration& value) { m_categoryItemsLimitHasBeenSet = true; m_categoryItemsLimit = value; }

    /**
     * <p>The category items limit for a radar chart.</p>
     */
    inline void SetCategoryItemsLimit(ItemsLimitConfiguration&& value) { m_categoryItemsLimitHasBeenSet = true; m_categoryItemsLimit = std::move(value); }

    /**
     * <p>The category items limit for a radar chart.</p>
     */
    inline RadarChartSortConfiguration& WithCategoryItemsLimit(const ItemsLimitConfiguration& value) { SetCategoryItemsLimit(value); return *this;}

    /**
     * <p>The category items limit for a radar chart.</p>
     */
    inline RadarChartSortConfiguration& WithCategoryItemsLimit(ItemsLimitConfiguration&& value) { SetCategoryItemsLimit(std::move(value)); return *this;}


    /**
     * <p>The color sort configuration of a radar chart.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetColorSort() const{ return m_colorSort; }

    /**
     * <p>The color sort configuration of a radar chart.</p>
     */
    inline bool ColorSortHasBeenSet() const { return m_colorSortHasBeenSet; }

    /**
     * <p>The color sort configuration of a radar chart.</p>
     */
    inline void SetColorSort(const Aws::Vector<FieldSortOptions>& value) { m_colorSortHasBeenSet = true; m_colorSort = value; }

    /**
     * <p>The color sort configuration of a radar chart.</p>
     */
    inline void SetColorSort(Aws::Vector<FieldSortOptions>&& value) { m_colorSortHasBeenSet = true; m_colorSort = std::move(value); }

    /**
     * <p>The color sort configuration of a radar chart.</p>
     */
    inline RadarChartSortConfiguration& WithColorSort(const Aws::Vector<FieldSortOptions>& value) { SetColorSort(value); return *this;}

    /**
     * <p>The color sort configuration of a radar chart.</p>
     */
    inline RadarChartSortConfiguration& WithColorSort(Aws::Vector<FieldSortOptions>&& value) { SetColorSort(std::move(value)); return *this;}

    /**
     * <p>The color sort configuration of a radar chart.</p>
     */
    inline RadarChartSortConfiguration& AddColorSort(const FieldSortOptions& value) { m_colorSortHasBeenSet = true; m_colorSort.push_back(value); return *this; }

    /**
     * <p>The color sort configuration of a radar chart.</p>
     */
    inline RadarChartSortConfiguration& AddColorSort(FieldSortOptions&& value) { m_colorSortHasBeenSet = true; m_colorSort.push_back(std::move(value)); return *this; }


    /**
     * <p>The color items limit of a radar chart.</p>
     */
    inline const ItemsLimitConfiguration& GetColorItemsLimit() const{ return m_colorItemsLimit; }

    /**
     * <p>The color items limit of a radar chart.</p>
     */
    inline bool ColorItemsLimitHasBeenSet() const { return m_colorItemsLimitHasBeenSet; }

    /**
     * <p>The color items limit of a radar chart.</p>
     */
    inline void SetColorItemsLimit(const ItemsLimitConfiguration& value) { m_colorItemsLimitHasBeenSet = true; m_colorItemsLimit = value; }

    /**
     * <p>The color items limit of a radar chart.</p>
     */
    inline void SetColorItemsLimit(ItemsLimitConfiguration&& value) { m_colorItemsLimitHasBeenSet = true; m_colorItemsLimit = std::move(value); }

    /**
     * <p>The color items limit of a radar chart.</p>
     */
    inline RadarChartSortConfiguration& WithColorItemsLimit(const ItemsLimitConfiguration& value) { SetColorItemsLimit(value); return *this;}

    /**
     * <p>The color items limit of a radar chart.</p>
     */
    inline RadarChartSortConfiguration& WithColorItemsLimit(ItemsLimitConfiguration&& value) { SetColorItemsLimit(std::move(value)); return *this;}

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
