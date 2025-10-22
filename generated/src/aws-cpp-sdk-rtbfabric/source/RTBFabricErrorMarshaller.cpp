/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/rtbfabric/RTBFabricErrorMarshaller.h>
#include <aws/rtbfabric/RTBFabricErrors.h>

using namespace Aws::Client;
using namespace Aws::RTBFabric;

AWSError<CoreErrors> RTBFabricErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = RTBFabricErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}