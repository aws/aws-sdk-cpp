/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/securityhub/SecurityHubErrorMarshaller.h>
#include <aws/securityhub/SecurityHubErrors.h>

using namespace Aws::Client;
using namespace Aws::SecurityHub;

AWSError<CoreErrors> SecurityHubErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SecurityHubErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}