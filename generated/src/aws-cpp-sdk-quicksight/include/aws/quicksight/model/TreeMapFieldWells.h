/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TreeMapAggregatedFieldWells.h>
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
   * <p>The field wells of a tree map.</p> <p>This is a union type structure. For
   * this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TreeMapFieldWells">AWS
   * API Reference</a></p>
   */
  class TreeMapFieldWells
  {
  public:
    AWS_QUICKSIGHT_API TreeMapFieldWells() = default;
    AWS_QUICKSIGHT_API TreeMapFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TreeMapFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The aggregated field wells of a tree map.</p>
     */
    inline const TreeMapAggregatedFieldWells& GetTreeMapAggregatedFieldWells() const { return m_treeMapAggregatedFieldWells; }
    inline bool TreeMapAggregatedFieldWellsHasBeenSet() const { return m_treeMapAggregatedFieldWellsHasBeenSet; }
    template<typename TreeMapAggregatedFieldWellsT = TreeMapAggregatedFieldWells>
    void SetTreeMapAggregatedFieldWells(TreeMapAggregatedFieldWellsT&& value) { m_treeMapAggregatedFieldWellsHasBeenSet = true; m_treeMapAggregatedFieldWells = std::forward<TreeMapAggregatedFieldWellsT>(value); }
    template<typename TreeMapAggregatedFieldWellsT = TreeMapAggregatedFieldWells>
    TreeMapFieldWells& WithTreeMapAggregatedFieldWells(TreeMapAggregatedFieldWellsT&& value) { SetTreeMapAggregatedFieldWells(std::forward<TreeMapAggregatedFieldWellsT>(value)); return *this;}
    ///@}
  private:

    TreeMapAggregatedFieldWells m_treeMapAggregatedFieldWells;
    bool m_treeMapAggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
