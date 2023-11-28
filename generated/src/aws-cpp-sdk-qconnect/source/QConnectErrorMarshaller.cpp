/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/qconnect/QConnectErrorMarshaller.h>
#include <aws/qconnect/QConnectErrors.h>

using namespace Aws::Client;
using namespace Aws::QConnect;

AWSError<CoreErrors> QConnectErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = QConnectErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}