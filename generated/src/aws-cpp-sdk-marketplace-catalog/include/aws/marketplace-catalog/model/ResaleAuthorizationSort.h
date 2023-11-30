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
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationSort();
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationSort(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationSort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Allows to sort ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Allows to sort ResaleAuthorization.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Allows to sort ResaleAuthorization.</p>
     */
    inline void SetSortBy(const ResaleAuthorizationSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Allows to sort ResaleAuthorization.</p>
     */
    inline void SetSortBy(ResaleAuthorizationSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Allows to sort ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSort& WithSortBy(const ResaleAuthorizationSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Allows to sort ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSort& WithSortBy(ResaleAuthorizationSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>Allows to sort ResaleAuthorization.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>Allows to sort ResaleAuthorization.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>Allows to sort ResaleAuthorization.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>Allows to sort ResaleAuthorization.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>Allows to sort ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSort& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>Allows to sort ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSort& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    ResaleAuthorizationSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
