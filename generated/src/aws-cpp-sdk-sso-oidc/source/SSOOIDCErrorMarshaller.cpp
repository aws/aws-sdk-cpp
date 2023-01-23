/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/sso-oidc/SSOOIDCErrorMarshaller.h>
#include <aws/sso-oidc/SSOOIDCErrors.h>

using namespace Aws::Client;
using namespace Aws::SSOOIDC;

AWSError<CoreErrors> SSOOIDCErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SSOOIDCErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}