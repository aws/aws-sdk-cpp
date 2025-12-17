/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingErrorMarshaller.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingErrors.h>

using namespace Aws::Client;
using namespace Aws::TestNewServiceSDKTesting;

AWSError<CoreErrors> TestNewServiceSDKTestingErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = TestNewServiceSDKTestingErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}