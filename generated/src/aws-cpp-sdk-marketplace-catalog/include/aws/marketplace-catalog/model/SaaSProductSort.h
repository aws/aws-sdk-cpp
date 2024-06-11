﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/SaaSProductSortBy.h>
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
   * <p>Objects that allows sorting on SaaS products based on certain fields and
   * sorting order.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/SaaSProductSort">AWS
   * API Reference</a></p>
   */
  class SaaSProductSort
  {
  public:
    AWS_MARKETPLACECATALOG_API SaaSProductSort();
    AWS_MARKETPLACECATALOG_API SaaSProductSort(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API SaaSProductSort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Field to sort the SaaS products by.</p>
     */
    inline const SaaSProductSortBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const SaaSProductSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(SaaSProductSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline SaaSProductSort& WithSortBy(const SaaSProductSortBy& value) { SetSortBy(value); return *this;}
    inline SaaSProductSort& WithSortBy(SaaSProductSortBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sorting order. Can be <code>ASCENDING</code> or <code>DESCENDING</code>.
     * The default value is <code>DESCENDING</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline SaaSProductSort& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline SaaSProductSort& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}
  private:

    SaaSProductSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
