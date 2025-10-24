﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rum/CloudWatchRUMErrors.h>
#include <aws/rum/model/ConflictException.h>
#include <aws/rum/model/InternalServerException.h>
#include <aws/rum/model/ResourceNotFoundException.h>
#include <aws/rum/model/ThrottlingException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudWatchRUM;
using namespace Aws::CloudWatchRUM::Model;

namespace Aws {
namespace CloudWatchRUM {
template <>
AWS_CLOUDWATCHRUM_API ConflictException CloudWatchRUMError::GetModeledError() {
  assert(this->GetErrorType() == CloudWatchRUMErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template <>
AWS_CLOUDWATCHRUM_API ThrottlingException CloudWatchRUMError::GetModeledError() {
  assert(this->GetErrorType() == CloudWatchRUMErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template <>
AWS_CLOUDWATCHRUM_API ResourceNotFoundException CloudWatchRUMError::GetModeledError() {
  assert(this->GetErrorType() == CloudWatchRUMErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_CLOUDWATCHRUM_API InternalServerException CloudWatchRUMError::GetModeledError() {
  assert(this->GetErrorType() == CloudWatchRUMErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

namespace CloudWatchRUMErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int MALFORMED_POLICY_DOCUMENT_HASH = HashingUtils::HashString("MalformedPolicyDocumentException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int POLICY_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("PolicySizeLimitExceededException");
static const int INVALID_POLICY_REVISION_ID_HASH = HashingUtils::HashString("InvalidPolicyRevisionIdException");
static const int POLICY_NOT_FOUND_HASH = HashingUtils::HashString("PolicyNotFoundException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchRUMErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == MALFORMED_POLICY_DOCUMENT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchRUMErrors::MALFORMED_POLICY_DOCUMENT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchRUMErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchRUMErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  } else if (hashCode == POLICY_SIZE_LIMIT_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchRUMErrors::POLICY_SIZE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INVALID_POLICY_REVISION_ID_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchRUMErrors::INVALID_POLICY_REVISION_ID), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == POLICY_NOT_FOUND_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchRUMErrors::POLICY_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace CloudWatchRUMErrorMapper
}  // namespace CloudWatchRUM
}  // namespace Aws
