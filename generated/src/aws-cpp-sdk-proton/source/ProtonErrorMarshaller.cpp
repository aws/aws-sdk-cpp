/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/proton/ProtonErrorMarshaller.h>
#include <aws/proton/ProtonErrors.h>

using namespace Aws::Client;
using namespace Aws::Proton;

AWSError<CoreErrors> ProtonErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ProtonErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}