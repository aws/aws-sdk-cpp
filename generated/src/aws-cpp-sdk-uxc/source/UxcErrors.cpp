/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/uxc/UxcErrors.h>
#include <aws/uxc/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::uxc;
using namespace Aws::uxc::Model;

namespace Aws {
namespace uxc {
template <>
AWS_UXC_API ValidationException UxcError::GetModeledError() {
  assert(this->GetErrorType() == UxcErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace UxcErrorMapper {

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(UxcErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace UxcErrorMapper
}  // namespace uxc
}  // namespace Aws
