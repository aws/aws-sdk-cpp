/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingErrors.h>
#include <aws/test-new-service-sdk-testing/model/NoSuchResource.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::TestNewServiceSDKTesting;
using namespace Aws::TestNewServiceSDKTesting::Model;

namespace Aws {
namespace TestNewServiceSDKTesting {
template <>
AWS_TESTNEWSERVICESDKTESTING_API NoSuchResource TestNewServiceSDKTestingError::GetModeledError() {
  assert(this->GetErrorType() == TestNewServiceSDKTestingErrors::NO_SUCH_RESOURCE);
  return NoSuchResource(this->GetJsonPayload().View());
}

namespace TestNewServiceSDKTestingErrorMapper {

static const int NO_SUCH_RESOURCE_HASH = HashingUtils::HashString("NoSuchResource");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NO_SUCH_RESOURCE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TestNewServiceSDKTestingErrors::NO_SUCH_RESOURCE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace TestNewServiceSDKTestingErrorMapper
}  // namespace TestNewServiceSDKTesting
}  // namespace Aws
