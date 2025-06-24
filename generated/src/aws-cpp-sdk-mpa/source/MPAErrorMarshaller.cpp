/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/mpa/MPAErrorMarshaller.h>
#include <aws/mpa/MPAErrors.h>

using namespace Aws::Client;
using namespace Aws::MPA;

AWSError<CoreErrors> MPAErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MPAErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}