/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/tnb/TnbErrorMarshaller.h>
#include <aws/tnb/TnbErrors.h>

using namespace Aws::Client;
using namespace Aws::tnb;

AWSError<CoreErrors> TnbErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = TnbErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}