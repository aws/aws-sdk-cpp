/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/swf/SWFErrorMarshaller.h>
#include <aws/swf/SWFErrors.h>

using namespace Aws::Client;
using namespace Aws::SWF;

AWSError<CoreErrors> SWFErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SWFErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}