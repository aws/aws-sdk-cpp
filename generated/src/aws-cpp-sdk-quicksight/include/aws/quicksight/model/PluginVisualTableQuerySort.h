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
    AWS_QUICKSIGHT_API PluginVisualTableQuerySort();
    AWS_QUICKSIGHT_API PluginVisualTableQuerySort(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PluginVisualTableQuerySort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines how data is sorted in the response.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetRowSort() const{ return m_rowSort; }
    inline bool RowSortHasBeenSet() const { return m_rowSortHasBeenSet; }
    inline void SetRowSort(const Aws::Vector<FieldSortOptions>& value) { m_rowSortHasBeenSet = true; m_rowSort = value; }
    inline void SetRowSort(Aws::Vector<FieldSortOptions>&& value) { m_rowSortHasBeenSet = true; m_rowSort = std::move(value); }
    inline PluginVisualTableQuerySort& WithRowSort(const Aws::Vector<FieldSortOptions>& value) { SetRowSort(value); return *this;}
    inline PluginVisualTableQuerySort& WithRowSort(Aws::Vector<FieldSortOptions>&& value) { SetRowSort(std::move(value)); return *this;}
    inline PluginVisualTableQuerySort& AddRowSort(const FieldSortOptions& value) { m_rowSortHasBeenSet = true; m_rowSort.push_back(value); return *this; }
    inline PluginVisualTableQuerySort& AddRowSort(FieldSortOptions&& value) { m_rowSortHasBeenSet = true; m_rowSort.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum amount of data to be returned by a query.</p>
     */
    inline const PluginVisualItemsLimitConfiguration& GetItemsLimitConfiguration() const{ return m_itemsLimitConfiguration; }
    inline bool ItemsLimitConfigurationHasBeenSet() const { return m_itemsLimitConfigurationHasBeenSet; }
    inline void SetItemsLimitConfiguration(const PluginVisualItemsLimitConfiguration& value) { m_itemsLimitConfigurationHasBeenSet = true; m_itemsLimitConfiguration = value; }
    inline void SetItemsLimitConfiguration(PluginVisualItemsLimitConfiguration&& value) { m_itemsLimitConfigurationHasBeenSet = true; m_itemsLimitConfiguration = std::move(value); }
    inline PluginVisualTableQuerySort& WithItemsLimitConfiguration(const PluginVisualItemsLimitConfiguration& value) { SetItemsLimitConfiguration(value); return *this;}
    inline PluginVisualTableQuerySort& WithItemsLimitConfiguration(PluginVisualItemsLimitConfiguration&& value) { SetItemsLimitConfiguration(std::move(value)); return *this;}
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
