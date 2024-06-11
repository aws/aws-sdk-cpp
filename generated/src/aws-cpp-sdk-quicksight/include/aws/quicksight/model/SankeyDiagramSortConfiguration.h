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
    AWS_QUICKSIGHT_API SankeyDiagramSortConfiguration();
    AWS_QUICKSIGHT_API SankeyDiagramSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SankeyDiagramSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sort configuration of the weight fields.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetWeightSort() const{ return m_weightSort; }
    inline bool WeightSortHasBeenSet() const { return m_weightSortHasBeenSet; }
    inline void SetWeightSort(const Aws::Vector<FieldSortOptions>& value) { m_weightSortHasBeenSet = true; m_weightSort = value; }
    inline void SetWeightSort(Aws::Vector<FieldSortOptions>&& value) { m_weightSortHasBeenSet = true; m_weightSort = std::move(value); }
    inline SankeyDiagramSortConfiguration& WithWeightSort(const Aws::Vector<FieldSortOptions>& value) { SetWeightSort(value); return *this;}
    inline SankeyDiagramSortConfiguration& WithWeightSort(Aws::Vector<FieldSortOptions>&& value) { SetWeightSort(std::move(value)); return *this;}
    inline SankeyDiagramSortConfiguration& AddWeightSort(const FieldSortOptions& value) { m_weightSortHasBeenSet = true; m_weightSort.push_back(value); return *this; }
    inline SankeyDiagramSortConfiguration& AddWeightSort(FieldSortOptions&& value) { m_weightSortHasBeenSet = true; m_weightSort.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The limit on the number of source nodes that are displayed in a sankey
     * diagram.</p>
     */
    inline const ItemsLimitConfiguration& GetSourceItemsLimit() const{ return m_sourceItemsLimit; }
    inline bool SourceItemsLimitHasBeenSet() const { return m_sourceItemsLimitHasBeenSet; }
    inline void SetSourceItemsLimit(const ItemsLimitConfiguration& value) { m_sourceItemsLimitHasBeenSet = true; m_sourceItemsLimit = value; }
    inline void SetSourceItemsLimit(ItemsLimitConfiguration&& value) { m_sourceItemsLimitHasBeenSet = true; m_sourceItemsLimit = std::move(value); }
    inline SankeyDiagramSortConfiguration& WithSourceItemsLimit(const ItemsLimitConfiguration& value) { SetSourceItemsLimit(value); return *this;}
    inline SankeyDiagramSortConfiguration& WithSourceItemsLimit(ItemsLimitConfiguration&& value) { SetSourceItemsLimit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The limit on the number of destination nodes that are displayed in a sankey
     * diagram.</p>
     */
    inline const ItemsLimitConfiguration& GetDestinationItemsLimit() const{ return m_destinationItemsLimit; }
    inline bool DestinationItemsLimitHasBeenSet() const { return m_destinationItemsLimitHasBeenSet; }
    inline void SetDestinationItemsLimit(const ItemsLimitConfiguration& value) { m_destinationItemsLimitHasBeenSet = true; m_destinationItemsLimit = value; }
    inline void SetDestinationItemsLimit(ItemsLimitConfiguration&& value) { m_destinationItemsLimitHasBeenSet = true; m_destinationItemsLimit = std::move(value); }
    inline SankeyDiagramSortConfiguration& WithDestinationItemsLimit(const ItemsLimitConfiguration& value) { SetDestinationItemsLimit(value); return *this;}
    inline SankeyDiagramSortConfiguration& WithDestinationItemsLimit(ItemsLimitConfiguration&& value) { SetDestinationItemsLimit(std::move(value)); return *this;}
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
