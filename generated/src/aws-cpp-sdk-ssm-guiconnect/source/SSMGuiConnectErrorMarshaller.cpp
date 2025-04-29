/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/ssm-guiconnect/SSMGuiConnectErrorMarshaller.h>
#include <aws/ssm-guiconnect/SSMGuiConnectErrors.h>

using namespace Aws::Client;
using namespace Aws::SSMGuiConnect;

AWSError<CoreErrors> SSMGuiConnectErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SSMGuiConnectErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}