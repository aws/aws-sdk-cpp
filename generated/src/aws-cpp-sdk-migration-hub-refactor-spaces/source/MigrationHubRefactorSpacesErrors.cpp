/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesErrors.h>
#include <aws/migration-hub-refactor-spaces/model/ConflictException.h>
#include <aws/migration-hub-refactor-spaces/model/ServiceQuotaExceededException.h>
#include <aws/migration-hub-refactor-spaces/model/ThrottlingException.h>
#include <aws/migration-hub-refactor-spaces/model/ResourceNotFoundException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MigrationHubRefactorSpaces;
using namespace Aws::MigrationHubRefactorSpaces::Model;

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
template<> AWS_MIGRATIONHUBREFACTORSPACES_API ConflictException MigrationHubRefactorSpacesError::GetModeledError()
{
  assert(this->GetErrorType() == MigrationHubRefactorSpacesErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_MIGRATIONHUBREFACTORSPACES_API ServiceQuotaExceededException MigrationHubRefactorSpacesError::GetModeledError()
{
  assert(this->GetErrorType() == MigrationHubRefactorSpacesErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_MIGRATIONHUBREFACTORSPACES_API ThrottlingException MigrationHubRefactorSpacesError::GetModeledError()
{
  assert(this->GetErrorType() == MigrationHubRefactorSpacesErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_MIGRATIONHUBREFACTORSPACES_API ResourceNotFoundException MigrationHubRefactorSpacesError::GetModeledError()
{
  assert(this->GetErrorType() == MigrationHubRefactorSpacesErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

namespace MigrationHubRefactorSpacesErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int INVALID_RESOURCE_POLICY_HASH = HashingUtils::HashString("InvalidResourcePolicyException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MigrationHubRefactorSpacesErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MigrationHubRefactorSpacesErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MigrationHubRefactorSpacesErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_RESOURCE_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MigrationHubRefactorSpacesErrors::INVALID_RESOURCE_POLICY), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MigrationHubRefactorSpacesErrorMapper
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
