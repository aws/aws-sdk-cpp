/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/odb/OdbErrorMarshaller.h>
#include <aws/odb/OdbErrors.h>

using namespace Aws::Client;
using namespace Aws::odb;

AWSError<CoreErrors> OdbErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = OdbErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}