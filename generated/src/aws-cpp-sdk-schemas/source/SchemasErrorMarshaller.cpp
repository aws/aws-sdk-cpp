﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/schemas/SchemasErrorMarshaller.h>
#include <aws/schemas/SchemasErrors.h>

using namespace Aws::Client;
using namespace Aws::Schemas;

AWSError<CoreErrors> SchemasErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SchemasErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}