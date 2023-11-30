/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/AmiProductSortBy.h>
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
   * <p>Objects that allows sorting on AMI products based on certain fields and
   * sorting order.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/AmiProductSort">AWS
   * API Reference</a></p>
   */
  class AmiProductSort
  {
  public:
    AWS_MARKETPLACECATALOG_API AmiProductSort();
    AWS_MARKETPLACECATALOG_API AmiProductSort(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API AmiProductSort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Field to sort the AMI products by.</p>
     */
    inline const AmiProductSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Field to sort the AMI products by.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Field to sort the AMI products by.</p>
     */
    inline void SetSortBy(const AmiProductSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Field to sort the AMI products by.</p>
     */
    inline void SetSortBy(AmiProductSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Field to sort the AMI products by.</p>
     */
    inline AmiProductSort& WithSortBy(const AmiProductSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Field to sort the AMI products by.</p>
     */
    inline AmiProductSort& WithSortBy(AmiProductSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sorting order. Can be <code>ASCENDING</code> or <code>DESCENDING</code>.
     * The default value is <code>DESCENDING</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sorting order. Can be <code>ASCENDING</code> or <code>DESCENDING</code>.
     * The default value is <code>DESCENDING</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sorting order. Can be <code>ASCENDING</code> or <code>DESCENDING</code>.
     * The default value is <code>DESCENDING</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sorting order. Can be <code>ASCENDING</code> or <code>DESCENDING</code>.
     * The default value is <code>DESCENDING</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sorting order. Can be <code>ASCENDING</code> or <code>DESCENDING</code>.
     * The default value is <code>DESCENDING</code>.</p>
     */
    inline AmiProductSort& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sorting order. Can be <code>ASCENDING</code> or <code>DESCENDING</code>.
     * The default value is <code>DESCENDING</code>.</p>
     */
    inline AmiProductSort& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    AmiProductSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
