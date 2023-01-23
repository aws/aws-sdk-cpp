﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/neptune/NeptuneErrorMarshaller.h>
#include <aws/neptune/NeptuneErrors.h>

using namespace Aws::Client;
using namespace Aws::Neptune;

AWSError<CoreErrors> NeptuneErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = NeptuneErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}