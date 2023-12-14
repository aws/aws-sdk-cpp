/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/neptune-graph/NeptuneGraphErrorMarshaller.h>
#include <aws/neptune-graph/NeptuneGraphErrors.h>

using namespace Aws::Client;
using namespace Aws::NeptuneGraph;

AWSError<CoreErrors> NeptuneGraphErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = NeptuneGraphErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}