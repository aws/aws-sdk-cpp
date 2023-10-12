/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MarketplaceCommerceAnalytics;

namespace Aws
{
namespace MarketplaceCommerceAnalytics
{
namespace MarketplaceCommerceAnalyticsErrorMapper
{

static constexpr uint32_t MARKETPLACE_COMMERCE_ANALYTICS_HASH = ConstExprHashingUtils::HashString("MarketplaceCommerceAnalyticsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == MARKETPLACE_COMMERCE_ANALYTICS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceCommerceAnalyticsErrors::MARKETPLACE_COMMERCE_ANALYTICS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MarketplaceCommerceAnalyticsErrorMapper
} // namespace MarketplaceCommerceAnalytics
} // namespace Aws
