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

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int INSUFFICIENT_CAPACITY_HASH = HashingUtils::HashString("InsufficientCapacityException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int INVALID_PAGINATION_HASH = HashingUtils::HashString("InvalidPaginationException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftServerlessErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftServerlessErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftServerlessErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == INSUFFICIENT_CAPACITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftServerlessErrors::INSUFFICIENT_CAPACITY), RetryableType::RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftServerlessErrors::TOO_MANY_TAGS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PAGINATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftServerlessErrors::INVALID_PAGINATION), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace RedshiftServerlessErrorMapper
} // namespace RedshiftServerless
} // namespace Aws
