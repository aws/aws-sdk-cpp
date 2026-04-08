/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryErrorMarshaller.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryErrors.h>

using namespace Aws::Client;
using namespace Aws::MarketplaceDiscovery;

AWSError<CoreErrors> MarketplaceDiscoveryErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = MarketplaceDiscoveryErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}