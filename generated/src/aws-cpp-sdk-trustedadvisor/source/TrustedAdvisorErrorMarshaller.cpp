/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/trustedadvisor/TrustedAdvisorErrorMarshaller.h>
#include <aws/trustedadvisor/TrustedAdvisorErrors.h>

using namespace Aws::Client;
using namespace Aws::TrustedAdvisor;

AWSError<CoreErrors> TrustedAdvisorErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = TrustedAdvisorErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}