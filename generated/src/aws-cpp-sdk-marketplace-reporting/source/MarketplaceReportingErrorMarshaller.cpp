/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/marketplace-reporting/MarketplaceReportingErrorMarshaller.h>
#include <aws/marketplace-reporting/MarketplaceReportingErrors.h>

using namespace Aws::Client;
using namespace Aws::MarketplaceReporting;

AWSError<CoreErrors> MarketplaceReportingErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MarketplaceReportingErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}