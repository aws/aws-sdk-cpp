/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/workdocs/WorkDocsErrorMarshaller.h>
#include <aws/workdocs/WorkDocsErrors.h>

using namespace Aws::Client;
using namespace Aws::WorkDocs;

AWSError<CoreErrors> WorkDocsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = WorkDocsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}