/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/redshift-serverless/RedshiftServerlessErrors.h>
#include <aws/redshift-serverless/model/ThrottlingException.h>
#include <aws/redshift-serverless/model/ResourceNotFoundException.h>
#include <aws/redshift-serverless/model/TooManyTagsException.h>
#include <aws/redshift-serverless/model/AccessDeniedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::RedshiftServerless;
using namespace Aws::RedshiftServerless::Model;

namespace Aws
{
namespace RedshiftServerless
{
template<> AWS_REDSHIFTSERVERLESS_API ThrottlingException RedshiftServerlessError::GetModeledError()
{
  assert(this->GetErrorType() == RedshiftServerlessErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_REDSHIFTSERVERLESS_API ResourceNotFoundException RedshiftServerlessError::GetModeledError()
{
  assert(this->GetErrorType() == RedshiftServerlessErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_REDSHIFTSERVERLESS_API TooManyTagsException RedshiftServerlessError::GetModeledError()
{
  assert(this->GetErrorType() == RedshiftServerlessErrors::TOO_MANY_TAGS);
  return TooManyTagsException(this->GetJsonPayload().View());
}

template<> AWS_REDSHIFTSERVERLESS_API AccessDeniedException RedshiftServerlessError::GetModeledError()
{
  assert(this->GetErrorType() == RedshiftServerlessErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace RedshiftServerlessErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t INSUFFICIENT_CAPACITY_HASH = ConstExprHashingUtils::HashString("InsufficientCapacityException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t INVALID_PAGINATION_HASH = ConstExprHashingUtils::HashString("InvalidPaginationException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftServerlessErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftServerlessErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftServerlessErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == INSUFFICIENT_CAPACITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftServerlessErrors::INSUFFICIENT_CAPACITY), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftServerlessErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == INVALID_PAGINATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftServerlessErrors::INVALID_PAGINATION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace RedshiftServerlessErrorMapper
} // namespace RedshiftServerless
} // namespace Aws
