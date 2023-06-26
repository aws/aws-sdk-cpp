/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/osis/OSISErrorMarshaller.h>
#include <aws/osis/OSISErrors.h>

using namespace Aws::Client;
using namespace Aws::OSIS;

AWSError<CoreErrors> OSISErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = OSISErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}