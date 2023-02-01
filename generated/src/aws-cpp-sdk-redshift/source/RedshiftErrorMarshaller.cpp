/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/redshift/RedshiftErrorMarshaller.h>
#include <aws/redshift/RedshiftErrors.h>

using namespace Aws::Client;
using namespace Aws::Redshift;

AWSError<CoreErrors> RedshiftErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = RedshiftErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}