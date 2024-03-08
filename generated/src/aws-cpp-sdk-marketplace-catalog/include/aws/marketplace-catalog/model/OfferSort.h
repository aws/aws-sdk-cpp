/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/OfferSortBy.h>
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
   * <p>Allows to sort offers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/OfferSort">AWS
   * API Reference</a></p>
   */
  class OfferSort
  {
  public:
    AWS_MARKETPLACECATALOG_API OfferSort();
    AWS_MARKETPLACECATALOG_API OfferSort(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API OfferSort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Allows to sort offers.</p>
     */
    inline const OfferSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Allows to sort offers.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Allows to sort offers.</p>
     */
    inline void SetSortBy(const OfferSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Allows to sort offers.</p>
     */
    inline void SetSortBy(OfferSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Allows to sort offers.</p>
     */
    inline OfferSort& WithSortBy(const OfferSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Allows to sort offers.</p>
     */
    inline OfferSort& WithSortBy(OfferSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>Allows to sort offers.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>Allows to sort offers.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>Allows to sort offers.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>Allows to sort offers.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>Allows to sort offers.</p>
     */
    inline OfferSort& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>Allows to sort offers.</p>
     */
    inline OfferSort& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    OfferSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
