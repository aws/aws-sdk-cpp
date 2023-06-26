/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/pricing/PricingErrorMarshaller.h>
#include <aws/pricing/PricingErrors.h>

using namespace Aws::Client;
using namespace Aws::Pricing;

AWSError<CoreErrors> PricingErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = PricingErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}