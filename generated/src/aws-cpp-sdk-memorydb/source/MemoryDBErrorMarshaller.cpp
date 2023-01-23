/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/memorydb/MemoryDBErrorMarshaller.h>
#include <aws/memorydb/MemoryDBErrors.h>

using namespace Aws::Client;
using namespace Aws::MemoryDB;

AWSError<CoreErrors> MemoryDBErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MemoryDBErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}