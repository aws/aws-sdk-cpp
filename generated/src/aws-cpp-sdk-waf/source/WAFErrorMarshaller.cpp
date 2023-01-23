/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/waf/WAFErrorMarshaller.h>
#include <aws/waf/WAFErrors.h>

using namespace Aws::Client;
using namespace Aws::WAF;

AWSError<CoreErrors> WAFErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = WAFErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}