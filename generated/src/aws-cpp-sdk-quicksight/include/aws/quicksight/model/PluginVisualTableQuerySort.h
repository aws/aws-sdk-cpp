/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/PluginVisualItemsLimitConfiguration.h>
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
   * <p>The table query sorting options for the plugin visual.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PluginVisualTableQuerySort">AWS
   * API Reference</a></p>
   */
  class PluginVisualTableQuerySort
  {
  public:
    AWS_QUICKSIGHT_API PluginVisualTableQuerySort() = default;
    AWS_QUICKSIGHT_API PluginVisualTableQuerySort(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PluginVisualTableQuerySort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines how data is sorted in the response.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetRowSort() const { return m_rowSort; }
    inline bool RowSortHasBeenSet() const { return m_rowSortHasBeenSet; }
    template<typename RowSortT = Aws::Vector<FieldSortOptions>>
    void SetRowSort(RowSortT&& value) { m_rowSortHasBeenSet = true; m_rowSort = std::forward<RowSortT>(value); }
    template<typename RowSortT = Aws::Vector<FieldSortOptions>>
    PluginVisualTableQuerySort& WithRowSort(RowSortT&& value) { SetRowSort(std::forward<RowSortT>(value)); return *this;}
    template<typename RowSortT = FieldSortOptions>
    PluginVisualTableQuerySort& AddRowSort(RowSortT&& value) { m_rowSortHasBeenSet = true; m_rowSort.emplace_back(std::forward<RowSortT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum amount of data to be returned by a query.</p>
     */
    inline const PluginVisualItemsLimitConfiguration& GetItemsLimitConfiguration() const { return m_itemsLimitConfiguration; }
    inline bool ItemsLimitConfigurationHasBeenSet() const { return m_itemsLimitConfigurationHasBeenSet; }
    template<typename ItemsLimitConfigurationT = PluginVisualItemsLimitConfiguration>
    void SetItemsLimitConfiguration(ItemsLimitConfigurationT&& value) { m_itemsLimitConfigurationHasBeenSet = true; m_itemsLimitConfiguration = std::forward<ItemsLimitConfigurationT>(value); }
    template<typename ItemsLimitConfigurationT = PluginVisualItemsLimitConfiguration>
    PluginVisualTableQuerySort& WithItemsLimitConfiguration(ItemsLimitConfigurationT&& value) { SetItemsLimitConfiguration(std::forward<ItemsLimitConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FieldSortOptions> m_rowSort;
    bool m_rowSortHasBeenSet = false;

    PluginVisualItemsLimitConfiguration m_itemsLimitConfiguration;
    bool m_itemsLimitConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
