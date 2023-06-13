/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/verifiedpermissions/VerifiedPermissionsErrorMarshaller.h>
#include <aws/verifiedpermissions/VerifiedPermissionsErrors.h>

using namespace Aws::Client;
using namespace Aws::VerifiedPermissions;

AWSError<CoreErrors> VerifiedPermissionsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = VerifiedPermissionsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}