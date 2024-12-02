/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/security-ir/SecurityIRErrorMarshaller.h>
#include <aws/security-ir/SecurityIRErrors.h>

using namespace Aws::Client;
using namespace Aws::SecurityIR;

AWSError<CoreErrors> SecurityIRErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SecurityIRErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}