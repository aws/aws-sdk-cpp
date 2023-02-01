/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsErrorMarshaller.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsErrors.h>

using namespace Aws::Client;
using namespace Aws::MarketplaceCommerceAnalytics;

AWSError<CoreErrors> MarketplaceCommerceAnalyticsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MarketplaceCommerceAnalyticsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}