/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/NetworkSecurityManagerErrors.h>
#include <aws/network-security-manager/model/ConflictException.h>
#include <aws/network-security-manager/model/ResourceNotFoundException.h>
#include <aws/network-security-manager/model/ServiceQuotaExceededException.h>
#include <aws/network-security-manager/model/ServiceUnavailableException.h>
#include <aws/network-security-manager/model/ThrottlingException.h>
#include <aws/network-security-manager/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::NetworkSecurityManager;
using namespace Aws::NetworkSecurityManager::Model;

namespace Aws {
namespace NetworkSecurityManager {
template <>
AWS_NETWORKSECURITYMANAGER_API ConflictException NetworkSecurityManagerError::GetModeledError() {
  assert(this->GetErrorType() == NetworkSecurityManagerErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template <>
AWS_NETWORKSECURITYMANAGER_API ServiceUnavailableException NetworkSecurityManagerError::GetModeledError() {
  assert(this->GetErrorType() == NetworkSecurityManagerErrors::SERVICE_UNAVAILABLE);
  return ServiceUnavailableException(this->GetJsonPayload().View());
}

template <>
AWS_NETWORKSECURITYMANAGER_API ServiceQuotaExceededException NetworkSecurityManagerError::GetModeledError() {
  assert(this->GetErrorType() == NetworkSecurityManagerErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template <>
AWS_NETWORKSECURITYMANAGER_API ThrottlingException NetworkSecurityManagerError::GetModeledError() {
  assert(this->GetErrorType() == NetworkSecurityManagerErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template <>
AWS_NETWORKSECURITYMANAGER_API ResourceNotFoundException NetworkSecurityManagerError::GetModeledError() {
  assert(this->GetErrorType() == NetworkSecurityManagerErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_NETWORKSECURITYMANAGER_API ValidationException NetworkSecurityManagerError::GetModeledError() {
  assert(this->GetErrorType() == NetworkSecurityManagerErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace NetworkSecurityManagerErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int TAG_POLICY_VIOLATION_HASH = HashingUtils::HashString("TagPolicyViolationException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkSecurityManagerErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == TAG_POLICY_VIOLATION_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkSecurityManagerErrors::TAG_POLICY_VIOLATION), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkSecurityManagerErrors::SERVICE_QUOTA_EXCEEDED),
                                RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkSecurityManagerErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace NetworkSecurityManagerErrorMapper
}  // namespace NetworkSecurityManager
}  // namespace Aws
