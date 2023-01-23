/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/sdb/SimpleDBErrorMarshaller.h>
#include <aws/sdb/SimpleDBErrors.h>

using namespace Aws::Client;
using namespace Aws::SimpleDB;

AWSError<CoreErrors> SimpleDBErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SimpleDBErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}