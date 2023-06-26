/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/sso-admin/SSOAdminErrorMarshaller.h>
#include <aws/sso-admin/SSOAdminErrors.h>

using namespace Aws::Client;
using namespace Aws::SSOAdmin;

AWSError<CoreErrors> SSOAdminErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SSOAdminErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}