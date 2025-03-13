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
   * <p>The sort configuration for a <code>TableVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableSortConfiguration">AWS
   * API Reference</a></p>
   */
  class TableSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API TableSortConfiguration() = default;
    AWS_QUICKSIGHT_API TableSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field sort options for rows in the table.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetRowSort() const { return m_rowSort; }
    inline bool RowSortHasBeenSet() const { return m_rowSortHasBeenSet; }
    template<typename RowSortT = Aws::Vector<FieldSortOptions>>
    void SetRowSort(RowSortT&& value) { m_rowSortHasBeenSet = true; m_rowSort = std::forward<RowSortT>(value); }
    template<typename RowSortT = Aws::Vector<FieldSortOptions>>
    TableSortConfiguration& WithRowSort(RowSortT&& value) { SetRowSort(std::forward<RowSortT>(value)); return *this;}
    template<typename RowSortT = FieldSortOptions>
    TableSortConfiguration& AddRowSort(RowSortT&& value) { m_rowSortHasBeenSet = true; m_rowSort.emplace_back(std::forward<RowSortT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination configuration (page size, page number) for the table.</p>
     */
    inline const PaginationConfiguration& GetPaginationConfiguration() const { return m_paginationConfiguration; }
    inline bool PaginationConfigurationHasBeenSet() const { return m_paginationConfigurationHasBeenSet; }
    template<typename PaginationConfigurationT = PaginationConfiguration>
    void SetPaginationConfiguration(PaginationConfigurationT&& value) { m_paginationConfigurationHasBeenSet = true; m_paginationConfiguration = std::forward<PaginationConfigurationT>(value); }
    template<typename PaginationConfigurationT = PaginationConfiguration>
    TableSortConfiguration& WithPaginationConfiguration(PaginationConfigurationT&& value) { SetPaginationConfiguration(std::forward<PaginationConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FieldSortOptions> m_rowSort;
    bool m_rowSortHasBeenSet = false;

    PaginationConfiguration m_paginationConfiguration;
    bool m_paginationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
