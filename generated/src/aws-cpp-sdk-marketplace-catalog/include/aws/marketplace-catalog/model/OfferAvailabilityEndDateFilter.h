/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/OfferAvailabilityEndDateFilterDateRange.h>
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
   * <p>Allows filtering on the <code>AvailabilityEndDate</code> of an
   * offer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/OfferAvailabilityEndDateFilter">AWS
   * API Reference</a></p>
   */
  class OfferAvailabilityEndDateFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API OfferAvailabilityEndDateFilter();
    AWS_MARKETPLACECATALOG_API OfferAvailabilityEndDateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API OfferAvailabilityEndDateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Allows filtering on the <code>AvailabilityEndDate</code> of an offer with
     * date range as input.</p>
     */
    inline const OfferAvailabilityEndDateFilterDateRange& GetDateRange() const{ return m_dateRange; }

    /**
     * <p>Allows filtering on the <code>AvailabilityEndDate</code> of an offer with
     * date range as input.</p>
     */
    inline bool DateRangeHasBeenSet() const { return m_dateRangeHasBeenSet; }

    /**
     * <p>Allows filtering on the <code>AvailabilityEndDate</code> of an offer with
     * date range as input.</p>
     */
    inline void SetDateRange(const OfferAvailabilityEndDateFilterDateRange& value) { m_dateRangeHasBeenSet = true; m_dateRange = value; }

    /**
     * <p>Allows filtering on the <code>AvailabilityEndDate</code> of an offer with
     * date range as input.</p>
     */
    inline void SetDateRange(OfferAvailabilityEndDateFilterDateRange&& value) { m_dateRangeHasBeenSet = true; m_dateRange = std::move(value); }

    /**
     * <p>Allows filtering on the <code>AvailabilityEndDate</code> of an offer with
     * date range as input.</p>
     */
    inline OfferAvailabilityEndDateFilter& WithDateRange(const OfferAvailabilityEndDateFilterDateRange& value) { SetDateRange(value); return *this;}

    /**
     * <p>Allows filtering on the <code>AvailabilityEndDate</code> of an offer with
     * date range as input.</p>
     */
    inline OfferAvailabilityEndDateFilter& WithDateRange(OfferAvailabilityEndDateFilterDateRange&& value) { SetDateRange(std::move(value)); return *this;}

  private:

    OfferAvailabilityEndDateFilterDateRange m_dateRange;
    bool m_dateRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
