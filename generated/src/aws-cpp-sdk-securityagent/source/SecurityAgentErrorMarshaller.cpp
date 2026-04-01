/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/securityagent/SecurityAgentErrorMarshaller.h>
#include <aws/securityagent/SecurityAgentErrors.h>

using namespace Aws::Client;
using namespace Aws::SecurityAgent;

AWSError<CoreErrors> SecurityAgentErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = SecurityAgentErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}