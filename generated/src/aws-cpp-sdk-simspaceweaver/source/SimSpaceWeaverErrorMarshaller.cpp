/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/simspaceweaver/SimSpaceWeaverErrorMarshaller.h>
#include <aws/simspaceweaver/SimSpaceWeaverErrors.h>

using namespace Aws::Client;
using namespace Aws::SimSpaceWeaver;

AWSError<CoreErrors> SimSpaceWeaverErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SimSpaceWeaverErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}