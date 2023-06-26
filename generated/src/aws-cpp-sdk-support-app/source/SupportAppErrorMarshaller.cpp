/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/support-app/SupportAppErrorMarshaller.h>
#include <aws/support-app/SupportAppErrors.h>

using namespace Aws::Client;
using namespace Aws::SupportApp;

AWSError<CoreErrors> SupportAppErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SupportAppErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}