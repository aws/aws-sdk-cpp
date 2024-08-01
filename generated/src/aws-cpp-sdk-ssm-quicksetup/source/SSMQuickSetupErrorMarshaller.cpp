/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/ssm-quicksetup/SSMQuickSetupErrorMarshaller.h>
#include <aws/ssm-quicksetup/SSMQuickSetupErrors.h>

using namespace Aws::Client;
using namespace Aws::SSMQuickSetup;

AWSError<CoreErrors> SSMQuickSetupErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SSMQuickSetupErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}