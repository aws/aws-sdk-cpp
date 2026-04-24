/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/SecurityAgentErrors.h>
#include <aws/securityagent/model/ThrottlingException.h>
#include <aws/securityagent/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SecurityAgent;
using namespace Aws::SecurityAgent::Model;

namespace Aws {
namespace SecurityAgent {
template <>
AWS_SECURITYAGENT_API ThrottlingException SecurityAgentError::GetModeledError() {
  assert(this->GetErrorType() == SecurityAgentErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template <>
AWS_SECURITYAGENT_API ValidationException SecurityAgentError::GetModeledError() {
  assert(this->GetErrorType() == SecurityAgentErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace SecurityAgentErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityAgentErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityAgentErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace SecurityAgentErrorMapper
}  // namespace SecurityAgent
}  // namespace Aws
