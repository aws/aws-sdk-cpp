/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/model/ListTransactionsSortBy.h>
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
   * <p>The container for determining how the list transaction result will be
   * sorted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/ListTransactionsSort">AWS
   * API Reference</a></p>
   */
  class ListTransactionsSort
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTransactionsSort();
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTransactionsSort(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTransactionsSort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defaults to the value <code>TRANSACTION_TIMESTAMP</code>.</p>
     */
    inline const ListTransactionsSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Defaults to the value <code>TRANSACTION_TIMESTAMP</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Defaults to the value <code>TRANSACTION_TIMESTAMP</code>.</p>
     */
    inline void SetSortBy(const ListTransactionsSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Defaults to the value <code>TRANSACTION_TIMESTAMP</code>.</p>
     */
    inline void SetSortBy(ListTransactionsSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Defaults to the value <code>TRANSACTION_TIMESTAMP</code>.</p>
     */
    inline ListTransactionsSort& WithSortBy(const ListTransactionsSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Defaults to the value <code>TRANSACTION_TIMESTAMP</code>.</p>
     */
    inline ListTransactionsSort& WithSortBy(ListTransactionsSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The container for the <i>sort order</i> for <code>ListTransactions</code>.
     * The <code>SortOrder</code> field only accepts the values <code>ASCENDING</code>
     * and <code>DESCENDING</code>. Not providing <code>SortOrder</code> will default
     * to <code>ASCENDING</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The container for the <i>sort order</i> for <code>ListTransactions</code>.
     * The <code>SortOrder</code> field only accepts the values <code>ASCENDING</code>
     * and <code>DESCENDING</code>. Not providing <code>SortOrder</code> will default
     * to <code>ASCENDING</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The container for the <i>sort order</i> for <code>ListTransactions</code>.
     * The <code>SortOrder</code> field only accepts the values <code>ASCENDING</code>
     * and <code>DESCENDING</code>. Not providing <code>SortOrder</code> will default
     * to <code>ASCENDING</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The container for the <i>sort order</i> for <code>ListTransactions</code>.
     * The <code>SortOrder</code> field only accepts the values <code>ASCENDING</code>
     * and <code>DESCENDING</code>. Not providing <code>SortOrder</code> will default
     * to <code>ASCENDING</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The container for the <i>sort order</i> for <code>ListTransactions</code>.
     * The <code>SortOrder</code> field only accepts the values <code>ASCENDING</code>
     * and <code>DESCENDING</code>. Not providing <code>SortOrder</code> will default
     * to <code>ASCENDING</code>.</p>
     */
    inline ListTransactionsSort& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The container for the <i>sort order</i> for <code>ListTransactions</code>.
     * The <code>SortOrder</code> field only accepts the values <code>ASCENDING</code>
     * and <code>DESCENDING</code>. Not providing <code>SortOrder</code> will default
     * to <code>ASCENDING</code>.</p>
     */
    inline ListTransactionsSort& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    ListTransactionsSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
