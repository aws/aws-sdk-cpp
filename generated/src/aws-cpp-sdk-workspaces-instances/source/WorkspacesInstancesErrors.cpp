/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/workspaces-instances/WorkspacesInstancesErrors.h>
#include <aws/workspaces-instances/model/ConflictException.h>
#include <aws/workspaces-instances/model/InternalServerException.h>
#include <aws/workspaces-instances/model/ResourceNotFoundException.h>
#include <aws/workspaces-instances/model/ServiceQuotaExceededException.h>
#include <aws/workspaces-instances/model/ThrottlingException.h>
#include <aws/workspaces-instances/model/ValidationException.h>
#include <aws/workspaces-instances/model/VolumeModificationRateExceededException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::WorkspacesInstances;
using namespace Aws::WorkspacesInstances::Model;

namespace Aws {
namespace WorkspacesInstances {
template <>
AWS_WORKSPACESINSTANCES_API ConflictException WorkspacesInstancesError::GetModeledError() {
  assert(this->GetErrorType() == WorkspacesInstancesErrors::CONFLICT);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ConflictException(payload.GetDecoder());
}

template <>
AWS_WORKSPACESINSTANCES_API ThrottlingException WorkspacesInstancesError::GetModeledError() {
  assert(this->GetErrorType() == WorkspacesInstancesErrors::THROTTLING);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ThrottlingException(payload.GetDecoder());
}

template <>
AWS_WORKSPACESINSTANCES_API ServiceQuotaExceededException WorkspacesInstancesError::GetModeledError() {
  assert(this->GetErrorType() == WorkspacesInstancesErrors::SERVICE_QUOTA_EXCEEDED);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ServiceQuotaExceededException(payload.GetDecoder());
}

template <>
AWS_WORKSPACESINSTANCES_API VolumeModificationRateExceededException WorkspacesInstancesError::GetModeledError() {
  assert(this->GetErrorType() == WorkspacesInstancesErrors::VOLUME_MODIFICATION_RATE_EXCEEDED);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return VolumeModificationRateExceededException(payload.GetDecoder());
}

template <>
AWS_WORKSPACESINSTANCES_API ResourceNotFoundException WorkspacesInstancesError::GetModeledError() {
  assert(this->GetErrorType() == WorkspacesInstancesErrors::RESOURCE_NOT_FOUND);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ResourceNotFoundException(payload.GetDecoder());
}

template <>
AWS_WORKSPACESINSTANCES_API InternalServerException WorkspacesInstancesError::GetModeledError() {
  assert(this->GetErrorType() == WorkspacesInstancesErrors::INTERNAL_SERVER);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return InternalServerException(payload.GetDecoder());
}

template <>
AWS_WORKSPACESINSTANCES_API ValidationException WorkspacesInstancesError::GetModeledError() {
  assert(this->GetErrorType() == WorkspacesInstancesErrors::VALIDATION);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ValidationException(payload.GetDecoder());
}

namespace WorkspacesInstancesErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int VOLUME_MODIFICATION_RATE_EXCEEDED_HASH = HashingUtils::HashString("VolumeModificationRateExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkspacesInstancesErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkspacesInstancesErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == VOLUME_MODIFICATION_RATE_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkspacesInstancesErrors::VOLUME_MODIFICATION_RATE_EXCEEDED),
                                RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkspacesInstancesErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace WorkspacesInstancesErrorMapper
}  // namespace WorkspacesInstances
}  // namespace Aws
