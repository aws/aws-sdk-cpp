/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/rds/RDSErrorMarshaller.h>
#include <aws/rds/RDSErrors.h>

using namespace Aws::Client;
using namespace Aws::RDS;

AWSError<CoreErrors> RDSErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = RDSErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}