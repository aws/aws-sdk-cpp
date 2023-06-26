/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/textract/TextractErrorMarshaller.h>
#include <aws/textract/TextractErrors.h>

using namespace Aws::Client;
using namespace Aws::Textract;

AWSError<CoreErrors> TextractErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = TextractErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}