/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/pcs/PCSErrorMarshaller.h>
#include <aws/pcs/PCSErrors.h>

using namespace Aws::Client;
using namespace Aws::PCS;

AWSError<CoreErrors> PCSErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = PCSErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}