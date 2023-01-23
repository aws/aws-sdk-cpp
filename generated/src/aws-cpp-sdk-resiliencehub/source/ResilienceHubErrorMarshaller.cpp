/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/resiliencehub/ResilienceHubErrorMarshaller.h>
#include <aws/resiliencehub/ResilienceHubErrors.h>

using namespace Aws::Client;
using namespace Aws::ResilienceHub;

AWSError<CoreErrors> ResilienceHubErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ResilienceHubErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}