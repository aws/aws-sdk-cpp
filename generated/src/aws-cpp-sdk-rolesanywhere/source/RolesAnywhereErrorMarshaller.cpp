/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/rolesanywhere/RolesAnywhereErrorMarshaller.h>
#include <aws/rolesanywhere/RolesAnywhereErrors.h>

using namespace Aws::Client;
using namespace Aws::RolesAnywhere;

AWSError<CoreErrors> RolesAnywhereErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = RolesAnywhereErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}