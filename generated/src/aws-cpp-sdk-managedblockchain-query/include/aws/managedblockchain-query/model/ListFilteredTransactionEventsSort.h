/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/model/ListFilteredTransactionEventsSortBy.h>
#include <aws/managedblockchain-query/model/SortOrder.h>
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
namespace ManagedBlockchainQuery
{
namespace Model
{

  /**
   * <p>Lists all the transaction events for an address on the blockchain.</p> 
   * <p>This operation is only supported on the Bitcoin blockchain networks.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/ListFilteredTransactionEventsSort">AWS
   * API Reference</a></p>
   */
  class ListFilteredTransactionEventsSort
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API ListFilteredTransactionEventsSort();
    AWS_MANAGEDBLOCKCHAINQUERY_API ListFilteredTransactionEventsSort(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API ListFilteredTransactionEventsSort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Container on how the results will be sorted by?</p>
     */
    inline const ListFilteredTransactionEventsSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Container on how the results will be sorted by?</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Container on how the results will be sorted by?</p>
     */
    inline void SetSortBy(const ListFilteredTransactionEventsSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Container on how the results will be sorted by?</p>
     */
    inline void SetSortBy(ListFilteredTransactionEventsSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Container on how the results will be sorted by?</p>
     */
    inline ListFilteredTransactionEventsSort& WithSortBy(const ListFilteredTransactionEventsSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Container on how the results will be sorted by?</p>
     */
    inline ListFilteredTransactionEventsSort& WithSortBy(ListFilteredTransactionEventsSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The container for the <i>sort order</i> for
     * <code>ListFilteredTransactionEvents</code>. The <code>SortOrder</code> field
     * only accepts the values <code>ASCENDING</code> and <code>DESCENDING</code>. Not
     * providing <code>SortOrder</code> will default to <code>ASCENDING</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The container for the <i>sort order</i> for
     * <code>ListFilteredTransactionEvents</code>. The <code>SortOrder</code> field
     * only accepts the values <code>ASCENDING</code> and <code>DESCENDING</code>. Not
     * providing <code>SortOrder</code> will default to <code>ASCENDING</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The container for the <i>sort order</i> for
     * <code>ListFilteredTransactionEvents</code>. The <code>SortOrder</code> field
     * only accepts the values <code>ASCENDING</code> and <code>DESCENDING</code>. Not
     * providing <code>SortOrder</code> will default to <code>ASCENDING</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The container for the <i>sort order</i> for
     * <code>ListFilteredTransactionEvents</code>. The <code>SortOrder</code> field
     * only accepts the values <code>ASCENDING</code> and <code>DESCENDING</code>. Not
     * providing <code>SortOrder</code> will default to <code>ASCENDING</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The container for the <i>sort order</i> for
     * <code>ListFilteredTransactionEvents</code>. The <code>SortOrder</code> field
     * only accepts the values <code>ASCENDING</code> and <code>DESCENDING</code>. Not
     * providing <code>SortOrder</code> will default to <code>ASCENDING</code>.</p>
     */
    inline ListFilteredTransactionEventsSort& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The container for the <i>sort order</i> for
     * <code>ListFilteredTransactionEvents</code>. The <code>SortOrder</code> field
     * only accepts the values <code>ASCENDING</code> and <code>DESCENDING</code>. Not
     * providing <code>SortOrder</code> will default to <code>ASCENDING</code>.</p>
     */
    inline ListFilteredTransactionEventsSort& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    ListFilteredTransactionEventsSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
