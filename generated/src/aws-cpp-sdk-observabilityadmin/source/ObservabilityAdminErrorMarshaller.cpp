/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/observabilityadmin/ObservabilityAdminErrorMarshaller.h>
#include <aws/observabilityadmin/ObservabilityAdminErrors.h>

using namespace Aws::Client;
using namespace Aws::ObservabilityAdmin;

AWSError<CoreErrors> ObservabilityAdminErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ObservabilityAdminErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}