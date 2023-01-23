/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/qldb-session/QLDBSessionErrorMarshaller.h>
#include <aws/qldb-session/QLDBSessionErrors.h>

using namespace Aws::Client;
using namespace Aws::QLDBSession;

AWSError<CoreErrors> QLDBSessionErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = QLDBSessionErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}