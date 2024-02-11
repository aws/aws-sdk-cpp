/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/OpenSearchServiceErrors.h>
#include <aws/opensearch/model/SlotNotAvailableException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::OpenSearchService;
using namespace Aws::OpenSearchService::Model;

namespace Aws
{
namespace OpenSearchService
{
template<> AWS_OPENSEARCHSERVICE_API SlotNotAvailableException OpenSearchServiceError::GetModeledError()
{
  assert(this->GetErrorType() == OpenSearchServiceErrors::SLOT_NOT_AVAILABLE);
  return SlotNotAvailableException(this->GetJsonPayload().View());
}

namespace OpenSearchServiceErrorMapper
{

static const int DISABLED_OPERATION_HASH = HashingUtils::HashString("DisabledOperationException");
static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int DEPENDENCY_FAILURE_HASH = HashingUtils::HashString("DependencyFailureException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int BASE_HASH = HashingUtils::HashString("BaseException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INVALID_TYPE_HASH = HashingUtils::HashString("InvalidTypeException");
static const int SLOT_NOT_AVAILABLE_HASH = HashingUtils::HashString("SlotNotAvailableException");
static const int INVALID_PAGINATION_TOKEN_HASH = HashingUtils::HashString("InvalidPaginationTokenException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == DISABLED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::DISABLED_OPERATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::INTERNAL), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DEPENDENCY_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::DEPENDENCY_FAILURE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::RESOURCE_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BASE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::BASE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == INVALID_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::INVALID_TYPE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SLOT_NOT_AVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::SLOT_NOT_AVAILABLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PAGINATION_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::INVALID_PAGINATION_TOKEN), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace OpenSearchServiceErrorMapper
} // namespace OpenSearchService
} // namespace Aws
