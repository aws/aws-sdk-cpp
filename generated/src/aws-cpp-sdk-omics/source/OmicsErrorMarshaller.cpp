/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/omics/OmicsErrorMarshaller.h>
#include <aws/omics/OmicsErrors.h>

using namespace Aws::Client;
using namespace Aws::Omics;

AWSError<CoreErrors> OmicsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = OmicsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}