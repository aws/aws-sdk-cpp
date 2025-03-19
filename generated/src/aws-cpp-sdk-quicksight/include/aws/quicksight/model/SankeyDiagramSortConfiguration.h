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
   * <p>The sort configuration of a sankey diagram.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SankeyDiagramSortConfiguration">AWS
   * API Reference</a></p>
   */
  class SankeyDiagramSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API SankeyDiagramSortConfiguration() = default;
    AWS_QUICKSIGHT_API SankeyDiagramSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SankeyDiagramSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sort configuration of the weight fields.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetWeightSort() const { return m_weightSort; }
    inline bool WeightSortHasBeenSet() const { return m_weightSortHasBeenSet; }
    template<typename WeightSortT = Aws::Vector<FieldSortOptions>>
    void SetWeightSort(WeightSortT&& value) { m_weightSortHasBeenSet = true; m_weightSort = std::forward<WeightSortT>(value); }
    template<typename WeightSortT = Aws::Vector<FieldSortOptions>>
    SankeyDiagramSortConfiguration& WithWeightSort(WeightSortT&& value) { SetWeightSort(std::forward<WeightSortT>(value)); return *this;}
    template<typename WeightSortT = FieldSortOptions>
    SankeyDiagramSortConfiguration& AddWeightSort(WeightSortT&& value) { m_weightSortHasBeenSet = true; m_weightSort.emplace_back(std::forward<WeightSortT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The limit on the number of source nodes that are displayed in a sankey
     * diagram.</p>
     */
    inline const ItemsLimitConfiguration& GetSourceItemsLimit() const { return m_sourceItemsLimit; }
    inline bool SourceItemsLimitHasBeenSet() const { return m_sourceItemsLimitHasBeenSet; }
    template<typename SourceItemsLimitT = ItemsLimitConfiguration>
    void SetSourceItemsLimit(SourceItemsLimitT&& value) { m_sourceItemsLimitHasBeenSet = true; m_sourceItemsLimit = std::forward<SourceItemsLimitT>(value); }
    template<typename SourceItemsLimitT = ItemsLimitConfiguration>
    SankeyDiagramSortConfiguration& WithSourceItemsLimit(SourceItemsLimitT&& value) { SetSourceItemsLimit(std::forward<SourceItemsLimitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The limit on the number of destination nodes that are displayed in a sankey
     * diagram.</p>
     */
    inline const ItemsLimitConfiguration& GetDestinationItemsLimit() const { return m_destinationItemsLimit; }
    inline bool DestinationItemsLimitHasBeenSet() const { return m_destinationItemsLimitHasBeenSet; }
    template<typename DestinationItemsLimitT = ItemsLimitConfiguration>
    void SetDestinationItemsLimit(DestinationItemsLimitT&& value) { m_destinationItemsLimitHasBeenSet = true; m_destinationItemsLimit = std::forward<DestinationItemsLimitT>(value); }
    template<typename DestinationItemsLimitT = ItemsLimitConfiguration>
    SankeyDiagramSortConfiguration& WithDestinationItemsLimit(DestinationItemsLimitT&& value) { SetDestinationItemsLimit(std::forward<DestinationItemsLimitT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FieldSortOptions> m_weightSort;
    bool m_weightSortHasBeenSet = false;

    ItemsLimitConfiguration m_sourceItemsLimit;
    bool m_sourceItemsLimitHasBeenSet = false;

    ItemsLimitConfiguration m_destinationItemsLimit;
    bool m_destinationItemsLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
