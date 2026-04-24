/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/nova-act/NovaActErrorMarshaller.h>
#include <aws/nova-act/NovaActErrors.h>

using namespace Aws::Client;
using namespace Aws::NovaAct;

AWSError<CoreErrors> NovaActErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = NovaActErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}