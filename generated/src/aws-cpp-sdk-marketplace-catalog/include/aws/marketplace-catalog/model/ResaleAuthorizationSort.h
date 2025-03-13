/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationSortBy.h>
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
   * <p>Allows to sort ResaleAuthorization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ResaleAuthorizationSort">AWS
   * API Reference</a></p>
   */
  class ResaleAuthorizationSort
  {
  public:
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationSort() = default;
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationSort(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationSort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allows to sort ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(ResaleAuthorizationSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ResaleAuthorizationSort& WithSortBy(ResaleAuthorizationSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows to sort ResaleAuthorization.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ResaleAuthorizationSort& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    ResaleAuthorizationSortBy m_sortBy{ResaleAuthorizationSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
