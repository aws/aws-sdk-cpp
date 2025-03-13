/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/DataProductSortBy.h>
#include <aws/marketplace-catalog/model/SortOrder.h>
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
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>Objects that allows sorting on data products based on certain fields and
   * sorting order.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/DataProductSort">AWS
   * API Reference</a></p>
   */
  class DataProductSort
  {
  public:
    AWS_MARKETPLACECATALOG_API DataProductSort() = default;
    AWS_MARKETPLACECATALOG_API DataProductSort(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API DataProductSort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Field to sort the data products by.</p>
     */
    inline DataProductSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(DataProductSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline DataProductSort& WithSortBy(DataProductSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sorting order. Can be <code>ASCENDING</code> or <code>DESCENDING</code>.
     * The default value is <code>DESCENDING</code>.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline DataProductSort& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    DataProductSortBy m_sortBy{DataProductSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
