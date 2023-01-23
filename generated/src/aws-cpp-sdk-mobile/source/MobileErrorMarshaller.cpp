/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/mobile/MobileErrorMarshaller.h>
#include <aws/mobile/MobileErrors.h>

using namespace Aws::Client;
using namespace Aws::Mobile;

AWSError<CoreErrors> MobileErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MobileErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}