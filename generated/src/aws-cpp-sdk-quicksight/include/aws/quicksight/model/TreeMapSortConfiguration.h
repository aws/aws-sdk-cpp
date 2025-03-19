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
   * <p>The sort configuration of a tree map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TreeMapSortConfiguration">AWS
   * API Reference</a></p>
   */
  class TreeMapSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API TreeMapSortConfiguration() = default;
    AWS_QUICKSIGHT_API TreeMapSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TreeMapSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sort configuration of group by fields.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetTreeMapSort() const { return m_treeMapSort; }
    inline bool TreeMapSortHasBeenSet() const { return m_treeMapSortHasBeenSet; }
    template<typename TreeMapSortT = Aws::Vector<FieldSortOptions>>
    void SetTreeMapSort(TreeMapSortT&& value) { m_treeMapSortHasBeenSet = true; m_treeMapSort = std::forward<TreeMapSortT>(value); }
    template<typename TreeMapSortT = Aws::Vector<FieldSortOptions>>
    TreeMapSortConfiguration& WithTreeMapSort(TreeMapSortT&& value) { SetTreeMapSort(std::forward<TreeMapSortT>(value)); return *this;}
    template<typename TreeMapSortT = FieldSortOptions>
    TreeMapSortConfiguration& AddTreeMapSort(TreeMapSortT&& value) { m_treeMapSortHasBeenSet = true; m_treeMapSort.emplace_back(std::forward<TreeMapSortT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The limit on the number of groups that are displayed.</p>
     */
    inline const ItemsLimitConfiguration& GetTreeMapGroupItemsLimitConfiguration() const { return m_treeMapGroupItemsLimitConfiguration; }
    inline bool TreeMapGroupItemsLimitConfigurationHasBeenSet() const { return m_treeMapGroupItemsLimitConfigurationHasBeenSet; }
    template<typename TreeMapGroupItemsLimitConfigurationT = ItemsLimitConfiguration>
    void SetTreeMapGroupItemsLimitConfiguration(TreeMapGroupItemsLimitConfigurationT&& value) { m_treeMapGroupItemsLimitConfigurationHasBeenSet = true; m_treeMapGroupItemsLimitConfiguration = std::forward<TreeMapGroupItemsLimitConfigurationT>(value); }
    template<typename TreeMapGroupItemsLimitConfigurationT = ItemsLimitConfiguration>
    TreeMapSortConfiguration& WithTreeMapGroupItemsLimitConfiguration(TreeMapGroupItemsLimitConfigurationT&& value) { SetTreeMapGroupItemsLimitConfiguration(std::forward<TreeMapGroupItemsLimitConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FieldSortOptions> m_treeMapSort;
    bool m_treeMapSortHasBeenSet = false;

    ItemsLimitConfiguration m_treeMapGroupItemsLimitConfiguration;
    bool m_treeMapGroupItemsLimitConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
