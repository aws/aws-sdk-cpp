/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InventoryDeletionSummaryItem.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about the delete operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryDeletionSummary">AWS
   * API Reference</a></p>
   */
  class InventoryDeletionSummary
  {
  public:
    AWS_SSM_API InventoryDeletionSummary();
    AWS_SSM_API InventoryDeletionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InventoryDeletionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of items to delete. This count doesn't change during the
     * delete operation.</p>
     */
    inline int GetTotalCount() const{ return m_totalCount; }
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }
    inline void SetTotalCount(int value) { m_totalCountHasBeenSet = true; m_totalCount = value; }
    inline InventoryDeletionSummary& WithTotalCount(int value) { SetTotalCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Remaining number of items to delete.</p>
     */
    inline int GetRemainingCount() const{ return m_remainingCount; }
    inline bool RemainingCountHasBeenSet() const { return m_remainingCountHasBeenSet; }
    inline void SetRemainingCount(int value) { m_remainingCountHasBeenSet = true; m_remainingCount = value; }
    inline InventoryDeletionSummary& WithRemainingCount(int value) { SetRemainingCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of counts and versions for deleted items.</p>
     */
    inline const Aws::Vector<InventoryDeletionSummaryItem>& GetSummaryItems() const{ return m_summaryItems; }
    inline bool SummaryItemsHasBeenSet() const { return m_summaryItemsHasBeenSet; }
    inline void SetSummaryItems(const Aws::Vector<InventoryDeletionSummaryItem>& value) { m_summaryItemsHasBeenSet = true; m_summaryItems = value; }
    inline void SetSummaryItems(Aws::Vector<InventoryDeletionSummaryItem>&& value) { m_summaryItemsHasBeenSet = true; m_summaryItems = std::move(value); }
    inline InventoryDeletionSummary& WithSummaryItems(const Aws::Vector<InventoryDeletionSummaryItem>& value) { SetSummaryItems(value); return *this;}
    inline InventoryDeletionSummary& WithSummaryItems(Aws::Vector<InventoryDeletionSummaryItem>&& value) { SetSummaryItems(std::move(value)); return *this;}
    inline InventoryDeletionSummary& AddSummaryItems(const InventoryDeletionSummaryItem& value) { m_summaryItemsHasBeenSet = true; m_summaryItems.push_back(value); return *this; }
    inline InventoryDeletionSummary& AddSummaryItems(InventoryDeletionSummaryItem&& value) { m_summaryItemsHasBeenSet = true; m_summaryItems.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_totalCount;
    bool m_totalCountHasBeenSet = false;

    int m_remainingCount;
    bool m_remainingCountHasBeenSet = false;

    Aws::Vector<InventoryDeletionSummaryItem> m_summaryItems;
    bool m_summaryItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
