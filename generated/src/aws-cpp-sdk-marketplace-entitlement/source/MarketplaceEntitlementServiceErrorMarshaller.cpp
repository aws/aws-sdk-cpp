/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceErrorMarshaller.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::MarketplaceEntitlementService;

AWSError<CoreErrors> MarketplaceEntitlementServiceErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MarketplaceEntitlementServiceErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}