/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/opensearchmemory/OpenSearchMemoryErrorMarshaller.h>
#include <aws/opensearchmemory/OpenSearchMemoryErrors.h>

using namespace Aws::Client;
using namespace Aws::OpenSearchMemory;

AWSError<CoreErrors> OpenSearchMemoryErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = OpenSearchMemoryErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}