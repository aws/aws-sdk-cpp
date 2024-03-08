/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/qbusiness/QBusinessErrorMarshaller.h>
#include <aws/qbusiness/QBusinessErrors.h>

using namespace Aws::Client;
using namespace Aws::QBusiness;

AWSError<CoreErrors> QBusinessErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = QBusinessErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}