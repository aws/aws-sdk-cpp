/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/OfferLastModifiedDateFilterDateRange.h>
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
   * <p>Allows filtering on the <code>LastModifiedDate</code> of an
   * offer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/OfferLastModifiedDateFilter">AWS
   * API Reference</a></p>
   */
  class OfferLastModifiedDateFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API OfferLastModifiedDateFilter();
    AWS_MARKETPLACECATALOG_API OfferLastModifiedDateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API OfferLastModifiedDateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer with date
     * range as input.</p>
     */
    inline const OfferLastModifiedDateFilterDateRange& GetDateRange() const{ return m_dateRange; }

    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer with date
     * range as input.</p>
     */
    inline bool DateRangeHasBeenSet() const { return m_dateRangeHasBeenSet; }

    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer with date
     * range as input.</p>
     */
    inline void SetDateRange(const OfferLastModifiedDateFilterDateRange& value) { m_dateRangeHasBeenSet = true; m_dateRange = value; }

    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer with date
     * range as input.</p>
     */
    inline void SetDateRange(OfferLastModifiedDateFilterDateRange&& value) { m_dateRangeHasBeenSet = true; m_dateRange = std::move(value); }

    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer with date
     * range as input.</p>
     */
    inline OfferLastModifiedDateFilter& WithDateRange(const OfferLastModifiedDateFilterDateRange& value) { SetDateRange(value); return *this;}

    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer with date
     * range as input.</p>
     */
    inline OfferLastModifiedDateFilter& WithDateRange(OfferLastModifiedDateFilterDateRange&& value) { SetDateRange(std::move(value)); return *this;}

  private:

    OfferLastModifiedDateFilterDateRange m_dateRange;
    bool m_dateRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
