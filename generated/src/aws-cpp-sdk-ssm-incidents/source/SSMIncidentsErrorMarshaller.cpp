/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/ssm-incidents/SSMIncidentsErrorMarshaller.h>
#include <aws/ssm-incidents/SSMIncidentsErrors.h>

using namespace Aws::Client;
using namespace Aws::SSMIncidents;

AWSError<CoreErrors> SSMIncidentsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SSMIncidentsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}