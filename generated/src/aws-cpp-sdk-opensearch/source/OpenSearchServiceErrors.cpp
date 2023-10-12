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

static constexpr uint32_t DISABLED_OPERATION_HASH = ConstExprHashingUtils::HashString("DisabledOperationException");
static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t INTERNAL_HASH = ConstExprHashingUtils::HashString("InternalException");
static constexpr uint32_t DEPENDENCY_FAILURE_HASH = ConstExprHashingUtils::HashString("DependencyFailureException");
static constexpr uint32_t RESOURCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExistsException");
static constexpr uint32_t BASE_HASH = ConstExprHashingUtils::HashString("BaseException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t INVALID_TYPE_HASH = ConstExprHashingUtils::HashString("InvalidTypeException");
static constexpr uint32_t SLOT_NOT_AVAILABLE_HASH = ConstExprHashingUtils::HashString("SlotNotAvailableException");
static constexpr uint32_t INVALID_PAGINATION_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidPaginationTokenException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == DISABLED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::DISABLED_OPERATION), false);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::CONFLICT), false);
  }
  else if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::INTERNAL), false);
  }
  else if (hashCode == DEPENDENCY_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::DEPENDENCY_FAILURE), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == BASE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::BASE), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::INVALID_TYPE), false);
  }
  else if (hashCode == SLOT_NOT_AVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::SLOT_NOT_AVAILABLE), false);
  }
  else if (hashCode == INVALID_PAGINATION_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServiceErrors::INVALID_PAGINATION_TOKEN), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace OpenSearchServiceErrorMapper
} // namespace OpenSearchService
} // namespace Aws
