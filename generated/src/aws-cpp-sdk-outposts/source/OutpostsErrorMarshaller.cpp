/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/outposts/OutpostsErrorMarshaller.h>
#include <aws/outposts/OutpostsErrors.h>

using namespace Aws::Client;
using namespace Aws::Outposts;

AWSError<CoreErrors> OutpostsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = OutpostsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}