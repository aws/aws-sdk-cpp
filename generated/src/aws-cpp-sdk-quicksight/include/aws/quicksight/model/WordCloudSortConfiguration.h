/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ItemsLimitConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The sort configuration of a word cloud visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/WordCloudSortConfiguration">AWS
   * API Reference</a></p>
   */
  class WordCloudSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API WordCloudSortConfiguration();
    AWS_QUICKSIGHT_API WordCloudSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WordCloudSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The limit on the number of groups that are displayed in a word cloud.</p>
     */
    inline const ItemsLimitConfiguration& GetCategoryItemsLimit() const{ return m_categoryItemsLimit; }
    inline bool CategoryItemsLimitHasBeenSet() const { return m_categoryItemsLimitHasBeenSet; }
    inline void SetCategoryItemsLimit(const ItemsLimitConfiguration& value) { m_categoryItemsLimitHasBeenSet = true; m_categoryItemsLimit = value; }
    inline void SetCategoryItemsLimit(ItemsLimitConfiguration&& value) { m_categoryItemsLimitHasBeenSet = true; m_categoryItemsLimit = std::move(value); }
    inline WordCloudSortConfiguration& WithCategoryItemsLimit(const ItemsLimitConfiguration& value) { SetCategoryItemsLimit(value); return *this;}
    inline WordCloudSortConfiguration& WithCategoryItemsLimit(ItemsLimitConfiguration&& value) { SetCategoryItemsLimit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of group by fields.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetCategorySort() const{ return m_categorySort; }
    inline bool CategorySortHasBeenSet() const { return m_categorySortHasBeenSet; }
    inline void SetCategorySort(const Aws::Vector<FieldSortOptions>& value) { m_categorySortHasBeenSet = true; m_categorySort = value; }
    inline void SetCategorySort(Aws::Vector<FieldSortOptions>&& value) { m_categorySortHasBeenSet = true; m_categorySort = std::move(value); }
    inline WordCloudSortConfiguration& WithCategorySort(const Aws::Vector<FieldSortOptions>& value) { SetCategorySort(value); return *this;}
    inline WordCloudSortConfiguration& WithCategorySort(Aws::Vector<FieldSortOptions>&& value) { SetCategorySort(std::move(value)); return *this;}
    inline WordCloudSortConfiguration& AddCategorySort(const FieldSortOptions& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(value); return *this; }
    inline WordCloudSortConfiguration& AddCategorySort(FieldSortOptions&& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ItemsLimitConfiguration m_categoryItemsLimit;
    bool m_categoryItemsLimitHasBeenSet = false;

    Aws::Vector<FieldSortOptions> m_categorySort;
    bool m_categorySortHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
