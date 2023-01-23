/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/oam/OAMErrorMarshaller.h>
#include <aws/oam/OAMErrors.h>

using namespace Aws::Client;
using namespace Aws::OAM;

AWSError<CoreErrors> OAMErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = OAMErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}