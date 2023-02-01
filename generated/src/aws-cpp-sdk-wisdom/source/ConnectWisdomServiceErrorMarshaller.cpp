/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/wisdom/ConnectWisdomServiceErrorMarshaller.h>
#include <aws/wisdom/ConnectWisdomServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::ConnectWisdomService;

AWSError<CoreErrors> ConnectWisdomServiceErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ConnectWisdomServiceErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}