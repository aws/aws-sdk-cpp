/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/qapps/QAppsErrorMarshaller.h>
#include <aws/qapps/QAppsErrors.h>

using namespace Aws::Client;
using namespace Aws::QApps;

AWSError<CoreErrors> QAppsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = QAppsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}