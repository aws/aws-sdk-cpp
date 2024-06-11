/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/PaginationConfiguration.h>
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
   * <p>The sort configuration of a <code>BoxPlotVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BoxPlotSortConfiguration">AWS
   * API Reference</a></p>
   */
  class BoxPlotSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API BoxPlotSortConfiguration();
    AWS_QUICKSIGHT_API BoxPlotSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BoxPlotSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sort configuration of a group by fields.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetCategorySort() const{ return m_categorySort; }
    inline bool CategorySortHasBeenSet() const { return m_categorySortHasBeenSet; }
    inline void SetCategorySort(const Aws::Vector<FieldSortOptions>& value) { m_categorySortHasBeenSet = true; m_categorySort = value; }
    inline void SetCategorySort(Aws::Vector<FieldSortOptions>&& value) { m_categorySortHasBeenSet = true; m_categorySort = std::move(value); }
    inline BoxPlotSortConfiguration& WithCategorySort(const Aws::Vector<FieldSortOptions>& value) { SetCategorySort(value); return *this;}
    inline BoxPlotSortConfiguration& WithCategorySort(Aws::Vector<FieldSortOptions>&& value) { SetCategorySort(std::move(value)); return *this;}
    inline BoxPlotSortConfiguration& AddCategorySort(const FieldSortOptions& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(value); return *this; }
    inline BoxPlotSortConfiguration& AddCategorySort(FieldSortOptions&& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination configuration of a table visual or box plot.</p>
     */
    inline const PaginationConfiguration& GetPaginationConfiguration() const{ return m_paginationConfiguration; }
    inline bool PaginationConfigurationHasBeenSet() const { return m_paginationConfigurationHasBeenSet; }
    inline void SetPaginationConfiguration(const PaginationConfiguration& value) { m_paginationConfigurationHasBeenSet = true; m_paginationConfiguration = value; }
    inline void SetPaginationConfiguration(PaginationConfiguration&& value) { m_paginationConfigurationHasBeenSet = true; m_paginationConfiguration = std::move(value); }
    inline BoxPlotSortConfiguration& WithPaginationConfiguration(const PaginationConfiguration& value) { SetPaginationConfiguration(value); return *this;}
    inline BoxPlotSortConfiguration& WithPaginationConfiguration(PaginationConfiguration&& value) { SetPaginationConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FieldSortOptions> m_categorySort;
    bool m_categorySortHasBeenSet = false;

    PaginationConfiguration m_paginationConfiguration;
    bool m_paginationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
